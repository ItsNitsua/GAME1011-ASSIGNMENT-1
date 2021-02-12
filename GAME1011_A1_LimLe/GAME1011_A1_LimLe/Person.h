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
	Person(int age);
	~Person();

	void setName(string name);
	void setAge(int age);

	string getPersonName() const;
	int getPersonAge() const;
	virtual void DisplayInfo() = 0;
};

class Student : public Person
{
private:
	string m_school;
	string m_pro;
	int m_enroll;
public:
	Student();
	Student(string scho, string prog, int enroll, int age);
	~Student();
	void setCollege(string scho);
	void setProgram(string prog);
	void setEnrollment(int enroll);

	string getCollege() const;
	string getProgram() const;
	int getEnrollment() const;
	virtual void DisplayInfo() ;
};

class NonGaming : public Student
{
private:
	string m_prefer;
	int m_hourspending;
	
public:
	NonGaming();
	NonGaming( string prfr, int hour, string scho, string prog, int enroll, int age);
	~NonGaming();

	void setStreaming(string prfr);
	void setHourStream(int hour);

	string getStreaming() const;
	int getHourStream() const;
	virtual void DisplayInfor() const;

};

class Gaming : public Student
{
private:
	string m_prefer;
	int m_hourspending;
	
public:
	Gaming();
	Gaming(string prfr, int hour, string scho, string prog, int enroll, int age);
	~Gaming();

	void setGaming(string prfr);
	void setHourGaming(int hour);

	string getGaming() const;
	int getHourGaming() const;
	virtual void DisplayInfor() const;
};


class Survey
{
private:
	int m_averageAge;
	int m_averageHour;
	int m_averageAge2;
	int m_averageHour2;
	string most_preferNG;
	string most_preferG;
	string m_prefer;
	int m_hourspending;
	string m_school;
	string m_pro;
	int m_enroll;
	int m_age;
public:
	
	virtual void DisplayInfo() const;
	Survey();
	Survey(string prfr, int hour, string scho, string prog, int enroll, int age);
	void setAge(int age);
	int getPersonAge() const;
	void setCollege(string scho);
	void setProgram(string prog);
	void setEnrollment(int enroll);
	string getCollege() const;
	string getProgarm() const;
	int getEnrollment() const;
	void setPrefer(string prfr);
	void setHourPrefer(int hour);
	string getPrefer() const;
	int getHourPrefer() const;
	void setAA(int age, int total) ;
	void setAH(int hour, int total) ;
	int getAA() const;
	int getAH() const;
	void setAA2(int age, int total);
	void setAH2(int hour, int total);
	int getAA2() const;
	int getAH2() const;
	void setTotalGaming(int total);
	void setTotalNonGaming(int total);
	int getTotalGaming() const;
	int getTotalNonGaming() const;
};
#endif