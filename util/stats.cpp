#include <iostream>
#include <map>
#include <filesystem>

namespace fs = std::filesystem;

int main() {
	std::map<char,int> stats;
	int total = 0;
	for(const auto& entry : fs::directory_iterator("../")) {
		std::string filename = entry.path();
		if(filename.substr(filename.size() - 4) != ".cpp") continue;
		char level = filename.at(filename.size() - 5);
		if(stats.find(level) == stats.end()) {
			stats[level] = 1;
		} else {
			stats[level]++;
		}
		total++;
	}
	for(const std::pair<int,int>& p: stats) {
		std::cout << (char)p.first << " -> " << p.second << std::string(5-(std::to_string(p.second)).size(), ' ') << "| " << (p.second/(double)total)*100 << "%"  << std::endl;
	}
	std::cout << total << " total problems solved" << std::endl;
}