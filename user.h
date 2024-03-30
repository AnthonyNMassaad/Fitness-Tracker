#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>
#include <list>
#include <iomanip>
#include <Windows.h>
using namespace std;

class User
{
public:
	User();	// Default constructor
	User(string&, string&, int&, double&, double&);	// constructor

													// GET methods
	void getBMI(); // Method to get BMI
	string getName(); // Method to get user's name
	int GetAge(); // Method to get user's age
	string GetGender(); // Method to get user's gender
	double GetHeight(); // Method to get user's height
	double getWeight(); // Method to get user's weight

						// SET functions
	void SetName();	// Method to set user's name
	void SetAge(); // Method to set user's age
	void SetGender(); // Method to set user's gender
	void Setheight(); // Method to set user's height
	void Setweight(); // Method to set user's weight

	void Calculate_BMI(); // Method to calculate BMI
	double rtrnBMI();  // Method to return BMI value

					   // Methods to update user information if entered incorrectly
	void UpdateBMI();
	void UpdateWeight();
	void UpdateHeight();
	void UpdateName();
	void UpdateAge();
	void UpdateGender();

	void DisplayProfile(); // Method to display user's profile
	string toLowerCase(const string&); // Method to convert string to lowercase, to handle insensitive input from user
	void WaitAndClear(); // Method to wait and clear the screen

private:
	string name = "";
	string gender = "";
	int age = 0;
	double height = 0;
	double weight = 0;
	double BMI = 0;
	list <string> UserInformation; // List to store user information

};

#endif
