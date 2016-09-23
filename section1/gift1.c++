/*
ID: kevin.c3
PROG: gift1
LANG: C++11
*/
#include <iostream>
#include <fstream>
#include <string>
#include <array>
#include <vector>

using namespace std;

int main(){
	ifstream fin("gift1.in");
	ofstream fout("gift1.out");
	int numOfPeople;
	fin >> numOfPeople;
	int totals[numOfPeople];
	string names[numOfPeople];
	for(int i = 0; i < numOfPeople; i++){
		string name;
		fin >> name;
		names[i] = name;
		totals[i] = 0;
	}
	while(!fin.eof()){//While not at the end of the file
		string curname;
		int dollars, div;
		fin >> curname;
		fin >> dollars >> div;
		int giver = 0;
		int split = 0;
		if(div > 0){
			giver = (-1 * dollars) + (dollars - ((dollars/div) * div));	
			split = dollars / div;
		}
		vector<string> divnames;
		for(int i = 0; i < div; i++){
			string name;
			fin >> name;
			divnames.push_back(name);
		}
		for(int i = 0; i < numOfPeople; i++){
			if(names[i] == curname){
				totals[i] += giver;
			}
			for(int j = 0; j < div; j++){
				if(names[i] == divnames.at(j)){
					totals[i] += split; 
				}
			}
		}
	}
	for(int i = 0; i < numOfPeople ; i++){
		fout << names[i] << " " << totals[i] << endl;
	}
}
