#include "user.h"
#include "Nutrition.h"
#include "Workout.h"
#include <iostream>
#include <string>
#include <Windows.h>
#include <cstdlib>
#include <iomanip>
#include <stdexcept>
using namespace std;


int main() {
	User U;
	Nutrition N;
	Workout W;

	string fitnessGoal, strengthLevel, muscleGroup;
	int duration, speed;
	int caloriesBurned = 0;

	//Predefined Meals
	N.addMeals("chicken", 165, 31);
	N.addMeals("beef", 250, 26);
	N.addMeals("eggs", 155, 13);
	N.addMeals("apple", 52, 0);
	N.addMeals("banana", 89, 1);

	// Welcome message
	cout << "\033[32mWELCOME to your fitness journey! Ready to sweat and smile?\n"
		<< "Please enter the below information for us to help you get started!\033[0m\n" << endl;

	// registring User
	cout << "-Enter your First Name: ";
	U.SetName();
	cout << "\n-Enter your Gender \033[33m(male/female)\033[0m: ";
	U.SetGender();
	cout << "\n-Enter your Age: ";
	U.SetAge();
	cout << "\n-Enter your Height \033[33m(meters)\033[0m: ";
	U.Setheight();
	cout << "\n-Enter your Weight \033[33m(kg)\033[0m: ";
	U.Setweight();
	U.Calculate_BMI();

	// Setting the user's nutrition information
	N.setPerson(U);
	N.SetCalorieIntake(U);
	N.SetProteinIntake(U);
	N.SetWaterIntake(U);

	system("cls");

	int choice = 1;

	// main loop, until user enter 0 to exit
	while (choice != 0) {
		int muscleChoice = 1;
		int activityChoice = 1;
		cout << "\033[30;43mFITNESS TRACKER\033[1;0m\n" << endl;
		cout << "\033[33mChoose what you want to do:(enter the number)\033[1;0m\n";
		cout
			<< "1. Display Profile\n"
			<< "2. Update Profile\n"
			<< "3. Get Nutrition Help\n"
			<< "4. Get a Workout Plan\n"
			<< "5. Execute Workout\n"
			<< "0. \033[31mExit program\033[0m\n\n"
			<< "--> ";
		cin >> choice;  // let user choose based on previous list

		switch (choice) {
		case 1: {
			// Display user profile
			system("cls");
			cout << "\033[30;43mFITNESS TRACKER\033[1;0m" << endl;
			U.DisplayProfile();
			int key0;
			cout << "\n\033[33m>>> Press 0 to Continue:\033[0m ";
			cin >> key0;
			//Clear terminal and go back to begining of while loop
			system("cls");
			break;
		}
		case 2: {
			// Update profile
			int choice2 = 1;
			while (choice2 != 0) {  //loop untill user chooses to go back by entering 0
				system("cls");
				cout << "\033[30;43mFITNESS TRACKER\033[1;0m" << endl
					<< "\033[34;47m> Update Profile\033[1;0m\n" << endl
					<< "\033[33mChoose what you want to update:\033[1;0m\n";
				cout << "1. Update Name\n"
					<< "2. Update Weight\n"
					<< "3. Update Height\n"
					<< "4. Update Age\n"
					<< "5. Update Gender\n"
					<< "0. \033[31mGo Back\033[0m\n\n"
					<< "--> ";

				cin >> choice2; // let user choose based on previous list

				switch (choice2) {
				case 1: {
					// Update name
					cout << "Enter your name: ";
					U.UpdateName();
					cout << "\033[32mName Successfully Updated!\033[0m" << endl;
					//Clear terminal and go back to begining of while loop
					Sleep(1000);
					system("cls");
					break;
				}
				case 2: {
					// Update weight
					cout << "Enter your Weight \033[33m(Kg)\033[0m: ";
					U.UpdateWeight();
					/*
					Update all the nutrition information because the
					user changed the weight which affects the daily
					calorie and protein and water intake
					*/
					N.setPerson(U);
					N.SetCalorieIntake(U);
					N.SetProteinIntake(U);
					N.SetWaterIntake(U);

					cout << "\033[32mWeight Successfully Updated!\033[0m" << endl;
					//Clear terminal and go back to begining of while loop
					Sleep(1000);
					system("cls");
					break;
				}
				case 3: {
					// Update height
					cout << "Enter your Height \033[33m(meters)\033[0m: ";
					U.UpdateHeight();
					/*
					Update all the nutrition information because the
					user changed the weight which affects the daily
					calorie and protein and water intake
					*/
					N.setPerson(U);
					N.SetCalorieIntake(U);
					N.SetProteinIntake(U);
					N.SetWaterIntake(U);

					cout << "\033[32mHeight Successfully Updated!\033[0m" << endl;
					//Clear terminal and go back to begining of while loop
					Sleep(1000);
					system("cls");
					break;
				}
				case 4: {
					// Update age
					cout << "Enter Your Age: ";
					U.UpdateAge();
					/*
					Update all the nutrition information because the
					user changed the weight which affects the daily
					calorie and protein and water intake
					*/
					N.setPerson(U);
					N.SetCalorieIntake(U);
					N.SetProteinIntake(U);
					N.SetWaterIntake(U);

					cout << "\033[32mAge Successfully Updated!\033[0m" << endl;

					//Clear terminal and go back to begining of while loop
					Sleep(1000);
					system("cls");
					break;
				}
				case 5: {
					// Update gender
					cout << "Enter Your Gender \033[33m(male/female)\033[0m: ";
					U.UpdateGender();
					/*
					Update all the nutrition information because the
					user changed the weight which affects the daily
					calorie and protein and water intake
					*/
					N.setPerson(U);
					N.SetCalorieIntake(U);
					N.SetProteinIntake(U);
					N.SetWaterIntake(U);

					cout << "\033[32mGender Successfully Updated!\033[0m" << endl;

					//Clear terminal and go back to begining of while loop
					Sleep(1000);
					system("cls");
					break;
				}
				case 0: {
					//Clear terminal and go back to main of while loop
					system("cls");
					break;
				}
				default:
					cout << "\033[31mX Invalid choice X\033[1;0m" << endl
						<< "\033[31mPlease Try Again\033[1;0m" << endl;
					Sleep(2000);
					system("cls");
					break;
				}
			}
			break; // Go back to original while loop
		}

		case 3: {
			// nutrition help
			int choose = 1;
			// loop untill user chooses to go back by entering 0
			while (choose != 0) {
				system("cls");
				// nutrition help menu
				cout << "\033[30;43mFITNESS TRACKER\033[1;0m" << endl;
				cout << "\033[34;47m> Nutrition Help\033[1;0m\n" << endl;
				cout << "\033[33mChoose one of the following operations:\033[0m\n"
					<< "1. Calorie Intake\n"
					<< "2. Protein Intake\n"
					<< "3. Sleeping Hours\n"
					<< "4. Meal Plan\n"
					<< "5. New Day\n" //reset all intakes and empty meal plan
					<< "0. \033[31mGo Back\033[0m\n\n"
					<< "--> ";
				cin >> choose;  //let user choose based on previous list
				switch (choose) {
				case 1: {
					// display calorie intake
					system("cls");
					cout << "\033[30;43mFITNESS TRACKER\033[1;0m" << endl;
					cout << "\033[34;47m> Nutrition Help\033[1;0m" << endl;
					cout << "\033[34;47m>> Calorie Intake\033[1;0m\n" << endl;

					cout << "You should consume " << N.GetCalorieIntake() << " more calories today\n";

					Sleep(3000);
					system("cls");
					break;
				}
				case 2: {
					// display protein intake
					system("cls");
					cout << "\033[30;43mFITNESS TRACKER\033[1;0m" << endl;
					cout << "\033[34;47m> Nutrition Help\033[1;0m" << endl;
					cout << "\033[34;47m>> Protein Intake\033[1;0m\n" << endl;
					cout << "You should consume " << N.GetProteinIntake() << " more grams of protein today\n";

					Sleep(3000);
					system("cls");
					break;
				}
				case 3: {
					// sleepiong hours
					system("cls");
					cout << "\033[30;43mFITNESS TRACKER\033[1;0m" << endl;
					cout << "\033[34;47m> Nutrition Help\033[1;0m" << endl;
					cout << "\033[34;47m>> Sleeping Hours\033[1;0m\n" << endl;

					int RSH = 9;  // RSH = Recommended Sleeping Hours, which is 9
					int HS = 0;  // HS = Hours Slept

					cout << "It is recommended to sleep 9 hours per day.\n"
						<< "\033[33mHow many hours did you sleep?\033[0m\n--> ";
					cin >> HS;  //let user enter how many hours he slept

					N.SetHoursSlept(HS);

					// if user slept less than RSH 
					if (N.GetHoursSlept() != RSH && N.GetHoursSlept() < RSH) {
						cout << "\033[31m" << U.getName() << "! You don't sleep enough! \n"
							<< "You need to sleep " << RSH - N.GetHoursSlept() << " more hours.\033[0m\n";

						Sleep(5000);
						system("cls");
						break;
					}

					// if user slept more than  RSH
					else if (N.GetHoursSlept() != RSH && N.GetHoursSlept() > RSH) {
						cout << "\033[31m" << U.getName() << "! Don't be lazy! You sleep a lot! \n"
							<< "You need to sleep " << N.GetHoursSlept() - RSH << " less hours.\033[0m\n";

						Sleep(5000);
						system("cls");
						break;
					}

					//if user slept RSH
					else if (N.GetHoursSlept() == RSH) {
						cout << "\033[32mGood Job " << U.getName() << "! Your sleep schedule is perfect, keep it up!\033[0m\n";

						Sleep(5000);
						system("cls");
						break;
					}
					break;
				}
				case 4: {
					// meal plan options
					int choose2 = 1;

					while (choose2 != 0) {
						system("cls");
						cout << "\033[30;43mFITNESS TRACKER\033[1;0m" << endl;
						cout << "\033[34;47m> Nutrition Help\033[1;0m" << endl;
						cout << "\033[34;47m>> Meal Plan\033[1;0m\n" << endl;
						cout << "\033[33mChoose one of the following operations:\033[0m\n"
							<< "1. Show all available meals in the system\n"
							<< "2. Add Meal to system\n"
							<< "3. Create Meal Plan\n"
							<< "4. Show Meal plan for the day\n"
							<< "5. Enter what you ate today\n"
							<< "0. \033[31mGo Back\033[0m\n\n"
							<< "--> ";
						cin >> choose2;
						switch (choose2) {
						case 1: {
							// Show all available meals in the system
							system("cls");
							cout << "\033[30;43mFITNESS TRACKER\033[1;0m" << endl;
							cout << "\033[34;47m> Nutrition Help\033[1;0m" << endl;
							cout << "\033[34;47m>> Meal Plan\033[1;0m" << endl;
							cout << "\033[34;47m>>> Available Meals\033[1;0m\n" << endl;
							N.printMap();
							cout << "\033[33mPress 0 to go back: \033[0m";
							int al = 1;
							while (al != 0) {
								cin >> al;
								if (al == 0) {
									break;
								}
							}
							break;
						}
						case 2: {
							// Add meal to system
							system("cls");
							cout << "\033[30;43mFITNESS TRACKER\033[1;0m" << endl;
							cout << "\033[34;47m> Nutrition Help\033[1;0m" << endl;
							cout << "\033[34;47m>> Meal Plan\033[1;0m" << endl;
							cout << "\033[34;47m>>> Add Meal\033[1;0m\n" << endl;
							string nm;
							int cal, prt;
							cout << "-Enter Name of the Meal: ";
							cin >> nm;
							cout << "\n-Enter Amount of calories per 100g: ";
							cin >> cal;
							cout << "\n-Enter Amount of Protein per 100g: ";
							cin >> prt;
							N.addMeals(nm, cal, prt);
							cout << "Added" << endl;
							break;
						}
						case 3: {
							// Create Meal Plan
							system("cls");
							cout << "\033[30;43mFITNESS TRACKER\033[1;0m" << endl;
							cout << "\033[34;47m> Nutrition Help\033[1;0m" << endl;
							cout << "\033[34;47m>> Meal Plan\033[1;0m" << endl;
							cout << "\033[34;47m>>> Create Meal Plan\033[1;0m\n" << endl;
							int choose3 = 1;
							while (choose3 != 0) {
								cout << "\033[31mRemember to enter the meals in order of what you will eat first then last\033[0m\n";
								string nm;
								cout << "-Choose from the following: \n";
								N.printMap();
								cout << "-\033[33mEnter the exact Name of the food you want to add to the meal plan: \033[0m";
								cin >> nm;
								N.AddToMealPlan(nm);
								cout << "-Press 0 to go back, or 1 to add another meal: ";
								cin >> choose3;
							}
							break;
						}
						case 4: {
							// Show Meal plan for the day
							system("cls");

							cout << "\033[30;43mFITNESS TRACKER\033[1;0m" << endl;
							cout << "\033[34;47m> Nutrition Help\033[1;0m" << endl;
							cout << "\033[34;47m>> Meal Plan\033[1;0m" << endl;
							cout << "\033[34;47m>>> Meal Plan For The Day\033[1;0m\n" << endl;
							int al = 1;
							N.printMealPlan();
							// goes back if input is 0
							while (al != 0) {
								cout << "-Enter 0 to go back: ";
								cin >> al;
								system("cls");
							}
							break;
						}
						case 5: {
							// Enter what you ate today
							system("cls");
							cout << "\033[30;43mFITNESS TRACKER\033[1;0m" << endl;
							cout << "\033[34;47m> Nutrition Help\033[1;0m" << endl;
							cout << "\033[34;47m>> Meal Plan\033[1;0m" << endl;
							cout << "\033[34;47m>>> What You ate Today\033[1;0m\n" << endl;

							int choose3 = 1;
							while (choose3 != 0) {
								system("cls");

								cout << "\033[30;43mFITNESS TRACKER\033[1;0m" << endl;
								cout << "\033[34;47m> Nutrition Help\033[1;0m" << endl;
								cout << "\033[34;47m>> Meal Plan\033[1;0m" << endl;
								cout << "\033[34;47m>>> What You ate Today\033[1;0m\n" << endl;
								cout << "1. From Meal Plan\n"
									<< "2. Not From Meal Plan\n"
									<< "0. \033[31mGo Back\033[0m\n\n"
									<< "--> ";
								cin >> choose3;

								switch (choose3) {
								case 1: {
									// From Meal Plan
									system("cls");

									cout << "\033[30;43mFITNESS TRACKER\033[1;0m" << endl;
									cout << "\033[34;47m> Nutrition Help\033[1;0m" << endl;
									cout << "\033[34;47m>> Meal Plan\033[1;0m" << endl;
									cout << "\033[34;47m>>> What You ate Today\033[1;0m" << endl;
									cout << "\033[34;47m>>>> From Meal Plan\033[1;0m\n" << endl;
									N.SetRemainingCnP(N.AccessFrontElement());
									N.RemoveFromMealPlan();
									cout << "\033[32mUpdating Meal plan and Daily intake\033[0m\n";

									Sleep(1000);
									system("cls");
									break;
								}
								case 2: {
									// Not From Meal Plan
									system("cls");

									cout << "\033[30;43mFITNESS TRACKER\033[0m" << endl;
									cout << "\033[34;47m> Nutrition Help\033[0m" << endl;
									cout << "\033[34;47m>> Meal Plan\033[0m" << endl;
									cout << "\033[34;47m>>> What You ate Today\033[0m" << endl;
									cout << "\033[34;47m>>>> Not From Meal Plan\033[0m\n" << endl;
									cout << "Available Meals:\n";

									N.printMap();

									cout << "\n-Enter the name of the food: ";

									string nm;
									cin >> nm;

									N.SetRemainingCnP(nm);

									cout << "\033[32mDaily intake updated\n\033[0m";

									Sleep(1000);
									system("cls");
									break;
								}
								case 0: {
									// go back
									system("cls");
									break;
								}
								default: {
									// invalid input
									cout << "\033[31mX Invalid choice X\033[1;0m" << endl
										<< "\033[31mPlease Try Again\033[1;0m" << endl;

									Sleep(2000);
									system("cls");
									break;
								}
								}
							}
							break;
						}
						case 0: {
							// go back
							system("cls");
							break;
						}
						default: {
							// invalid input
							cout << "\033[31mX Invalid choice X\033[1;0m" << endl
								<< "\033[31mPlease Try Again\033[1;0m" << endl;

							Sleep(2000);
							system("cls");
							break;
						}

						}
					}
					break;
				}
				case 5: {
					// new day
					cout << "\33[31mWarning! The meal plan will be deleted and set empty!!\n"
						<< "Are you sure you want to continue? \33[33m(y/n) \33[0m";

					// confirm with user
					char yn;
					cin >> yn;

					if (yn == 'y') {
						N.Clear(U);
						break;
					}
					if (yn == 'n') {
						system("cls");
						break;
					}
				}
				case 0:
					// go back
					system("cls");
					break;
				default:
					// invalid input
					cout << "\033[31mX Invalid choice X\033[1;0m" << endl
						<< "\033[31mPlease Try Again\033[1;0m" << endl;

					Sleep(2000);
					system("cls");
					break;

				}
			}
			break;
		}
		case 4: {
			//Anthony Nasry Massaad

			// loop for workout options
			while (activityChoice != 0) {
				system("cls");

				cout << "\033[30;43mFITNESS TRACKER\033[1;0m" << endl;
				cout << "\033[34;47m> WORKOUT\033[1;0m\n" << endl;
				cout << "\033[33mSelect your activity:\033[1;0m" << endl;
				cout << "1. Walking\n2. Running\n3. Swimming\n4. Cycling\n5. Gym Training\n0. \033[31mGo Back\033[0m\n\n--> ";
				cin >> activityChoice;

				switch (activityChoice) {
				case 1: {
					// walking
					system("cls");

					cout << "\033[30;43mFITNESS TRACKER\033[1;0m" << endl;
					cout << "\033[34;47m> WORKOUT\033[1;0m" << endl;
					cout << "\033[34;47m>> WALKING\033[1;0m\n" << endl;
					cout << "-Enter the duration of the activity in minutes: ";
					cin >> duration;
					cout << "-Enter your average speed (km/h): ";
					cin >> speed;
					cout << "\n\033[32m>>> Estimated calories burned: " << W.calculateCalories(U.getWeight(), duration, speed) << " calories.\033[0m" << endl;

					W.updateCalorieIntake_NonGym(U, N, duration, speed);

					Sleep(3000);
					system("cls");
					break;
				}


				case 2: {
					// running
					system("cls");

					cout << "\033[30;43mFITNESS TRACKER\033[1;0m" << endl;
					cout << "\033[34;47m> WORKOUT\033[1;0m" << endl;
					cout << "\033[34;47m>> RUNNING\033[1;0m\n" << endl;
					cout << "-Enter the duration of the activity in minutes: ";
					cin >> duration;
					cout << "-Enter your average speed (km/h): ";
					cin >> speed;
					cout << "\n\033[32m>>> Estimated calories burned: " << W.calculateCalories(U.getWeight(), duration, speed) << " calories.\033[0m" << endl;

					W.updateCalorieIntake_NonGym(U, N, duration, speed);

					Sleep(3000);
					system("cls");
					break;
				}

				case 3:
				{
					// swimming
					system("cls");

					cout << "\033[30;43mFITNESS TRACKER\033[1;0m" << endl;
					cout << "\033[34;47m> WORKOUT\033[1;0m" << endl;
					cout << "\033[34;47m>> SWIMMING\033[1;0m\n" << endl;
					cout << "-Enter the duration of the activity in minutes: ";
					cin >> duration;
					cout << "-Enter your average speed (km/h): ";
					cin >> speed;
					cout << "\n\033[32m>>> Estimated calories burned: " << W.calculateCalories(U.getWeight(), duration, speed) << " calories.\033[0m" << endl;

					W.updateCalorieIntake_NonGym(U, N, duration, speed);

					Sleep(3000);
					system("cls");
					break;
				}
				case 4:
				{
					// cycling
					system("cls");

					cout << "\033[30;43mFITNESS TRACKER\033[1;0m" << endl;
					cout << "\033[34;47m> WORKOUT\033[1;0m" << endl;
					cout << "\033[34;47m>> CYCLING\033[1;0m\n" << endl;
					cout << "-Enter the duration of the activity in minutes: ";
					cin >> duration;
					cout << "-Enter your average speed (km/h): ";
					cin >> speed;
					cout << "\n\033[32m>>> Estimated calories burned: " << W.calculateCalories(U.getWeight(), duration, speed) << " calories.\033[0m" << endl;

					W.updateCalorieIntake_NonGym(U, N, duration, speed);

					Sleep(3000);
					system("cls");
					break;
				}
				case 5:
					// gym training
					system("cls");

					cout << "\033[30;43mFITNESS TRACKER\033[1;0m" << endl;
					cout << "\033[34;47m> WORKOUT\033[1;0m" << endl;
					cout << "\033[34;47m>> GYM TRAINING\033[1;0m" << endl;
					cout << "\033[34;47m>>> FITNESS GOAL\033[1;0m\n" << endl;
					cout << "\033[33mEnter your fitness goal:\033[1;0m\n";
					cout << "1. Strength\n2. Volume\n3. Endurance\n\n--> ";

					int fitnessgoalChoice;
					cin >> fitnessgoalChoice;
					// get fitness goal
					switch (fitnessgoalChoice) {
					case 1:
						fitnessGoal = "strength";
						break;
					case 2:
						fitnessGoal = "volume";
						break;
					case 3:
						fitnessGoal = "endurance";
						break;
					default:
					{
						cout << "\033[31mX Invalid choice X\033[1;0m" << endl
							<< "\033[31mAutomatically Set to Default \"STRENGTH\"\033[1; 0m" << endl;
						fitnessGoal = "strength";
						Sleep(2000);
						U.WaitAndClear();
						break;
					}
					}
					// set goal
					W.setUserFitnessGoal(fitnessGoal);

					system("cls");

					cout << "\033[30;43mFITNESS TRACKER\033[1;0m" << endl;
					cout << "\033[34;47m> WORKOUT\033[1;0m" << endl;
					cout << "\033[34;47m>> GYM TRAINING\033[1;0m" << endl;
					cout << "\033[34;47m>>> STRENGTH LEVEL\033[1;0m\n" << endl;
					cout << "\033[33mEnter your strength level:\033[1;0m\n";
					cout << "1. Beginner\n2. Intermediate\n3. Advanced\n\n--> ";
					int strengthLevelChoice;
					cin >> strengthLevelChoice;
					// get strength level
					switch (strengthLevelChoice) {
					case 1:
						strengthLevel = "beginner";
						break;
					case 2:
						strengthLevel = "intermediate";
						break;
					case 3:
						strengthLevel = "advanced";
						break;
					default:
						cout << "\033[31mX Invalid choice X\033[1;0m" << endl
							<< "\033[31mAutomatically Set to Default \"BEGINNER\"\033[1; 0m" << endl;
						strengthLevel = "beginner";
						Sleep(2000);
						system("cls");
						break;
					}
					// set level
					W.setUserStrengthLevel(strengthLevel);

					system("cls");

					cout << "\033[30;43mFITNESS TRACKER\033[1;0m" << endl;
					cout << "\033[34;47m> WORKOUT\033[1;0m" << endl;
					cout << "\033[34;47m>> GYM TRAINING\033[1;0m" << endl;
					cout << "\033[34;47m>>> MUSCLE GROUP\033[1;0m\n" << endl;
					cout << "\033[33mSelect muscle group to train:\033[1;0m" << endl;
					cout << "1. Biceps\n2. Triceps\n3. Shoulders\n4. Back\n5. Legs\n6. Abs\n7. Chest\n\n-->  ";

					cin >> muscleChoice;

					// get desired muscle group to train
					switch (muscleChoice) {
					case 1:
						muscleGroup = "biceps";
						break;
					case 2:
						muscleGroup = "triceps";
						break;
					case 3:
						muscleGroup = "shoulders";
						break;
					case 4:
						muscleGroup = "back";
						break;
					case 5:
						muscleGroup = "legs";
						break;
					case 6:
						muscleGroup = "abs";
						break;
					case 7:
						muscleGroup = "chest";
						break;
					case 0:
						system("cls");
						break;
					default:
						cout << "\033[31mX Invalid choice X\033[1;0m" << endl
							<< "\033[31mGoing For Biceps\033[1;0m" << endl;
						Sleep(2000);
						system("cls");
						break;
					}
					system("cls");

					// add selected exercise to queue
					W.selectAndQueueExercises(fitnessGoal, strengthLevel, muscleGroup);
					break;
				case 0:
					// go back
					system("cls");
					break;
				default:
					// invalid input
					cout << "\033[31mX Invalid choice X\033[1;0m" << endl
						<< "\033[31mPlease Try Again\033[1;0m" << endl;
					Sleep(2000);
					break;
				}
			}
			break;
		}
				

		case 5: {
			// workout queue processing
			system("cls");

			cout << "\033[30;43mFITNESS TRACKER\033[1;0m" << endl;
			cout << "\033[34;47m>> WORKOUT EXECUTION\033[1;0m\n" << endl;

			// calculate total calories burned to update calorei intake before clearing the queue
			double caloriesBurned = W.calculateTotalCaloriesBurned_Gym();
			N.SetBurnedCalories(caloriesBurned);

			// clearing queue 
			W.executeWorkoutQueue();
			break;
		}

		case 0: {
			// exit program

			// exit message
			cout << "\n\033[32mTHANK YOU for using Fitness Tracker.\033[0m" << endl
				<< "\033[31mExiting...\033[0m" << endl;

			Sleep(4000);
			system("cls");
			break;
		}
		default: {
			// invalid choice
			cout << "\033[31mX Invalid choice X\033[1;0m" << endl
				<< "\033[31mPlease Try Again\033[1;0m" << endl;

			Sleep(2000);
			system("cls");
			break;
		}
		}
	}
}
