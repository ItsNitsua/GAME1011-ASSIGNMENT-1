#include <iostream>
#include <string>
#include <cstdlib>
#include "Person.h"

using namespace std;
int main()
{
	string college[3] = { "GeorgeBrown", "Senaca", "Humber" };
	string Program[3] = { "GamePrograming", "Business", "Designer" };

	string gamingDevices[3] = { "NintendoSwitch", "Playstation", "Xbox" };
	string nongamingDevices[3] = { "Books", "BoardGames", "Sports" };

	int participantsSize;
	int totalAA;
	int totalHour;
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



	}
}