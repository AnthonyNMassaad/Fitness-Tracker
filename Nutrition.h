#ifndef NUTRITION_H
#define NUTRITION_H
#include "user.h"
#include "Workout.h"
#include <iostream>
#include <map>
#include <queue>
#include <Windows.h>
#include <iomanip>
#include <string>
using namespace std;

class Nutrition
{
public:
	Nutrition(); // default constructor

				 // GET functions
	int GetCalorieIntake();   // get daily calorie intake
	int GetProteinIntake();  // get daily protein intake
	int GetHoursSlept();	// get hours slept

							// SET functions
	void setPerson(User);			  // set the user for this nutrition plan
	void SetCalorieIntake(User);     //  set daily calories
	void SetWaterIntake(User);      // calculate and set daily water need
	void SetProteinIntake(User);   // calculate and set daily protein need
	void SetRemainingCnP(string); // adjust remaining calories and protein after eating
	void SetHoursSlept(int);     // set hours slept
	void SetRemainingWater(int);// set remaining water for the day
	void SetBurnedCalories(double caloriesBurned); // set calories burned from exercise

	void addMeals(string, int, int);  // add meals with calories and protein to the map 

	void AddToMealPlan(string); // add a meal to the plan
	void RemoveFromMealPlan();  // remove a meal from the daily meal plan
	void printMealPlan();  // show the meal plan

	void printMap(); // show all meals and their nutrition
	void Clear(User); // clear user's nutrition data

	string AccessFrontElement();  // returns the first element in the meal plan

private:
	User person; // user info
	int CalorieIntake; // daily calories
	double WaterIntake; // daily water
	int ProteinIntake; // daily protein
	int hourSlept; // sleep hours
	map<string, vector<int>> Nutrition_Facts; //  nutrition info of the meal
	queue<string> Meal_Plan; // user's daily meal plan queue
};

#endif