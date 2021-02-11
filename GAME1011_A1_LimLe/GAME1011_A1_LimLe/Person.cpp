#include <iostream>
#include "Person.h"

using namespace std;

Person::Person()
{
	m_name = "N/A";
	m_age = 0;
}

Person::Person(string name, int age)
{
	m_name = name;
	m_age = age;
}

Person::Person(int age)
{
	m_age = age;
}


Person::~Person()
= default;

void Person::setName(string name)
{
	m_name = name;
}

void Person::setAge(int age)
{
	m_age = age;
}

string Person::getPersonName() const
{
	return m_name;
}

int Person::getPersonAge() const
{
	return m_age;
}

Student::Student()
{
	m_school = "N/A";
	m_pro = "N/A";
	m_enroll = 0;
}

Student::Student(string scho, string prog, int enroll, int age) : Person(age)
{
	m_school = scho;
	m_pro = prog;
	m_enroll = enroll;
}

Student::~Student()
= default;

void Student::setCollege(string scho)
{
	m_school = scho;
}

void Student::setProgram(string prog)
{
	m_pro = prog;
}

void Student::setEnrollment(int enroll)
{
	m_enroll = enroll;
}

string Student::getCollege() const
{
	return m_school;
}

string Student::getProgarm() const
{
	return m_pro;
}

int Student::getEnrollment() const
{
	return m_enroll;
}

void Student::DisplayInfo()
{

}
// Gaming class
Gaming::Gaming()
{
	m_hourspending = 0;
	m_prefer = "N/A";
}

Gaming::Gaming( string prfr, int hour, string scho, string prog, int enroll, int age) : Student(scho, prog,  enroll, age)
{
	m_hourspending = hour;
	m_prefer = prfr;
}

Gaming::~Gaming()
= default;


void Gaming::setGaming(bool prfr)
{
	 m_prefer = prfr;
}

void Gaming::setHourGaming(int hour)
{
	m_hourspending = hour;
}

string Gaming::getGaming() const
{
	return m_prefer;
}

int Gaming::getHourGaming() const
{
	return m_hourspending;
}
// NonGaming
NonGaming::NonGaming()
{
	m_hourspending = 0;
	m_prefer = "N/A";
}

NonGaming::NonGaming(string prfr, int hour,string scho, string prog, int enroll, int age) :Student(scho, prog, enroll, age)
{
	m_hourspending = hour;
	m_prefer = prfr;
}

NonGaming::~NonGaming()
= default;

void NonGaming::setStreaming(bool prfr)
{
	m_prefer = prfr;
}

void NonGaming::setHourStream(int hour)
{
	m_hourspending = hour;
}

string NonGaming::getStreaming() const
{
	return m_prefer;
}

int NonGaming::getHourStream() const
{
	return m_hourspending;
}

void Survey::DisplayInfo() 
{
	cout << "The average age of Non Gaming students " << getAA() << endl;
}

void Survey::setAA(int age,int total) 
{
	m_averageAge = age / total;

}

void Survey::setAH(int hour, int total) 
{
	m_averageHour = hour / total;
}

int Survey::getAA()
{
	return m_averageAge;
}

int Survey::getAH()
{
	return m_averageHour;
}

