#pragma once
#include <iostream>
#include<string>
using namespace std;
class Person {
protected:
	string name;
	int age;
	string gender;
	string address;
	string email;

public:
	Person() {
		name = "";
		age = 0;
		gender = "";
		address = "";
		email = "";
	}
	Person(const string& name, int age, const string& gender, const string& address, const string& email) {
		this->name = name;
		this->age = age;
		this->gender = gender;
		this->address = address;
		this->email = email;
	}
	~Person() {}
	virtual void display() {
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Gender: " << gender << endl;
		cout << "Address: " << address << endl;
		cout << "Email: " << email << endl;
	}
	virtual double computePayRoll() = 0;
};
