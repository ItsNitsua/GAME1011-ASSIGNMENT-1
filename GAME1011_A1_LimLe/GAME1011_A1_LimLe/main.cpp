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


	int age[5] = {20,21,22,23,25};

	int participantsSize;
	int totalAA;
	int totalHour;
	int ranformainpurpose = rand() % 2;
	int ranforcollege;
	int ranforprogram;
	int ranforage;

	//hi
	int hoursSpend[3] = { 5, 10 ,15 };


	cout << "How many do you want in your student survey?" << endl;
	cin >> participantsSize;
	Survey* survey = new Survey[participantsSize];
	for (int i = 0; i < participantsSize; i++)
	{
		ranformainpurpose = rand() % 2;
		if (ranformainpurpose == 0)
		{

		}
		else if (ranformainpurpose == 1)
		{

		}

	}
}