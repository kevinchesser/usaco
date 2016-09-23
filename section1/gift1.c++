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

class Person{
	int total;
	string name;
    public:
	void setTotal(int);
	int getTotal();
	void setName(string);
	string getName();
};

void Person::setTotal(int total){
	this->total = total;
}

void Person::setName(string name){
	this->name = name;
}

int Person::getTotal(){
	return this->total;
}

string Person::getName(){
	return this->name;
}

int main(){
	ifstream fin("gift1.in");
	ofstream fout("gift1.out");
	vector<Person> personVector;
	int numOfPeople;
	fin >> numOfPeople;
	for(int i = 0; i < numOfPeople; i++){
		Person person;
		string name;
		fin >> name;
		person.setName(name);
		personVector.push_back(person);
	}
	for(int i=0; i < numOfPeople; i++){
		Person person = personVector.at(i);
		cout << person.getName() << endl;
	}
}
