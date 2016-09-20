/*
ID: kevin.c3
PROG: ride 
LANG: C++11
*/
#include <iostream>
#include <fstream>
#include <string>
#include <array>

using namespace std;

int main()
{
	ifstream fin("ride.in");
	ofstream fout("ride.out");
	string comet, group;
	fin >> comet;
	fin >> group;
	int comtot = 1;
	int grotot = 1;
	for(int i = 0; i < comet.length(); i++){
		char ch = comet.at(i);
		ch = ch - 'A' + 1;
		int c = ch;
		comtot = comtot * c;
	}
	for(int i = 0; i < group.length(); i++){
		char ch = group.at(i);
		ch = ch - 'A' + 1;
		int c = ch;
		grotot = grotot * c;
	}
	
	comtot = comtot % 47;
	grotot = grotot % 47;
	if(comtot == grotot){
		fout << "GO" << endl;	
	}
	else{
		fout << "STAY" << endl;
	}


	return 0;
}
