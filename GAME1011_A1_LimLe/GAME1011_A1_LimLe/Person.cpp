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
	cout << "The number of Non Gaming students: " << getTotalNonGaming() << endl;
	cout << "The average age: " << getAA() << endl;
	cout << "The most prefer streaming device: " << getMostPreferNG() << endl;
	cout << "The average hour spending: " << getAH() << endl;
	cout << "====================================================" << endl;
	cout << "The number of Gaming students: " << getTotalGaming() << endl;
	cout << "The average age: " << getAA2() << endl;
	cout << "The most prefer gaming device: " << getMostPreferG() << endl;
	cout << "The average hour spending: " << getAH2() << endl;
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
// Processing

void Survey::setAA(int age,int total) 
{
	if (total == 0)
	{
		m_averageAge = 0;
	}
	else
	{
		m_averageAge = age / total;
	}
}

void Survey::setAH(int hour, int total) 
{
	if (total == 0)
	{
		m_averageHour = 0;
	}
	else
	{
		m_averageHour = hour / total;
	}
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
	if (total == 0)
	{
		m_averageAge2 = 0;
	}
	else
	{
		m_averageAge2 = age / total;
	}
	
}

void Survey::setAH2(int hour, int total)
{
	if (total == 0)
	{
		m_averageHour2 = 0;
	}
	else
	{
		m_averageHour2 = hour / total;
	}
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
	if (total == 0)
	{
		m_totalGaming = 0;
	}
	else
	{
		m_totalGaming = total;
	}
}

void Survey::setTotalNonGaming(int total)
{
	if (total == 0)
	{
		m_totalNonGaming = 0;
	}
	else
	{
		m_totalNonGaming = total;
	}
}

int Survey::getTotalGaming() const
{
	return m_totalGaming;
}

int Survey::getTotalNonGaming() const
{
	return m_totalNonGaming;
}

void Survey::setMostPreferNG(int first, int second, int third, string item1, string item2, string item3)
{
	string drawOp = "Same with all three";
	if (first > (second && third))
	{
		m_preferNG = item1;
	}
	else if (second > (first && third))
	{
		m_preferNG = item2;
	}
	else if (third > (first && second))
	{
		m_preferNG = item3;
	}
	else if ((third == second == first) == 0)
	{
		m_preferNG = "NONE";
	}
	else if (third == second == first)
	{
		m_preferNG = drawOp;
	}
	
}

void Survey::setMostPreferG(int first, int second, int third, string item1, string item2, string item3)
{
	string drawOp = "Same with all three";
	if (first > (second && third))
	{
		m_preferG = item1;
	}
	else if (second > (first && third))
	{
		m_preferG = item2;
	}
	else if (third > (first && second))
	{
		m_preferG = item3;
	}
	else if ((third == second == first) == 0)
	{
		m_preferG = "NONE";
	}
	else if (third == second == first)
	{
		m_preferG = drawOp;
	}
	
}

string Survey::getMostPreferNG() const
{
	return m_preferNG;
}

string Survey::getMostPreferG() const
{
	return m_preferG;
}






