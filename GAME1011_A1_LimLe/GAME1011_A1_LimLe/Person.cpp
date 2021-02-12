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

string Student::getProgram() const
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


void Gaming::setGaming(string prfr)
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
void Gaming::DisplayInfor()  const
{
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

void NonGaming::setStreaming(string prfr)
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

void NonGaming::DisplayInfor() const
{
	cout << "The average age of Non Gaming students " << endl;
}





void Survey::DisplayInfo() const
{
	cout << "The average age of Non Gaming students " << getAA() << endl;
}

Survey::Survey()
{
	m_age = 0;
	m_enroll = 0;
	m_pro = " ";
	m_school = "";
	m_hourspending = 0;
	m_prefer = "";
}

Survey::Survey(string prfr, int hour, string scho, string prog, int enroll, int age)
{
	m_age = age;
	m_enroll = enroll;
	m_pro = prog;
	m_school = scho;
	m_hourspending = hour;
	m_prefer = prfr;
}

void Survey::setAge(int age)
{
	m_age = age;
}

int Survey::getPersonAge() const
{
	return m_age;
}

void Survey::setCollege(string scho)
{
	m_school = scho;
}

void Survey::setProgram(string prog)
{
	m_pro = prog;
}

void Survey::setEnrollment(int enroll)
{
	m_enroll = enroll;
}

string Survey::getCollege() const
{
	return m_school;
}

string Survey::getProgarm() const
{
	return m_pro;
}

int Survey::getEnrollment() const
{
	return m_enroll;
}

void Survey::setPrefer(string prfr)
{
	m_prefer = prfr;
}

void Survey::setHourPrefer(int hour)
{
	m_hourspending = hour;
}

string Survey::getPrefer() const
{
	return m_prefer;
}

int Survey::getHourPrefer() const
{
	return m_hourspending;
}

void Survey::setAA(int age,int total) 
{
	m_averageAge = age / total;
}

void Survey::setAH(int hour, int total) 
{
	m_averageHour = hour / total;
}

int Survey::getAA() const
{
	return m_averageAge;
}

int Survey::getAH() const
{
	return m_averageHour;
}
void Survey::setAA2(int age, int total)
{
	m_averageAge2 = age / total;
}

void Survey::setAH2(int hour, int total)
{
	m_averageHour2 = hour / total;
}

int Survey::getAA2() const
{
	return m_averageAge2;
}

int Survey::getAH2() const
{
	return m_averageHour2;
}

void Survey::setTotalGaming(int total)
{
}

void Survey::setTotalNonGaming(int total)
{
}

int Survey::getTotalGaming() const
{
	return 0;
}

int Survey::getTotalNonGaming() const
{
	return 0;
}


