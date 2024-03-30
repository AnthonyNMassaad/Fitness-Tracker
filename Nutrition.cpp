#include "Nutrition.h"

Nutrition::Nutrition() {} // default constructor

						  // add food with calories and protein per 100g
void Nutrition::addMeals(string n, int c, int p)
{
	Nutrition_Facts[n] = { c ,p };
}

// set the user for this nutrition plan
void Nutrition::setPerson(User U)
{
	person = U;
}

// set daily calorie intake based on user's bmi, age, and gender
void Nutrition::SetCalorieIntake(User U1)
{
	if (person.GetGender() == "male") {
		if (person.GetAge() >= 9 && person.GetAge() <= 13) {
			if (person.rtrnBMI() < 18.5) {   // underweight
				CalorieIntake = 2000;
			}
			if (person.rtrnBMI() >= 18.5 && person.rtrnBMI() <= 24.9) {   //normal weight
				CalorieIntake = 1800;
			}
			if (person.rtrnBMI() >= 25 && person.rtrnBMI() <= 29.9) {   //overweight
				CalorieIntake = 1600;
			}
			if (person.rtrnBMI() >= 30) {   // obese
				CalorieIntake = 1500;
			}
		}
		else if (person.GetAge() >= 14 && person.GetAge() <= 18) {
			if (person.rtrnBMI() < 18.5) {   // underweight
				CalorieIntake = 2500;
			}
			if (person.rtrnBMI() >= 18.5 && person.rtrnBMI() <= 24.9) {   //normal weight
				CalorieIntake = 2200;
			}
			if (person.rtrnBMI() >= 25 && person.rtrnBMI() <= 29.9) {   //overweight
				CalorieIntake = 1800;
			}
			if (person.rtrnBMI() >= 30) {   // obese
				CalorieIntake = 1600;
			}

		}
		else if (person.GetAge() >= 19 && person.GetAge() <= 30) {
			if (person.rtrnBMI() < 18.5) {   // underweight
				CalorieIntake = 2600;
			}
			if (person.rtrnBMI() >= 18.5 && person.rtrnBMI() <= 24.9) {   //normal weight
				CalorieIntake = 2200;
			}
			if (person.rtrnBMI() >= 25 && person.rtrnBMI() <= 29.9) {   //overweight
				CalorieIntake = 2000;
			}
			if (person.rtrnBMI() >= 30) {   // obese
				CalorieIntake = 1800;
			}

		}
		else if (person.GetAge() >= 31 && person.GetAge() <= 50) {
			if (person.rtrnBMI() < 18.5) {   // underweight
				CalorieIntake = 2200;
			}
			if (person.rtrnBMI() >= 18.5 && person.rtrnBMI() <= 24.9) {   //normal weight
				CalorieIntake = 2000;
			}
			if (person.rtrnBMI() >= 25 && person.rtrnBMI() <= 29.9) {   //overweight
				CalorieIntake = 1800;
			}
			if (person.rtrnBMI() >= 30) {   // obese
				CalorieIntake = 1700;
			}
		}
		else if (person.GetAge() >= 51) {
			if (person.rtrnBMI() < 18.5) {   // underweight
				CalorieIntake = 2200;
			}
			if (person.rtrnBMI() >= 18.5 && person.rtrnBMI() <= 24.9) {   //normal weight
				CalorieIntake = 2000;
			}
			if (person.rtrnBMI() >= 25 && person.rtrnBMI() <= 29.9) {   //overweight
				CalorieIntake = 2000;
			}
			if (person.rtrnBMI() >= 30) {   // obese
				CalorieIntake = 1800;
			}
		}

	}
	else if (person.GetGender() == "female") {
		if (person.GetAge() >= 9 && person.GetAge() <= 13) {
			if (person.rtrnBMI() < 18.5) {   // underweight
				CalorieIntake = 1700;
			}
			if (person.rtrnBMI() >= 18.5 && person.rtrnBMI() <= 24.9) {   //normal weight
				CalorieIntake = 1500;
			}
			if (person.rtrnBMI() >= 25) {   // for both overweight and obese
				CalorieIntake = 1400;
			}
		}
		else if (person.GetAge() >= 14 && person.GetAge() <= 18) {
			if (person.rtrnBMI() < 18.5) {   // underweight
				CalorieIntake = 2100;
			}
			if (person.rtrnBMI() >= 18.5 && person.rtrnBMI() <= 24.9) {   //normal weight
				CalorieIntake = 1900;
			}
			if (person.rtrnBMI() >= 25 && person.rtrnBMI() <= 29.9) {   //overweight
				CalorieIntake = 1800;
			}
			if (person.rtrnBMI() >= 30) {   // obese
				CalorieIntake = 1600;
			}

		}
		else if (person.GetAge() >= 19 && person.GetAge() <= 30) {
			if (person.rtrnBMI() < 18.5) {   // underweight
				CalorieIntake = 2200;
			}
			if (person.rtrnBMI() >= 18.5 && person.rtrnBMI() <= 24.9) {   //normal weight
				CalorieIntake = 2000;
			}
			if (person.rtrnBMI() >= 25 && person.rtrnBMI() <= 29.9) {   //overweight
				CalorieIntake = 1800;
			}
			if (person.rtrnBMI() >= 30) {   // obese
				CalorieIntake = 1700;
			}

		}
		else if (person.GetAge() >= 31 && person.GetAge() <= 50) {
			if (person.rtrnBMI() < 18.5) {   // underweight
				CalorieIntake = 2000;
			}
			if (person.rtrnBMI() >= 18.5 && person.rtrnBMI() <= 24.9) {   //normal weight
				CalorieIntake = 1800;
			}
			if (person.rtrnBMI() >= 25) {   // both overweight and obese
				CalorieIntake = 1700;
			}
		}
		else if (person.GetAge() >= 51) {
			if (person.rtrnBMI() < 18.5) {   // underweight
				CalorieIntake = 1900;
			}
			if (person.rtrnBMI() >= 18.5 && person.rtrnBMI() <= 24.9) {   //normal weight
				CalorieIntake = 1800;
			}
			if (person.rtrnBMI() >= 25 && person.rtrnBMI() <= 29.9) {   //overweight
				CalorieIntake = 1600;
			}
			if (person.rtrnBMI() >= 30) {   // obese
				CalorieIntake = 1400;
			}
		}

	}
}

// get daily calorie intake
int Nutrition::GetCalorieIntake()
{
	return CalorieIntake;
}

// set daily water intake based on user's weight
void Nutrition::SetWaterIntake(User U) // it is recommended generaly to drink 1oz of water per poind of weight
{
	WaterIntake = (U.getWeight() * 2.205) * 0.0295735296;
} // 1kg = 2.205 poinds and 1 oz = 0.0295735296 Liters

  // set daily protein intake based on user's weight
void Nutrition::SetProteinIntake(User U)
{
	ProteinIntake = U.getWeight() * 0.8; //recommended 0.8 g of protein per kg
}

// get daily protein intake
int Nutrition::GetProteinIntake()
{
	return ProteinIntake;
}

// adjust remaining calories and protein after eating a meal
void Nutrition::SetRemainingCnP(string c) // c is the chosen food to eat
{
	for (pair<string, vector<int>> f : Nutrition_Facts) {
		if (f.first == c) {
			CalorieIntake = CalorieIntake - f.second[0];
			ProteinIntake = ProteinIntake - f.second[1];
		}
	}
	//update remaining calories for the day
}

// set remaining water intake after drinking
void Nutrition::SetRemainingWater(int w) {
	WaterIntake = WaterIntake - w;
}

// set hours slept
void Nutrition::SetHoursSlept(int h)
{
	hourSlept = h;
}

// get hours slept
int Nutrition::GetHoursSlept()
{
	return hourSlept;
}

// add a meal to the meal plan
void Nutrition::AddToMealPlan(string foodName)
{
	for (pair < string, vector<int>>f : Nutrition_Facts) {
		if (f.first == foodName) {
			Meal_Plan.push(f.first);
		}
	}
}

// remove a meal from the meal plan
void Nutrition::RemoveFromMealPlan()
{
	if (Meal_Plan.empty()) {
		return;
	}
	else {
		Meal_Plan.pop();
	}
}

// print all meals and their nutrition info
void Nutrition::printMap()
{
	int counter = 1;
	for (pair<string, vector<int>> f : Nutrition_Facts) {
		cout << counter << ". " << f.first << ": " << f.second[0] << " Calories "
			<< f.second[1] << " g of Protein" << endl;
		counter++;
	}
}

// print the meal plan
void Nutrition::printMealPlan()
{
	int counter = 1;
	queue<string> tempQueue = Meal_Plan;
	while (!tempQueue.empty()) {
		cout << counter << ". " << tempQueue.front() << endl;
		counter++;
		tempQueue.pop();
	}
}

// clear user's nutrition data
void Nutrition::Clear(User U) {
	if (Meal_Plan.empty() != false)
	{
		for (int i = 0; i < Meal_Plan.size(); i++)
		{
			Meal_Plan.pop();
		}
	}
	this->SetCalorieIntake(U);
	this->SetProteinIntake(U);
	this->SetWaterIntake(U);

}

// get the next meal in the plan
string Nutrition::AccessFrontElement() {
	if (Meal_Plan.empty() == false)
	{
		return Meal_Plan.front();
	}
	else {
		return "";
	}
}

// adjust calorie intake for burned calories
void Nutrition::SetBurnedCalories(double caloriesBurned) {
	CalorieIntake += caloriesBurned;
}