#pragma once
#ifndef _PERSON_H_
#define _PERSON_H_

using namespace std; 
class Person
{
private:
	string m_name;
	int m_age;

public:
	Person();
	Person(string name, int age);
	~Person();

	void setName(string name);
	void setAge(int age);

	string getPersonName();
	int getPersonAge();
};







#endif