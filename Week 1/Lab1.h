#pragma once
#include <iostream>
using namespace std;
//
//class Platform
//{
//private:
//	string PName, Manufacturer, games;
//	int Ngames, Nplatforms;
//	double* aPtr;
//public:
//	// Contructor
//	Platform(string PlatName, string Manufacturer) // Default constructor
//	{
//		PlatName = "NONE";
//		Manufacturer = "NONE";
//	}
//	// Inline functions
//	string setPlatformName()
//	{
//		return PName;
//	}
//	string setManufacturer()
//	{
//		return Manufacturer;
//	}
//	void printGamesAndPlatform() const
//	{
//		cout << "You have " << this->games << "games on the " << this->PName <<endl;
//	}
//	void PlatformInput() 
//	{
//		cout << "How many platforms do you have? " << endl;
//		cin >> Nplatforms;
//		Nplatforms = 
//		return Nplatforms;
//	}
//	void setArraygames(Platform &games)
//	{
//		Ngames = games.Ngames;
//		aPtr = new double[Ngames]; // Allocate a new array given an arraySize
//		for (int i = 0; i < Ngames; i++)
//		{
//			aPtr[i] = games.aPtr[i];
//		}
//	}
//};
//
//class Game
//{
//private:
//	string GName, Publisher, Developer;
//	int ArrayAchievements;
//public:
//	// Contructor
//	Game() // Default constructor
//	{
//		GName = "NONE";
//		Publisher = "NONE";
//	}
//	Game(string GName1, string Publisher1, string Developer1, int ArrayAchievements1)
//	{
//		GName = GName1;
//		Publisher = Publisher1;
//		ArrayAchievements = ArrayAchievements1;
//	}
//	// Inline functions
//	string getGName()
//	{
//		return GName;
//	}
//	string getPublisher()
//	{
//		return Publisher;
//	}
//	string getDeveloper()
//	{
//		return Developer;
//	}
//	int getArrayAchievements()
//	{
//		return ArrayAchievements;
//	}
//};
//
//class Achievement
//{
//private:
//	string Title, Description;
//	double Score;
//
//public:
//	// Contructor
//	Achievement() // Default constructor
//	{
//		Title = "NONE";
//		Description = "NONE";
//		Score = 0;
//	}
//	Achievement(string Title1, string Description1, int Score1)
//	{
//		Title = Title1;
//		Description = Description1;
//		Score = Score1;
//	}
//	// Inline functions
//	string getTitle()
//	{
//		return Title;
//	}
//	string getDescription()
//	{
//		return Description;
//	}
//	int getScore()
//	{
//		return Score;
//	}
//};