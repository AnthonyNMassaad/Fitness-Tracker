#ifndef WORKOUT_H
#define WORKOUT_H

#include <string>
#include <map>
#include <queue>
#include <vector>
#include <utility>
#include "user.h"
#include "Nutrition.h"
#include <Windows.h>
using namespace std;

// declaration of Nutrition class
class Nutrition;

// struct for individual exercises
struct Exercise {
	string name;	// name of the exercise
	string muscleGroup;	// targetted muscle group
	int caloriesBurn;	// estimated burned calories
	int sets;	// number of sets
	int reps;	// number of reps

				// constructor
	Exercise(const string&, const string&, int, int, int);
};

// struct for a workout routine of multiple exercises
struct WorkoutRoutine {
	vector<Exercise> exercises;
};

class Workout {
private:
	vector<Exercise> exercises;

	// maps for different workout routines based on user's strength level
	map <string, map<string, vector<Exercise>>> beginnerWorkouts;
	map <string, map<string, vector<Exercise>>> intermediateWorkouts;
	map <string, map<string, vector<Exercise>>> advancedWorkouts;

	// queue to process the workout routine
	queue<WorkoutRoutine> WorkoutQueue;

	string UserFitnessGoal; // user's fitness goal
	string UserStrengthLevel; // user's strength level

public:
	// constructor
	Workout();

	// fitness goals
	static const string FitnessGoal_volume;
	static const string FitnessGoal_strength;
	static const string FitnessGoal_endurance;

	// strength levels
	static const string StrengthLevel_beginner;
	static const string StrengthLevel_intermediate;
	static const string StrengthLevel_advanced;

	// SET functions
	void setUserFitnessGoal(const string&); // set the user's fitness goal
	void setUserStrengthLevel(const string&); // set the user's strength level

											  // function to predefine workouts
	void predefineWorkouts();

	// function to get exercises based on fitness goal, strength level, and muscle group
	vector<Exercise> getExercises(const string& fitnessGoal, const string& strengthLevel, const string& muscleGroup);

	// function to add a workout routine to the queue
	void addGymActivityToQueue(const WorkoutRoutine& workout);

	// select and queue exercises based on user's choice
	void selectAndQueueExercises(const string& fitnessGoal, const string& strengthLevel, const string& muscleGroup);

	// functions to wait and clear the screen
	void WaitAndClear3(); // 3 seconds
	void WaitAndClear1(); // 1 second

						  // execute the workout queue
	void executeWorkoutQueue();

	// calculate calories burned during walking, running, cycling, swimming
	double calculateCalories(double, double, double);

	// calculate total calories burned during gym exercises
	double calculateTotalCaloriesBurned_Gym();

	// update calorie intake for non-gym activities
	void updateCalorieIntake_NonGym(User& U, Nutrition& N, int duration, double speed);
};

#endif