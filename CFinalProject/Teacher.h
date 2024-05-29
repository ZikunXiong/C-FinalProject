#pragma once
#include <iostream>
#include<string>
#include"Person.h"
using namespace std;

class Teacher :public Person {
private:
	string specialty;
	string degree;
	double hoursWorked;
	bool fullTimeOrNot = false;
	void updateFullTimeStatus() {
		fullTimeOrNot = (hoursWorked >= 32);
	}
public:
	Teacher() {
		specialty = "";
		degree = "";
		hoursWorked = 0;
	}
	Teacher(const string& name, int age, const string& gender, const string& address, const string& email, const string& s, const string& d, double h)
		:Person(name, age, gender, address, email), specialty(s), degree(d), hoursWorked(h) {
		updateFullTimeStatus();
	}


	int getDegreeRate() {
		if (degree == "PHD") {
			return 112;
		}
		else if (degree == "Master") {
			return 82;
		}
		else if (degree == "Bachelor") {
			return 42;
		}
		else {
			return 0;
		}
	}


	double computePayRoll() override {
		if (fullTimeOrNot) {
			return 32 * getDegreeRate() * 2 * 0.85;
		}
		else {
			return hoursWorked * getDegreeRate() * 2 * 0.76;
		}
	}

	void display() override {
		Person::display();
		cout << "Specialty: " << specialty << endl;
		cout << "Degree: " << degree << endl;
		cout << "Full time or part time: " << fullTimeOrNot << endl;
		cout << "Salary" << computePayRoll() << endl << endl;
	}
};
