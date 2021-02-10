#pragma once
#ifndef _PERSON_H_
#define _PERSON_H_

using namespace std; 

enum College {GeorgeBrown, Senica, Humber};
enum Program {GamePrograming, Bussiness, Designer };
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

	string getPersonName() const;
	int getPersonAge() const;
	virtual void DisplayInfo() const = 0;
};

class Student : public Person
{
private:
	College m_school;
	Program m_pro;
	int m_enroll;
public:
	Student();
	Student(College scho, Program prog, int enroll);
	~Student();
	void setCollege(College scho);
	void setProgram(Program prog);
	void setEnrollment(int enroll);

	College getCollege() const;
	Program getProgarm() const;
	int getEnrollment() const;
	virtual void DisplayInfo() const;
};

#endif