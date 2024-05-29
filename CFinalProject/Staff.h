#pragma once
#include"Person.h"
#include<string>
#include <iostream>
using namespace std;


class Staff :public Person {
private:
	string duty;
	double workload;

public:
	Staff(const string& name, int age, const string& gender, const string& address, const string& email, const string& d, double w)
		:Person(name, age, gender, address, email), duty(d), workload(w) {};
	double computePayRoll() override {
		return workload * 32 * 2 * 0.75;
	}
	void display() override {
		Person::display();
		cout << "The duty:" << duty << endl;
		cout << "The salary: " << workload << endl;
	}
};