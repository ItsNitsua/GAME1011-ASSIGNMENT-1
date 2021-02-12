#include <iostream>
#include <string>
#include <cstdlib>
#include "Person.h"

using namespace std;
int main()
{
	string college[3] = { "GeorgeBrown", "Senica", "Humber" };
	string Program[3] = { "GamePrograming", "Bussiness", "Designer" };
	string gamingDevice[3] = { "NintendoSwitch, Xbox, Playstation" };
	string nongamingDevice[3] = { "Sports, Books, BoardGames" };
    int hoursSpend[3] = { 5, 10 ,15 };
	int age[5] = {20,21,22,23,25};
	int enroll[3] = {1,2,3};

	int participantsSize;
	int totalAA_nongaming = 0;
	int totalAA_gaming = 0;
	int totalHour_nongaming = 0;
	int totalHour_gaming = 0;
	int nonGaming = 0;
	int ggaming = 0;
	int ranformainpurpose;
	int ranforenroll;
	int ranforcollege;
	int ranforprogram;
	int ranforage;
	int ranforhour;
	int ranforgaming;
	int ranforstreaming;

	//hi
	


	cout << "How many do you want in your student survey?" << endl;
	cin >> participantsSize;
	Survey* survey = new Survey[participantsSize];
	Survey survayProcess;
	NonGaming nongaming;
	Gaming gaming;

	for (int i = 0; i < participantsSize; i++)
	{
		ranformainpurpose = rand() % 2;
		ranforcollege = rand() % 3;
		ranforprogram = rand() % 3;
		ranforage = rand() % 5;
		ranforhour = rand() % 3;
		ranforenroll = rand() % 3;
		//Non-Gaming counter
		if (ranformainpurpose == 0)
		{
			nonGaming++;
			ranforstreaming = rand() % 3;
			nongaming = {nongamingDevice[ranforstreaming], hoursSpend[ranforhour],college[ranforcollege],Program[ranforprogram],enroll[ranforenroll], age[ranforage] };
			survey[i].setCollege(nongaming.getCollege());
			survey[i].setHourPrefer(nongaming.getHourStream());
			survey[i].setPrefer(nongaming.getStreaming());
			survey[i].setProgram(nongaming.getProgram());
			survey[i].setEnrollment(nongaming.getEnrollment());
			survey[i].setAge(nongaming.getPersonAge());
			totalAA_nongaming += survey[i].getPersonAge() ;
			totalHour_nongaming += survey[i].getHourPrefer();
		}
		//Gaming counter
		else if (ranformainpurpose == 1)
		{
			ggaming++;
			ranforgaming = rand() % 3;
			gaming = { gamingDevice[ranforgaming], hoursSpend[ranforhour],college[ranforcollege],Program[ranforprogram],enroll[ranforenroll], age[ranforage] };
			survey[i].setCollege(gaming.getCollege());
			survey[i].setHourPrefer(gaming.getHourGaming());
			survey[i].setPrefer(gaming.getGaming());
			survey[i].setProgram(gaming.getProgram());
			survey[i].setEnrollment(gaming.getEnrollment());
			survey[i].setAge(gaming.getPersonAge());
			totalAA_gaming += survey[i].getPersonAge();
			totalHour_gaming += survey[i].getHourPrefer();
		}
	}
	survayProcess.setAA2(totalAA_gaming, ggaming);
	survayProcess.setAH2(totalHour_gaming, ggaming);
	survayProcess.setAA(totalAA_nongaming, nonGaming);
	survayProcess.setAA(totalHour_nongaming, nonGaming);
}