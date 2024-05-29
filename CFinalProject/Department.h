#pragma once
#include<string>
#include <iostream>
#include<vector>
#include"Teacher.h"
#include"Staff.h"
using namespace std;

class Department {
private:
	vector<Person*> persons;

public:
	Department() {}
	~Department() {
		persons.clear();
	}

	void addPerson(Person* p) {
		persons.push_back(p);
	}

	void displayAll() const {
		for (const auto& person : persons)
		{
			person->display();
		}
	}
	/*private:
		vector<Teacher*> Teachers;
		vector<Staff*> Staffs;
	public:
		Department() {}
		~Department() {
			Teachers.clear();
			Staffs.clear();
		}
		void addTeacher(Teacher* t) {
			Teachers.push_back(t);
		}
		void addStaff(Staff* s) {
			Staffs.push_back(s);
		}
		void displayAll() {

		}*/
};