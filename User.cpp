#include "user.h"
#include <ctype.h>

User::User() {} // Default constructor

				// Constructor
User::User(string& n, string& g, int& a, double& h, double& w)
	: name{ n }, gender{ g }, age{ a }, height{ h }, weight{ w }
{
	BMI = weight / (height * height);
}

// method to get BMI
void User::getBMI() {
	cout << "Your BMI is: " << BMI << endl;
}

// method to set user's name and add it to user information list
void User::SetName() {
	cin.ignore(0, '\n');
	getline(cin, name);
	UserInformation.push_back("Your name is: " + name);
}

// method to get user's name
string User::getName()
{
	return name;
}

// method to set user's age and add it to user information list
void User::SetAge() {
	cin >> age;
	UserInformation.push_back("Your age is: " + to_string(age) + " years old");
}

// method to get user's age
int User::GetAge()
{
	return age;
}

// method to set user's gender and validate it
void User::SetGender() {
	cin >> gender;
	while (toLowerCase(gender) != "male" && toLowerCase(gender) != "female") {
		cout << "\033[31mX Invalid Gender X\nPlease re-enter gender:\033[0m ";
		cin >> gender;
	}
	UserInformation.push_back("Your gender is: " + toLowerCase(gender));

}

// method to get user's gender
string User::GetGender()
{
	return gender;
}

// method to set user's height and add it to user information list
void User::Setheight() {
	cin >> height;
	UserInformation.push_back("Your height is: " + to_string(height) + " m");
}

// method to get user's height
double User::GetHeight()
{
	return height;
}

// method to set user's weight and add it to user information list
void User::Setweight() {
	cin >> weight;
	UserInformation.push_back("Your Weight is: " + to_string(weight) + " Kg");
}

// method to get user's weight
double User::getWeight()
{
	return weight;
}

// method to return BMI
double User::rtrnBMI()
{
	return BMI;
}


// method to calculate and update BMI
void User::Calculate_BMI() {
	cout << fixed << setprecision(2);
	BMI = weight / (height * height);
	UserInformation.push_back("Your BMI is: " + to_string(BMI));
}

// method to update BMI in the user information list
void User::UpdateBMI() {
	double oldBMI = BMI;
	BMI = weight / (height * height);
	for (list<string> ::iterator it = UserInformation.begin(); it != UserInformation.end(); ++it) {
		if (*it == "Your BMI is: " + to_string(oldBMI)) {
			*it = "Your BMI is: " + to_string(BMI);
			break;
		}
	}
}

// method to update user's height
void User::UpdateHeight() {
	double oldHeight = height;
	cin >> height;
	for (list <string>::iterator it = UserInformation.begin(); it != UserInformation.end(); ++it) {
		if (*it == "Your height is: " + to_string(oldHeight) + " m") {
			*it = "Your height is: " + to_string(height) + " m";
			break;
		}
	}
	UpdateBMI(); // recalculate BMI after height update
}

// method to update user's name in the information list
void User::UpdateName() {
	string oldName = name;
	cin.ignore(1, '\n');
	getline(cin, name);

	for (list <string>::iterator it = UserInformation.begin(); it != UserInformation.end(); ++it) {
		if (*it == "Your name is: " + oldName) {
			*it = "Your name is: " + name;
			break;
		}
	}
}

// method to update user's age in the information list
void User::UpdateAge() {
	int oldAge = age;
	cin >> age;
	for (list <string>::iterator it = UserInformation.begin(); it != UserInformation.end(); ++it) {
		if (*it == "Your age is: " + to_string(oldAge) + " years old") {
			*it = "Your age is: " + to_string(age) + " years old";
			break;
		}
	}
	UpdateBMI(); // recalculate BMI after age update
}

// method to update user's gender in the information list
void User::UpdateGender()
{
	string oldGender = gender;
	cin >> gender;
	while (toLowerCase(gender) != "male" && toLowerCase(gender) != "female") {
		cout << "\033[31mX Invalid Gender X\nPlease re-enter gender:\033[0m ";
		cin >> gender;
	}
	for (list <string>::iterator it = UserInformation.begin(); it != UserInformation.end(); ++it) {
		if (*it == "Your gender is: " + oldGender) {
			*it = "Your gender is: " + toLowerCase(gender);
			break;
		}
	}

}

// method to update user's weight
void User::UpdateWeight() {
	cout << fixed << setprecision(2);
	double oldWeight = weight;
	cin >> weight;
	for (list <string>::iterator it = UserInformation.begin(); it != UserInformation.end(); ++it) {
		if (*it == "Your Weight is: " + to_string(oldWeight) + " Kg") {
			*it = "Your Weight is: " + to_string(weight) + " Kg";
			break;
		}
	}
	UpdateBMI(); // recalculate BMI after weight update
}

// method to display user's profile
void User::DisplayProfile() {
	cout << "\033[34;47m> " << name << "'s Profile\033[0m\n" << endl;
	for (list<string>::const_iterator it = UserInformation.begin(); it != UserInformation.end(); ++it) {
		cout << "-" << *it << endl;
	}
}

// method to wait and clear the screen
void User::WaitAndClear()
{
	Sleep(3000);
	system("cls");
}

// method to convert a string to lowercase
string User::toLowerCase(const string & str) {
	string lowerCaseStr = str;
	for (char& c : lowerCaseStr) {
		c = tolower(c);
	}
	return lowerCaseStr;
}