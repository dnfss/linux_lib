
#include<vector>
#include<string>
#include<sstream>

// ref: http://stackoverflow.com/questions/236129/how-to-split-a-string-in-c
std::vector<std::string>& Split(const std::string& str, char delim, std::vector<std::string>& res) {
	std::string item;
	std::stringstream ss(str);
	while( std::getline(ss, item, delim) ) {
		if( !item.empty() ) {
			res.push_back(item);
		}
	}
	return res;
}

std::vector<std::string> Split(const std::string& str, char delim) {
	std::vector<std::string> res;
	Split(str, delim, res);
	return res;
}