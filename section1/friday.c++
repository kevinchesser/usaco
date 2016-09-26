/*
ID: kevin.c3
PROG: friday
LANG: C++11
*/
#include <iostream>
#include <fstream>
#include <array>

using namespace std;

int main(){
	ifstream fin("friday.in");
	ofstream fout("friday.out");
	int monthdays[12] = {31,28,31,30,31,30,31,31,30,31,30,31}; //January, February(29 during leap years), March,
	//April, May, June, July, August, September, October, Novemeber, Decemeber	
	//Every year evenly divisible by 4 is a leap year (1992 = 4*498 so 1992 will be a leap year, but the year 1990 is not a leap year)
	//does not hold for century years. Century years divisible by 400 are leap years,
	//all other are not. Thus, the century years 1700, 1800, 1900 and 2100 are not leap years, but 2000 is a leap year.
	int currentYear = 1900;
	int currentDay = 0;
	int numOfYears;
	fin >> numOfYears;
	int endYear = currentYear + numOfYears;
	int numOfLeapYears = 0;
	bool checked = false;
	for(currentYear; currentYear < endYear; currentYear++){
		if(currentYear % 100 == 0 && currentYear % 400 == 0){
			numOfLeapYears++;
			checked = true;
		}else if(currentYear % 100 == 0 && currentYear % 400 != 0){
			checked = true;
		}
		if(currentYear % 4 == 0 && checked == false){
			numOfLeapYears++;
		}
		checked = false;	
	}
	int totalDays = ((numOfYears - numOfLeapYears) * 365) + (numOfLeapYears * 366);
	for(int i = 0; i < totalDays; i++){
		int day = i % 

	}
	//Can't just do it with all the days, need to take into account the actual days in the month and when the leap years are
}

