//LeNguyenTruongHai-AustinLim 
#include <iostream>
#include <string>
#include <cstdlib>
#include "Person.h"
#include <ctime>

using namespace std;
int main()
{
	//array
	string college[3] = { "GeorgeBrown", "Seneca", "Humber" };
	string Program[3] = { "GamePrograming", "Business", "Designer" };
	string gamingDevice[3] = { "NintendoSwitch", "Xbox", "Playstation" };
	string nongamingDevice[3] = { "Sports", "Books", "BoardGames" };
    int hoursSpend[3] = { 8, 10 ,15 };
	int age[5] = {18,21,24,26,22};
	int enroll[3] = {1,2,3};
	//process
	bool maxium = true;
	int participantsSize;
	int totalAA_nongaming = 0;
	int totalAA_gaming = 0;
	int totalHour_nongaming = 0;
	int totalHour_gaming = 0;
	int nonGaming = 0;
	int ggaming = 0;
	int itemNG1 = 0;
	int itemNG2 = 0;
	int itemNG3 = 0;
	int itemG1 = 0;
	int itemG2 = 0;
	int itemG3 = 0;
	//random
	int ranformainpurpose;
	int ranforenroll;
	int ranforcollege;
	int ranforprogram;
	int ranforage;
	int ranforhour;
	int ranforgaming;
	int ranforstreaming;

	//hi
	

	srand(unsigned (time(NULL)));
	cout << "How many do you want in your student survey?" << endl;
	cin >> participantsSize;
	while (maxium == true)
	{
		if (participantsSize > 500 || participantsSize < 0)
		{
			cout << "Please chose between 0 to 500 " << endl;
			cout << "How many do you want in your student survey?" << endl;
			cin >> participantsSize;
		}
		else
		{
			maxium = false;
		}
	}

	Survey* survey = new Survey[participantsSize];
	Survey surveyProcess;
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
			//cout << ranforage << endl;
			ranforstreaming = rand() % 3;
			nongaming = {nongamingDevice[ranforstreaming], hoursSpend[ranforhour],college[ranforcollege],Program[ranforprogram],enroll[ranforenroll], age[ranforage] };
			survey[i].setCollege(nongaming.getCollege());
			survey[i].setHourPrefer(nongaming.getHourStream());
			survey[i].setPrefer(nongaming.getStreaming());
			survey[i].setProgram(nongaming.getProgram());
			survey[i].setEnrollment(nongaming.getEnrollment());
			survey[i].setAge(nongaming.getPersonAge());
			totalAA_nongaming += survey[i].getPersonAge();
			totalHour_nongaming += survey[i].getHourPrefer();
			nonGaming++;
			if (ranforstreaming == 0)
			{
				itemNG1++;
			}
			else if (ranforstreaming == 1)
			{
				itemNG2++;
			}
			else if (ranforstreaming == 2)
			{
				itemNG3++;
			}
		}
		//Gaming counter
		else if (ranformainpurpose == 1)
		{
			//cout << ranforage << endl;
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
			ggaming++;
			if (ranforgaming == 0)
			{
				itemG1++;
			}
			else if (ranforgaming == 1)
			{
				itemG2++;
			}
			else if (ranforgaming == 2)
			{
				itemG3++;
			}
		}
	}
	//cout << itemNG1 << endl;
	//cout << itemNG2 << endl;
	//cout << itemNG3 << endl;
	//cout << itemG1 << endl;
	//cout << itemG2 << endl;
	//cout << itemG3 << endl;
	surveyProcess.setMostPreferNG(itemNG1, itemNG2, itemNG3, nongamingDevice[0], nongamingDevice[1], nongamingDevice[2]);
	surveyProcess.setMostPreferG(itemG1, itemG2, itemG3, gamingDevice[0], gamingDevice[1], gamingDevice[2]);
	surveyProcess.setTotalGaming(ggaming);
	surveyProcess.setTotalNonGaming(nonGaming);
	surveyProcess.setAA2(totalAA_gaming, ggaming);
	surveyProcess.setAH2(totalHour_gaming, ggaming);
	surveyProcess.setAA(totalAA_nongaming, nonGaming);
	surveyProcess.setAH(totalHour_nongaming, nonGaming);
	//Display
	surveyProcess.DisplayInfo();
	system("Pause");
	delete[] survey;
	return 0;
}