#include <iostream>
#include <map>
#include <filesystem>
#include <cmath>
#include <iomanip>

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

	std::stringstream stream;
	for(const std::pair<int,int>& p: stats) {
		stream.str("");

		float percentage = round(p.second/(double)total * 10000.0)/100;
		stream << std::fixed << std::setprecision(2) << percentage;
		std::string percentage_s = stream.str();

		std::cout << 
		(char)p.first << " ->" << 
		std::string(4-(std::to_string(p.second)).size(), ' ') << p.second <<
		"  |" << 
		std::string(7-percentage_s.size(), ' ') <<
		percentage_s << "%" << 
		std::endl;
	}

	std::cout << total << " total problems solved" << std::endl;
}