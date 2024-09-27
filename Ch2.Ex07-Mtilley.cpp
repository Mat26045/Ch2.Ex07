// Ch2.Ex07-Mtilley.cpp 

#include <iostream>
using namespace std;

int main()
{
	int num;

    double risePerYear; 

    std::cout << "Enter the ocean level rise per year in mm: ";
    std::cin >> risePerYear;

    double riseIn5Years = risePerYear * 5;
    double riseIn7Years = risePerYear * 7;
    double riseIn10Years = risePerYear * 10;

    std::cout << "In 5 years, the ocean level will rise by " << riseIn5Years << " mm." << std::endl;
    std::cout << "In 7 years, the ocean level will rise by " << riseIn7Years << " mm." << std::endl;
    std::cout << "In 10 years, the ocean level will rise by " << riseIn10Years << " mm." << std::endl;

    return 0;
}
