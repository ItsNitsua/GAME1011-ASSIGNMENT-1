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
	m_school = NON;
	m_pro = NONE;
	m_enroll = 0;
}

Student::Student(College scho, Program prog, int enroll)
{
	m_school = scho;
	m_pro = prog;
	m_enroll = enroll;
}

Student::~Student()
= default;

void Student::setCollege(College scho)
{
	m_school = scho;
}

void Student::setProgram(Program prog)
{
	m_pro = prog;
}

void Student::setEnrollment(int enroll)
{
	m_enroll = enroll;
}

College Student::getCollege() const
{
	return m_school;
}

Program Student::getProgarm() const
{
	return m_pro;
}

int Student::getEnrollment() const
{
	return m_enroll;
}

void Student::DisplayInfo() const
{

}

NonGaming::NonGaming()
{
	m_hourspeding = 0;
	m_prefer = false;
}

NonGaming::NonGaming( bool prfr, int hour) 
{
	m_hourspeding = hour;
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
	m_hourspeding = hour;
}

bool NonGaming::getStreaming()
{
	return m_prefer;
}

int NonGaming::getHourStream()
{
	return m_hourspeding;
}
