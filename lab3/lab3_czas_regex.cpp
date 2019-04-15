#include <cstdlib>
#include <iostream>
#include <string>
#include <regex>
#include <cmath>
#include <vector>

std::vector<int> Matches(std::string& str, std::regex reg){
	std::vector<int> hours;
	std::vector<int> minutes;
	std::smatch matches;
	
	while(std::regex_search(str, matches, reg)){
		hours.push_back(std::stoi(matches.str(1)));
		minutes.push_back(std::stoi(matches.str(2)));
		str = matches.suffix().str();
	}

	for(int i = 0; i < hours.size(); i++)
		hours[i] *=60;
	for(int i = 0; i < hours.size(); i++)
		minutes[i] = hours[i] + minutes[i];

	return minutes;
}
unsigned int MinimalDifference(std::vector<int> vec, unsigned int min_diff){
	min_diff = abs(vec[0]-vec[1]);
	std::cout << '\n' << min_diff << '\n';
	for(int t1: vec)
		for(int t2: vec)
			if(abs(t1-t2) < min_diff && t1 != t2)
				min_diff = abs(t1-t2);
	return min_diff;	
}
int main(){
	std::vector<int> minutes;
	unsigned int min_diff;
	std::string str = "blah blah 20:15 or 12:22 or another 7:05 a moze 3:45 0:00";
	std:: regex reg("([0-9]|[0-1][0-9]|2[0-3]):([0-5][0-9])");
	
	minutes = Matches(str, reg);
	
	for(int c: minutes) std::cout << c << ' ' ;
	min_diff = MinimalDifference(minutes, min_diff);
	std::cout << min_diff;

	return 0;
}
//^([0-9]|[0-1][0-9]|2[0-3]):[0-5][0-9]$
