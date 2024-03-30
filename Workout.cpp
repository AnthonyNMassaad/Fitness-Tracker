#include "Workout.h"
#include <iostream>
using namespace std;

// Exercise constructor
Exercise::Exercise(const string& n, const string& m, int c, int s, int r) : name{ n }, muscleGroup{ m }, caloriesBurn{ c }, sets{ s }, reps{ r } {}

// Workout constructor 
Workout::Workout() {
	predefineWorkouts();
}

// fitness goals
const string Workout::FitnessGoal_volume = "volume";
const string Workout::FitnessGoal_strength = "strength";
const string Workout::FitnessGoal_endurance = "endurance";

// strength levels
const string Workout::StrengthLevel_beginner = "beginner";
const string Workout::StrengthLevel_intermediate = "intermediate";
const string Workout::StrengthLevel_advanced = "advanced";

// sets the user's fitness goal
void Workout::setUserFitnessGoal(const string& goal) {
	UserFitnessGoal = goal;
}

// sets the user's strength level
void Workout::setUserStrengthLevel(const string& level) {
	UserStrengthLevel = level;
}

void Workout::predefineWorkouts() {
	// Strength Level Exercises

	// Beginner
	// chest
	beginnerWorkouts[FitnessGoal_strength]["chest"] = {
		Exercise("Traditional Push-up", "chest", 100, 3, 8),
		Exercise("Wide Push-up", "chest", 100, 3, 8),
		Exercise("Narrow Push-up", "chest", 100, 3, 8),
		Exercise("Incline Push-up", "chest", 100, 3, 8),
		Exercise("Decline Push-up", "chest", 100, 3, 8)
	};
	// shoulders
	beginnerWorkouts[FitnessGoal_strength]["shoulders"] = {
		Exercise("Shoulder Press", "shoulders", 90, 3, 8),
		Exercise("Dumbbell Lateral Raise", "shoulders", 80, 3, 8),
		Exercise("Front Dumbbell Raise", "shoulders", 80, 3, 8),
		Exercise("Seated Bent-Over Rear Delt Raise", "shoulders", 80, 3, 8),
		Exercise("Shrugs", "shoulders", 100, 3, 8)
	};
	// legs
	beginnerWorkouts[FitnessGoal_strength]["legs"] = {
		Exercise("Squat", "legs", 100, 3, 8),
		Exercise("Leg Press", "legs", 120, 3, 8),
		Exercise("Lunges", "legs", 100, 3, 8),
		Exercise("Leg Extension", "legs", 90, 3, 8),
		Exercise("Leg Curl", "legs", 90, 3, 8),
		Exercise("Calf Raises", "legs", 80, 3, 8)
	};
	// back
	beginnerWorkouts[FitnessGoal_strength]["back"] = {
		Exercise("Assisted Pull-up", "back", 100, 3, 8),
		Exercise("Assisted Chin-up", "back", 100, 3, 8),
		Exercise("Lat Pulldown", "back", 120, 3, 8),
		Exercise("Seated Cable Row", "back", 110, 3, 8),
		Exercise("Bent-over Dumbbell Row", "back", 110, 3, 8),
		Exercise("Back Extension", "back", 80, 3, 8)
	};
	// biceps
	beginnerWorkouts[FitnessGoal_strength]["biceps"] = {
		Exercise("Dumbbell Bicep Curl", "biceps", 80, 3, 8),
		Exercise("Dumbbell Hammer Curl", "biceps", 80, 3, 8),
		Exercise("Concentration Curl", "biceps", 70, 3, 8),
		Exercise("Preacher Curl", "biceps", 75, 3, 8),
		Exercise("Barbell Curl", "biceps", 85, 3, 8)
	};
	// triceps
	beginnerWorkouts[FitnessGoal_strength]["triceps"] = {
		Exercise("Tricep Dip", "triceps", 90, 3, 8),
		Exercise("Skull Crusher", "triceps", 90, 3, 8),
		Exercise("Tricep Extension", "triceps", 80, 3, 8),
		Exercise("Tricep Kickback", "triceps", 70, 3, 8),
		Exercise("Cable Tricep Pushdown", "triceps", 85, 3, 8)
	};
	// abs
	beginnerWorkouts[FitnessGoal_strength]["abs"] = {
		Exercise("Crunches", "abs", 50, 3, 8),
		Exercise("Russian Twist", "abs", 60, 3, 8),
		Exercise("Plank (30 seconds)", "abs", 80, 3, 8), // Duration in seconds
		Exercise("Bicycle Crunches", "abs", 70, 3, 8),
		Exercise("Reverse Crunch", "abs", 60, 3, 8),
		Exercise("Sit-ups", "abs", 60, 3, 8)
	};

	// Intermediate
	// biceps
	intermediateWorkouts[FitnessGoal_strength]["biceps"] = {
		Exercise("Barbell Curl", "biceps", 90, 3, 8),
		Exercise("Incline Dumbbell Curl", "biceps", 85, 3, 8),
		Exercise("Spider Dumbbell Curl", "biceps", 85, 3, 8),
		Exercise("Hammer Curl with Rope (Cable)", "biceps", 90, 3, 8),
		Exercise("Bicep Curl with Rope (Cable)", "biceps", 80, 3, 8),
		Exercise("Preacher Curl (EZ-Bar)", "biceps", 85, 3, 8),
		Exercise("Concentration Curl", "biceps", 80, 3, 8),
		Exercise("Dumbbell Bicep Curl", "biceps", 80, 3, 8),
		Exercise("Dumbbell Hammer Curl", "biceps", 80, 3, 8),
	};

	// triceps
	intermediateWorkouts[FitnessGoal_strength]["triceps"] = {
		Exercise("Skull Crusher (EZ-Bar)", "triceps", 90, 3, 8),
		Exercise("Overhead Tricep Extension with Dumbbell", "triceps", 85, 3, 8),
		Exercise("Close-Grip Bench Press", "triceps", 95, 3, 8),
		Exercise("Cable Overhead Tricep Extension", "triceps", 85, 3, 8),
		Exercise("Tricep Dip", "triceps", 90, 3, 8),
		Exercise("Tricep Kickback", "triceps", 70, 3, 8),
		Exercise("Cable Tricep Pushdown", "triceps", 85, 3, 8)
	};

	// chest
	intermediateWorkouts[FitnessGoal_strength]["chest"] = {
		Exercise("Barbell Bench Press", "chest", 120, 3, 8),
		Exercise("Barbell Incline Press", "chest", 120, 3, 8),
		Exercise("Barbell Decline Press", "chest", 120, 3, 8),
		Exercise("Dumbbell Bench Press", "chest", 120, 3, 8),
		Exercise("Incline Dumbbell Press", "chest", 110, 3, 8),
		Exercise("Decline Dumbbell Press", "chest", 115, 3, 8),
		Exercise("Chest Dip", "chest", 100, 3, 8),
		Exercise("Cable Fly", "chest", 90, 3, 8),
		Exercise("Chest Fly", "chest", 90, 3, 8),
		Exercise("Traditional Push-up", "chest", 100, 3, 8),
		Exercise("Wide Push-up", "chest", 100, 3, 8),
		Exercise("Narrow Push-up", "chest", 100, 3, 8),
		Exercise("Incline Push-up", "chest", 100, 3, 8),
		Exercise("Decline Push-up", "chest", 100, 3, 8)
	};
	// legs
	intermediateWorkouts[FitnessGoal_strength]["legs"] = {
		Exercise("Squat", "legs", 130, 3, 8),
		Exercise("Deadlift", "legs", 140, 3, 8),
		Exercise("Leg Press", "legs", 120, 3, 8),
		Exercise("Lunges with Dumbbells", "legs", 110, 3, 8),
		Exercise("Leg Curl", "legs", 100, 3, 8),
		Exercise("Calf Raises", "legs", 90, 3, 8),
		Exercise("Leg Extension", "legs", 90, 3, 8),
		Exercise("Goblin Squat", "legs", 90, 3, 8),
	};
	// back
	intermediateWorkouts[FitnessGoal_strength]["back"] = {
		Exercise("Traditional Pull - Up", "back", 110, 3, 8),
		Exercise("Close Grip Pull-Up", "back", 110, 3, 8),
		Exercise("Traditional Chin-Up", "back", 110, 3, 8),
		Exercise("Close Grip Chin Chin-Up", "back", 110, 3, 8),
		Exercise("Bent-Over Barbell Row", "back", 120, 3, 8),
		Exercise("Deadlift", "back", 140, 3, 8),
		Exercise("Lat Pulldown", "back", 110, 3, 8),
		Exercise("Seated Cable Row", "back", 100, 3, 8),
		Exercise("T-Bar Row", "back", 115, 3, 8)
	};
	//shoulders
	intermediateWorkouts[FitnessGoal_strength]["shoulders"] = {
		Exercise("Overhead Barbell Press", "shoulders", 100, 3, 8),
		Exercise("Dumbbell Lateral Raise", "shoulders", 80, 3, 8),
		Exercise("Seated Dumbbell Press", "shoulders", 90, 3, 8),
		Exercise("Front Dumbbell Raise", "shoulders", 80, 3, 8),
		Exercise("Bent-Over Reverse Fly", "shoulders", 85, 3, 8),
		Exercise("Upright Row", "shoulders", 90, 3, 8),
		Exercise("Shoulder Press", "shoulders", 90, 3, 8),
		Exercise("Seated Bent-Over Rear Delt Raise", "shoulders", 80, 3, 8),
		Exercise("Shrugs", "shoulders", 100, 3, 8)
	};
	// abs
	intermediateWorkouts[FitnessGoal_strength]["abs"] = {
		Exercise("Hanging Leg Raise", "abs", 80, 3, 8),
		Exercise("Cable Crunch", "abs", 70, 3, 8),
		Exercise("Plank (60 seconds)", "abs", 90, 3, 60),
		Exercise("Ab Roller", "abs", 70, 3, 8),
		Exercise("Reverse Crunch", "abs", 60, 3, 8),
		Exercise("Crunches", "abs", 50, 3, 8),
		Exercise("Russian Twist", "abs", 60, 3, 8),
		Exercise("Bicycle Crunches", "abs", 70, 3, 8),
		Exercise("Sit-ups", "abs", 60, 3, 8)
	};

	// Advanced

	// biceps
	advancedWorkouts[FitnessGoal_strength]["biceps"] = {
		Exercise("Barbell Curl", "biceps", 90, 3, 8),
		Exercise("Incline Dumbbell Curl", "biceps", 85, 3, 8),
		Exercise("Spider Curl", "biceps", 85, 3, 8),
		Exercise("Hammer Curl with Rope (Cable)", "biceps", 90, 3, 8),
		Exercise("Bicep Curl with Rope (Cable)", "biceps", 80, 3, 8),
		Exercise("Preacher Curl (EZ-Bar)", "biceps", 85, 3, 8),
		Exercise("Concentration Curl", "biceps", 80, 3, 8),
		Exercise("Dumbbell Bicep Curl", "biceps", 80, 3, 8),
		Exercise("Dumbbell Hammer Curl", "biceps", 80, 3, 8),
		Exercise("Zottman Curl", "biceps", 85, 3, 8),
		Exercise("Cross Body Hammer Curl", "biceps", 85, 3, 8)
	};
	//shoulders
	advancedWorkouts[FitnessGoal_strength]["shoulders"] = {
		Exercise("Overhead Barbell Press", "shoulders", 100, 3, 8),
		Exercise("Dumbbell Lateral Raise", "shoulders", 80, 3, 8),
		Exercise("Seated Dumbbell Press", "shoulders", 90, 3, 8),
		Exercise("Front Dumbbell Raise", "shoulders", 80, 3, 8),
		Exercise("Bent-Over Reverse Fly", "shoulders", 85, 3, 8),
		Exercise("Upright Row", "shoulders", 90, 3, 8),
		Exercise("Shoulder Press", "shoulders", 90, 3, 8),
		Exercise("Seated Bent-Over Rear Delt Raise", "shoulders", 80, 3, 8),
		Exercise("Shrugs", "shoulders", 100, 3, 8)
	};
	// triceps
	advancedWorkouts[FitnessGoal_strength]["triceps"] = {
		Exercise("Skull Crusher (EZ-Bar)", "triceps", 90, 3, 8),
		Exercise("Overhead Tricep Extension with Dumbbell", "triceps", 85, 3, 8),
		Exercise("Close-Grip Bench Press", "triceps", 95, 3, 8),
		Exercise("Cable Overhead Tricep Extension", "triceps", 85, 3, 8),
		Exercise("Tricep Dip", "triceps", 90, 3, 8),
		Exercise("Tricep Kickback", "triceps", 70, 3, 8),
		Exercise("Cable Tricep Pushdown", "triceps", 85, 3, 8),
		Exercise("Diamond Push-Up", "triceps", 90, 3, 8),
		Exercise("Triceps Extension Push-ups", "triceps", 95, 3, 8)
	};
	// chest
	advancedWorkouts[FitnessGoal_strength]["chest"] = {
		Exercise("Barbell Bench Press", "chest", 120, 3, 8),
		Exercise("Barbell Incline Press", "chest", 120, 3, 8),
		Exercise("Barbell Decline Press", "chest", 120, 3, 8),
		Exercise("Dumbbell Bench Press", "chest", 120, 3, 8),
		Exercise("Incline Dumbbell Press", "chest", 110, 3, 8),
		Exercise("Decline Dumbbell Press", "chest", 115, 3, 8),
		Exercise("Chest Dip", "chest", 100, 3, 8),
		Exercise("Cable Fly", "chest", 90, 3, 8),
		Exercise("Chest Fly", "chest", 90, 3, 8),
		Exercise("Traditional Push-up", "chest", 100, 3, 8),
		Exercise("Wide Push-up", "chest", 100, 3, 8),
		Exercise("Narrow Push-up", "chest", 100, 3, 8),
		Exercise("Incline Push-up", "chest", 100, 3, 8),
		Exercise("Decline Push-up", "chest", 100, 3, 8),
		Exercise("Weighted Push-Up", "chest", 110, 3, 8),
		Exercise("Svend Press", "chest", 80, 3, 8)
	};
	// legs
	advancedWorkouts[FitnessGoal_strength]["legs"] = {
		Exercise("Squat", "legs", 130, 3, 8),
		Exercise("Deadlift", "legs", 140, 3, 8),
		Exercise("Leg Press", "legs", 120, 3, 8),
		Exercise("Lunges with Dumbbells", "legs", 110, 3, 8),
		Exercise("Leg Curl", "legs", 100, 3, 8),
		Exercise("Calf Raises", "legs", 90, 3, 8),
		Exercise("Leg Extension", "legs", 90, 3, 8),
		Exercise("Goblin Squat", "legs", 90, 3, 8),
		Exercise("Front Squat", "legs", 130, 3, 8),
		Exercise("Bulgarian Split Squat", "legs", 110, 3, 8),
		Exercise("Romanian Deadlift", "legs", 140, 3, 8)
	};
	// back
	advancedWorkouts[FitnessGoal_strength]["back"] = {
		Exercise("Traditional Pull - Up", "back", 110, 3, 8),
		Exercise("Close Grip Pull-Up", "back", 110, 3, 8),
		Exercise("Wide Grip Pull-Up", "back", 110, 3, 8),
		Exercise("Traditional Chin-Up", "back", 110, 3, 8),
		Exercise("Close Grip Chin Chin-Up", "back", 110, 3, 8),
		Exercise("Wide Grip Chin Chin-Up", "back", 110, 3, 8),
		Exercise("Bent-Over Barbell Row", "back", 120, 3, 8),
		Exercise("Deadlift", "back", 140, 3, 8),
		Exercise("Lat Pulldown", "back", 110, 3, 8),
		Exercise("Seated Cable Row", "back", 100, 3, 8),
		Exercise("T-Bar Row", "back", 115, 3, 8),
		Exercise("Weighted Pull-Up", "back", 120, 3, 8),
		Exercise("Weighted Close Grip Pull-Up", "back", 120, 3, 8),
		Exercise("Weighted Wide Grip Pull-Up", "back", 120, 3, 8),
		Exercise("Weighted Chin-Up", "back", 120, 3, 8),
		Exercise("Weighted Close Grip Chin Chin-Up", "back", 120, 3, 8),
		Exercise("Weighted Wide Grip Chin Chin-Up", "back", 120, 3, 8),
		Exercise("Single-Arm Dumbbell Row", "back", 110, 3, 8)
	};
	// abs
	advancedWorkouts[FitnessGoal_strength]["abs"] = {
		Exercise("Hanging Leg Raise", "abs", 80, 3, 8),
		Exercise("Cable Crunch", "abs", 70, 3, 8),
		Exercise("Plank (60 seconds)", "abs", 90, 3, 60),
		Exercise("Ab Roller", "abs", 70, 3, 8),
		Exercise("Reverse Crunch", "abs", 60, 3, 8),
		Exercise("Crunches", "abs", 50, 3, 8),
		Exercise("Russian Twist", "abs", 60, 3, 8),
		Exercise("Bicycle Crunches", "abs", 70, 3, 8),
		Exercise("Sit-ups", "abs", 60, 3, 8),
		Exercise("Weighted Plank (60 seconds)", "abs", 90, 3, 60),
		Exercise("Dragon Flag", "abs", 100, 3, 8)
	};

	// Volume Level Exercises

	// Beginner
	// chest
	beginnerWorkouts[FitnessGoal_volume]["chest"] = {
		Exercise("Traditional Push-up", "chest", 100, 4, 10),
		Exercise("Wide Push-up", "chest", 100, 4, 10),
		Exercise("Narrow Push-up", "chest", 100, 4, 10),
		Exercise("Incline Push-up", "chest", 100, 4, 10),
		Exercise("Decline Push-up", "chest", 100, 4, 10)
	};
	// shoulders
	beginnerWorkouts[FitnessGoal_volume]["shoulders"] = {
		Exercise("Shoulder Press", "shoulders", 90, 4, 10),
		Exercise("Dumbbell Lateral Raise", "shoulders", 100, 4, 10),
		Exercise("Front Dumbbell Raise", "shoulders", 80, 4, 10),
		Exercise("Seated Bent-Over Rear Delt Raise", "shoulders", 80, 4, 10),
		Exercise("Shrugs", "shoulders", 100, 4, 10)
	};
	// legs
	beginnerWorkouts[FitnessGoal_volume]["legs"] = {
		Exercise("Squat", "legs", 100, 4, 10),
		Exercise("Leg Press", "legs", 120, 4, 10),
		Exercise("Lunges", "legs", 100, 4, 10),
		Exercise("Leg Extension", "legs", 90, 4, 10),
		Exercise("Leg Curl", "legs", 90, 4, 10),
		Exercise("Calf Raises", "legs", 80, 4, 10)
	};
	// back
	beginnerWorkouts[FitnessGoal_volume]["back"] = {
		Exercise("Assisted Pull-up", "back", 100, 4, 10),
		Exercise("Assisted Chin-up", "back", 100, 4, 10),
		Exercise("Lat Pulldown", "back", 120, 4, 10),
		Exercise("Seated Cable Row", "back", 110, 4, 10),
		Exercise("Bent-over Dumbbell Row", "back", 110, 4, 10),
		Exercise("Back Extension", "back", 80, 4, 10)
	};
	// biceps
	beginnerWorkouts[FitnessGoal_volume]["biceps"] = {
		Exercise("Dumbbell Bicep Curl", "biceps", 80, 4, 10),
		Exercise("Dumbbell Hammer Curl", "biceps", 80, 4, 10),
		Exercise("Concentration Curl", "biceps", 70, 4, 10),
		Exercise("Preacher Curl", "biceps", 75, 4, 10),
		Exercise("Barbell Curl", "biceps", 85, 4, 10)
	};
	// triceps
	beginnerWorkouts[FitnessGoal_volume]["triceps"] = {
		Exercise("Tricep Dip", "triceps", 90, 4, 10),
		Exercise("Skull Crusher", "triceps", 90, 4, 10),
		Exercise("Tricep Extension", "triceps", 80, 4, 10),
		Exercise("Tricep Kickback", "triceps", 70, 4, 10),
		Exercise("Cable Tricep Pushdown", "triceps", 85, 4, 10)
	};
	// abs
	beginnerWorkouts[FitnessGoal_volume]["abs"] = {
		Exercise("Crunches", "abs", 50, 4, 10),
		Exercise("Russian Twist", "abs", 60, 4, 10),
		Exercise("Plank (30 seconds)", "abs", 80, 4, 10), // Duration in seconds
		Exercise("Bicycle Crunches", "abs", 70, 4, 10),
		Exercise("Reverse Crunch", "abs", 60, 4, 10),
		Exercise("Sit-ups", "abs", 60, 4, 10)
	};

	// Intermediate
	// biceps
	intermediateWorkouts[FitnessGoal_volume]["biceps"] = {
		Exercise("Barbell Curl", "biceps", 90, 4, 10),
		Exercise("Incline Dumbbell Curl", "biceps", 85, 4, 10),
		Exercise("Spider Dumbbell Curl", "biceps", 85, 4, 10),
		Exercise("Hammer Curl with Rope (Cable)", "biceps", 90, 4, 10),
		Exercise("Bicep Curl with Rope (Cable)", "biceps", 100, 4, 10),
		Exercise("Preacher Curl (EZ-Bar)", "biceps", 85, 4, 10),
		Exercise("Concentration Curl", "biceps", 80, 4, 10),
		Exercise("Dumbbell Bicep Curl", "biceps", 80, 4, 10),
		Exercise("Dumbbell Hammer Curl", "biceps", 80, 4, 10),
	};

	// triceps
	intermediateWorkouts[FitnessGoal_volume]["triceps"] = {
		Exercise("Skull Crusher (EZ-Bar)", "triceps", 90, 4, 10),
		Exercise("Overhead Tricep Extension with Dumbbell", "triceps", 85, 4, 10),
		Exercise("Close-Grip Bench Press", "triceps", 95, 4, 10),
		Exercise("Cable Overhead Tricep Extension", "triceps", 85, 4, 10),
		Exercise("Tricep Dip", "triceps", 90, 4, 10),
		Exercise("Tricep Kickback", "triceps", 70, 4, 10),
		Exercise("Cable Tricep Pushdown", "triceps", 85, 4, 10)
	};

	// chest
	intermediateWorkouts[FitnessGoal_volume]["chest"] = {
		Exercise("Barbell Bench Press", "chest", 120, 4, 10),
		Exercise("Barbell Incline Press", "chest", 120, 4, 10),
		Exercise("Barbell Decline Press", "chest", 120, 4, 10),
		Exercise("Dumbbell Bench Press", "chest", 120, 4, 10),
		Exercise("Incline Dumbbell Press", "chest", 110, 4, 10),
		Exercise("Decline Dumbbell Press", "chest", 115, 4, 10),
		Exercise("Chest Dip", "chest", 100, 4, 10),
		Exercise("Cable Fly", "chest", 90, 4, 10),
		Exercise("Chest Fly", "chest", 90, 4, 10),
		Exercise("Traditional Push-up", "chest", 100, 4, 10),
		Exercise("Wide Push-up", "chest", 100, 4, 10),
		Exercise("Narrow Push-up", "chest", 100, 4, 10),
		Exercise("Incline Push-up", "chest", 100, 4, 10),
		Exercise("Decline Push-up", "chest", 100, 4, 10)
	};
	// legs
	intermediateWorkouts[FitnessGoal_volume]["legs"] = {
		Exercise("Squat", "legs", 140, 4, 10),
		Exercise("Deadlift", "legs", 140, 4, 10),
		Exercise("Leg Press", "legs", 120, 4, 10),
		Exercise("Lunges with Dumbbells", "legs", 110, 4, 10),
		Exercise("Leg Curl", "legs", 100, 4, 10),
		Exercise("Calf Raises", "legs", 90, 4, 10),
		Exercise("Leg Extension", "legs", 90, 4, 10),
		Exercise("Goblin Squat", "legs", 90, 4, 10),
	};
	// back
	intermediateWorkouts[FitnessGoal_volume]["back"] = {
		Exercise("Traditional Pull - Up", "back", 110, 4, 10),
		Exercise("Close Grip Pull-Up", "back", 110, 4, 10),
		Exercise("Traditional Chin-Up", "back", 110, 4, 10),
		Exercise("Close Grip Chin Chin-Up", "back", 110, 4, 10),
		Exercise("Bent-Over Barbell Row", "back", 120, 4, 10),
		Exercise("Deadlift", "back", 140, 4, 10),
		Exercise("Lat Pulldown", "back", 110, 4, 10),
		Exercise("Seated Cable Row", "back", 100, 4, 10),
		Exercise("T-Bar Row", "back", 115, 4, 10)
	};
	//shoulders
	intermediateWorkouts[FitnessGoal_volume]["shoulders"] = {
		Exercise("Overhead Barbell Press", "shoulders", 100, 4, 10),
		Exercise("Dumbbell Lateral Raise", "shoulders", 80, 4, 10),
		Exercise("Seated Dumbbell Press", "shoulders", 90, 4, 10),
		Exercise("Front Dumbbell Raise", "shoulders", 80, 4, 10),
		Exercise("Bent-Over Reverse Fly", "shoulders", 85, 4, 10),
		Exercise("Upright Row", "shoulders", 90, 4, 10),
		Exercise("Shoulder Press", "shoulders", 90, 4, 10),
		Exercise("Seated Bent-Over Rear Delt Raise", "shoulders", 80, 4, 10),
		Exercise("Shrugs", "shoulders", 100, 4, 10)
	};
	// abs
	intermediateWorkouts[FitnessGoal_volume]["abs"] = {
		Exercise("Hanging Leg Raise", "abs", 80, 4, 10),
		Exercise("Cable Crunch", "abs", 70, 4, 10),
		Exercise("Plank (60 seconds)", "abs", 90, 4, 60),
		Exercise("Ab Roller", "abs", 70, 4, 10),
		Exercise("Reverse Crunch", "abs", 60, 4, 10),
		Exercise("Crunches", "abs", 50, 4, 10),
		Exercise("Russian Twist", "abs", 60, 4, 10),
		Exercise("Bicycle Crunches", "abs", 70, 4, 10),
		Exercise("Sit-ups", "abs", 60, 4, 10)
	};

	// Advanced

	// biceps
	advancedWorkouts[FitnessGoal_volume]["biceps"] = {
		Exercise("Barbell Curl", "biceps", 90, 4, 10),
		Exercise("Incline Dumbbell Curl", "biceps", 85, 4, 10),
		Exercise("Spider Curl", "biceps", 85, 4, 10),
		Exercise("Hammer Curl with Rope (Cable)", "biceps", 90, 4, 10),
		Exercise("Bicep Curl with Rope (Cable)", "biceps", 80, 4, 10),
		Exercise("Preacher Curl (EZ-Bar)", "biceps", 85, 4, 10),
		Exercise("Concentration Curl", "biceps", 80, 4, 10),
		Exercise("Dumbbell Bicep Curl", "biceps", 80, 4, 10),
		Exercise("Dumbbell Hammer Curl", "biceps", 80, 4, 10),
		Exercise("Zottman Curl", "biceps", 85, 4, 10),
		Exercise("Cross Body Hammer Curl", "biceps", 85, 4, 10)
	};
	//shoulders
	advancedWorkouts[FitnessGoal_volume]["shoulders"] = {
		Exercise("Overhead Barbell Press", "shoulders", 100, 4, 10),
		Exercise("Dumbbell Lateral Raise", "shoulders", 80, 4, 10),
		Exercise("Seated Dumbbell Press", "shoulders", 90, 4, 10),
		Exercise("Front Dumbbell Raise", "shoulders", 80, 4, 10),
		Exercise("Bent-Over Reverse Fly", "shoulders", 85, 4, 10),
		Exercise("Upright Row", "shoulders", 90, 4, 10),
		Exercise("Shoulder Press", "shoulders", 90, 4, 10),
		Exercise("Seated Bent-Over Rear Delt Raise", "shoulders", 80, 4, 10),
		Exercise("Shrugs", "shoulders", 100, 4, 10)
	};
	// triceps
	advancedWorkouts[FitnessGoal_volume]["triceps"] = {
		Exercise("Skull Crusher (EZ-Bar)", "triceps", 90, 4, 10),
		Exercise("Overhead Tricep Extension with Dumbbell", "triceps", 85, 4, 10),
		Exercise("Close-Grip Bench Press", "triceps", 95, 4, 10),
		Exercise("Cable Overhead Tricep Extension", "triceps", 85, 4, 10),
		Exercise("Tricep Dip", "triceps", 90, 4, 10),
		Exercise("Tricep Kickback", "triceps", 70, 4, 10),
		Exercise("Cable Tricep Pushdown", "triceps", 85, 4, 10),
		Exercise("Diamond Push-Up", "triceps", 90, 4, 10),
		Exercise("Triceps Extension Push-ups", "triceps", 95, 4, 10)
	};
	// chest
	advancedWorkouts[FitnessGoal_volume]["chest"] = {
		Exercise("Barbell Bench Press", "chest", 120, 4, 10),
		Exercise("Barbell Incline Press", "chest", 120, 4, 10),
		Exercise("Barbell Decline Press", "chest", 120, 4, 10),
		Exercise("Dumbbell Bench Press", "chest", 120, 4, 10),
		Exercise("Incline Dumbbell Press", "chest", 110, 4, 10),
		Exercise("Decline Dumbbell Press", "chest", 115, 4, 10),
		Exercise("Chest Dip", "chest", 100, 4, 10),
		Exercise("Cable Fly", "chest", 90, 4, 10),
		Exercise("Chest Fly", "chest", 90, 4, 10),
		Exercise("Traditional Push-up", "chest", 100, 4, 10),
		Exercise("Wide Push-up", "chest", 100, 4, 10),
		Exercise("Narrow Push-up", "chest", 100, 4, 10),
		Exercise("Incline Push-up", "chest", 100, 4, 10),
		Exercise("Decline Push-up", "chest", 100, 4, 10),
		Exercise("Weighted Push-Up", "chest", 110, 4, 10),
		Exercise("Svend Press", "chest", 80, 4, 10)
	};
	// legs
	advancedWorkouts[FitnessGoal_volume]["legs"] = {
		Exercise("Squat", "legs", 140, 4, 10),
		Exercise("Deadlift", "legs", 140, 4, 10),
		Exercise("Leg Press", "legs", 120, 4, 10),
		Exercise("Lunges with Dumbbells", "legs", 110, 4, 10),
		Exercise("Leg Curl", "legs", 100, 4, 10),
		Exercise("Calf Raises", "legs", 90, 4, 10),
		Exercise("Leg Extension", "legs", 90, 4, 10),
		Exercise("Goblin Squat", "legs", 90, 4, 10),
		Exercise("Front Squat", "legs", 140, 4, 10),
		Exercise("Bulgarian Split Squat", "legs", 110, 4, 10),
		Exercise("Romanian Deadlift", "legs", 140, 4, 10)
	};
	// back
	advancedWorkouts[FitnessGoal_volume]["back"] = {
		Exercise("Traditional Pull - Up", "back", 110, 4, 10),
		Exercise("Close Grip Pull-Up", "back", 110, 4, 10),
		Exercise("Wide Grip Pull-Up", "back", 110, 4, 10),
		Exercise("Traditional Chin-Up", "back", 110, 4, 10),
		Exercise("Close Grip Chin Chin-Up", "back", 110, 4, 10),
		Exercise("Wide Grip Chin Chin-Up", "back", 110, 4, 10),
		Exercise("Bent-Over Barbell Row", "back", 120, 4, 10),
		Exercise("Deadlift", "back", 140, 4, 10),
		Exercise("Lat Pulldown", "back", 110, 4, 10),
		Exercise("Seated Cable Row", "back", 100, 4, 10),
		Exercise("T-Bar Row", "back", 115, 4, 10),
		Exercise("Weighted Pull-Up", "back", 120, 4, 10),
		Exercise("Weighted Close Grip Pull-Up", "back", 120, 4, 10),
		Exercise("Weighted Wide Grip Pull-Up", "back", 120, 4, 10),
		Exercise("Weighted Chin-Up", "back", 120, 4, 10),
		Exercise("Weighted Close Grip Chin Chin-Up", "back", 120, 4, 10),
		Exercise("Weighted Wide Grip Chin Chin-Up", "back", 120, 4, 10),
		Exercise("Single-Arm Dumbbell Row", "back", 110, 4, 10)
	};
	// abs
	advancedWorkouts[FitnessGoal_volume]["abs"] = {
		Exercise("Hanging Leg Raise", "abs", 80, 4, 10),
		Exercise("Cable Crunch", "abs", 70, 4, 10),
		Exercise("Plank (60 seconds)", "abs", 90, 4, 60),
		Exercise("Ab Roller", "abs", 70, 4, 10),
		Exercise("Reverse Crunch", "abs", 60, 4, 10),
		Exercise("Crunches", "abs", 50, 4, 10),
		Exercise("Russian Twist", "abs", 60, 4, 10),
		Exercise("Bicycle Crunches", "abs", 70, 4, 10),
		Exercise("Sit-ups", "abs", 60, 4, 10),
		Exercise("Weighted Plank (60 seconds)", "abs", 90, 4, 60),
		Exercise("Dragon Flag", "abs", 100, 4, 10)
	};

	// Endurance Level Exercises

	// Beginner
	// chest
	beginnerWorkouts[FitnessGoal_endurance]["chest"] = {
		Exercise("Traditional Push-up", "chest", 110, 3, 12),
		Exercise("Wide Push-up", "chest", 110, 3, 12),
		Exercise("Narrow Push-up", "chest", 110, 3, 12),
		Exercise("Incline Push-up", "chest", 110, 3, 12),
		Exercise("Decline Push-up", "chest", 110, 3, 12)
	};
	// shoulders
	beginnerWorkouts[FitnessGoal_endurance]["shoulders"] = {
		Exercise("Shoulder Press", "shoulders", 100, 3, 12),
		Exercise("Dumbbell Lateral Raise", "shoulders", 90, 3, 12),
		Exercise("Front Dumbbell Raise", "shoulders", 90, 3, 12),
		Exercise("Seated Bent-Over Rear Delt Raise", "shoulders", 90, 3, 12),
		Exercise("Shrugs", "shoulders", 110, 3, 12)
	};
	// legs
	beginnerWorkouts[FitnessGoal_endurance]["legs"] = {
		Exercise("Squat", "legs", 110, 3, 12),
		Exercise("Leg Press", "legs", 130, 3, 12),
		Exercise("Lunges", "legs", 110, 3, 12),
		Exercise("Leg Extension", "legs", 100, 3, 12),
		Exercise("Leg Curl", "legs", 100, 3, 12),
		Exercise("Calf Raises", "legs", 90, 3, 12)
	};
	// back
	beginnerWorkouts[FitnessGoal_endurance]["back"] = {
		Exercise("Assisted Pull-up", "back", 110, 3, 12),
		Exercise("Assisted Chin-up", "back", 110, 3, 12),
		Exercise("Lat Pulldown", "back", 130, 3, 12),
		Exercise("Seated Cable Row", "back", 120, 3, 12),
		Exercise("Bent-over Dumbbell Row", "back", 120, 3, 12),
		Exercise("Back Extension", "back", 90, 3, 12)
	};
	// biceps
	beginnerWorkouts[FitnessGoal_endurance]["biceps"] = {
		Exercise("Dumbbell Bicep Curl", "biceps", 90, 3, 12),
		Exercise("Dumbbell Hammer Curl", "biceps", 90, 3, 12),
		Exercise("Concentration Curl", "biceps", 80, 3, 12),
		Exercise("Preacher Curl", "biceps", 85, 3, 12),
		Exercise("Barbell Curl", "biceps", 95, 3, 12)
	};
	// triceps
	beginnerWorkouts[FitnessGoal_endurance]["triceps"] = {
		Exercise("Tricep Dip", "triceps", 100, 3, 12),
		Exercise("Skull Crusher", "triceps", 100, 3, 12),
		Exercise("Tricep Extension", "triceps", 90, 3, 12),
		Exercise("Tricep Kickback", "triceps", 80, 3, 12),
		Exercise("Cable Tricep Pushdown", "triceps", 95, 3, 12)
	};
	// abs
	beginnerWorkouts[FitnessGoal_endurance]["abs"] = {
		Exercise("Crunches", "abs", 60, 3, 12),
		Exercise("Russian Twist", "abs", 70, 3, 12),
		Exercise("Plank (30 seconds)", "abs", 90, 3, 12), // Duration in seconds
		Exercise("Bicycle Crunches", "abs", 80, 3, 12),
		Exercise("Reverse Crunch", "abs", 70, 3, 12),
		Exercise("Sit-ups", "abs", 70, 3, 12)
	};

	// Intermediate
	// biceps
	intermediateWorkouts[FitnessGoal_endurance]["biceps"] = {
		Exercise("Barbell Curl", "biceps", 100, 3, 12),
		Exercise("Incline Dumbbell Curl", "biceps", 95, 3, 12),
		Exercise("Spider Dumbbell Curl", "biceps", 95, 3, 12),
		Exercise("Hammer Curl with Rope (Cable)", "biceps", 100, 3, 12),
		Exercise("Bicep Curl with Rope (Cable)", "biceps", 90, 3, 12),
		Exercise("Preacher Curl (EZ-Bar)", "biceps", 95, 3, 12),
		Exercise("Concentration Curl", "biceps", 90, 3, 12),
		Exercise("Dumbbell Bicep Curl", "biceps", 90, 3, 12),
		Exercise("Dumbbell Hammer Curl", "biceps", 90, 3, 12),
	};

	// triceps
	intermediateWorkouts[FitnessGoal_endurance]["triceps"] = {
		Exercise("Skull Crusher (EZ-Bar)", "triceps", 100, 3, 12),
		Exercise("Overhead Tricep Extension with Dumbbell", "triceps", 95, 3, 12),
		Exercise("Close-Grip Bench Press", "triceps", 95, 3, 12),
		Exercise("Cable Overhead Tricep Extension", "triceps", 95, 3, 12),
		Exercise("Tricep Dip", "triceps", 100, 3, 12),
		Exercise("Tricep Kickback", "triceps", 80, 3, 12),
		Exercise("Cable Tricep Pushdown", "triceps", 95, 3, 12)
	};

	// chest
	intermediateWorkouts[FitnessGoal_endurance]["chest"] = {
		Exercise("Barbell Bench Press", "chest", 130, 3, 12),
		Exercise("Barbell Incline Press", "chest", 130, 3, 12),
		Exercise("Barbell Decline Press", "chest", 130, 3, 12),
		Exercise("Dumbbell Bench Press", "chest", 130, 3, 12),
		Exercise("Incline Dumbbell Press", "chest", 120, 3, 12),
		Exercise("Decline Dumbbell Press", "chest", 125, 3, 12),
		Exercise("Chest Dip", "chest", 110, 3, 12),
		Exercise("Cable Fly", "chest", 100, 3, 12),
		Exercise("Chest Fly", "chest", 100, 3, 12),
		Exercise("Traditional Push-up", "chest", 110, 3, 12),
		Exercise("Wide Push-up", "chest", 110, 3, 12),
		Exercise("Narrow Push-up", "chest", 110, 3, 12),
		Exercise("Incline Push-up", "chest", 110, 3, 12),
		Exercise("Decline Push-up", "chest", 110, 3, 12)
	};
	// legs
	intermediateWorkouts[FitnessGoal_endurance]["legs"] = {
		Exercise("Squat", "legs", 140, 3, 12),
		Exercise("Deadlift", "legs", 150, 3, 12),
		Exercise("Leg Press", "legs", 130, 3, 12),
		Exercise("Lunges with Dumbbells", "legs", 120, 3, 12),
		Exercise("Leg Curl", "legs", 110, 3, 12),
		Exercise("Calf Raises", "legs", 100, 3, 12),
		Exercise("Leg Extension", "legs", 100, 3, 12),
		Exercise("Goblin Squat", "legs", 1100, 3, 12),
	};
	// back
	intermediateWorkouts[FitnessGoal_endurance]["back"] = {
		Exercise("Traditional Pull - Up", "back", 120, 3, 12),
		Exercise("Close Grip Pull-Up", "back", 120, 3, 12),
		Exercise("Traditional Chin-Up", "back", 120, 3, 12),
		Exercise("Close Grip Chin Chin-Up", "back", 120, 3, 12),
		Exercise("Bent-Over Barbell Row", "back", 130, 3, 12),
		Exercise("Deadlift", "back", 150, 3, 12),
		Exercise("Lat Pulldown", "back", 120, 3, 12),
		Exercise("Seated Cable Row", "back", 110, 3, 12),
		Exercise("T-Bar Row", "back", 115, 3, 12)
	};
	//shoulders
	intermediateWorkouts[FitnessGoal_endurance]["shoulders"] = {
		Exercise("Overhead Barbell Press", "shoulders", 110, 3, 12),
		Exercise("Dumbbell Lateral Raise", "shoulders", 90, 3, 12),
		Exercise("Seated Dumbbell Press", "shoulders", 100, 3, 12),
		Exercise("Front Dumbbell Raise", "shoulders", 90, 3, 12),
		Exercise("Bent-Over Reverse Fly", "shoulders", 95, 3, 12),
		Exercise("Upright Row", "shoulders", 100, 3, 12),
		Exercise("Shoulder Press", "shoulders", 100, 3, 12),
		Exercise("Seated Bent-Over Rear Delt Raise", "shoulders", 90, 3, 12),
		Exercise("Shrugs", "shoulders", 110, 3, 12)
	};
	// abs
	intermediateWorkouts[FitnessGoal_endurance]["abs"] = {
		Exercise("Hanging Leg Raise", "abs", 90, 3, 12),
		Exercise("Cable Crunch", "abs", 80, 3, 12),
		Exercise("Plank (60 seconds)", "abs", 100, 3, 60),
		Exercise("Ab Roller", "abs", 80, 3, 12),
		Exercise("Reverse Crunch", "abs", 70, 3, 12),
		Exercise("Crunches", "abs", 60, 3, 12),
		Exercise("Russian Twist", "abs", 70, 3, 12),
		Exercise("Bicycle Crunches", "abs", 80, 3, 12),
		Exercise("Sit-ups", "abs", 70, 3, 12)
	};

	// Advanced

	// biceps
	advancedWorkouts[FitnessGoal_endurance]["biceps"] = {
		Exercise("Barbell Curl", "biceps", 100, 3, 12),
		Exercise("Incline Dumbbell Curl", "biceps", 95, 3, 12),
		Exercise("Spider Curl", "biceps", 95, 3, 12),
		Exercise("Hammer Curl with Rope (Cable)", "biceps", 100, 3, 12),
		Exercise("Bicep Curl with Rope (Cable)", "biceps", 90, 3, 12),
		Exercise("Preacher Curl (EZ-Bar)", "biceps", 85, 3, 12),
		Exercise("Concentration Curl", "biceps", 90, 3, 12),
		Exercise("Dumbbell Bicep Curl", "biceps", 90, 3, 12),
		Exercise("Dumbbell Hammer Curl", "biceps", 90, 3, 12),
		Exercise("Zottman Curl", "biceps", 95, 3, 12),
		Exercise("Cross Body Hammer Curl", "biceps", 95, 3, 12)
	};
	// triceps
	advancedWorkouts[FitnessGoal_endurance]["triceps"] = {
		Exercise("Skull Crusher (EZ-Bar)", "triceps", 100, 3, 12),
		Exercise("Overhead Tricep Extension with Dumbbell", "triceps", 95, 3, 12),
		Exercise("Close-Grip Bench Press", "triceps", 105, 3, 12),
		Exercise("Cable Overhead Tricep Extension", "triceps", 95, 3, 12),
		Exercise("Tricep Dip", "triceps", 100, 3, 12),
		Exercise("Tricep Kickback", "triceps", 80, 3, 12),
		Exercise("Cable Tricep Pushdown", "triceps", 95, 3, 12),
		Exercise("Diamond Push-Up", "triceps", 100, 3, 12),
		Exercise("Triceps Extension Push-ups", "triceps", 105, 3, 12)
	};
	// chest
	advancedWorkouts[FitnessGoal_endurance]["chest"] = {
		Exercise("Barbell Bench Press", "chest", 130, 3, 12),
		Exercise("Barbell Incline Press", "chest", 130, 3, 12),
		Exercise("Barbell Decline Press", "chest", 130, 3, 12),
		Exercise("Dumbbell Bench Press", "chest", 130, 3, 12),
		Exercise("Incline Dumbbell Press", "chest", 120, 3, 12),
		Exercise("Decline Dumbbell Press", "chest", 125, 3, 12),
		Exercise("Chest Dip", "chest", 110, 3, 12),
		Exercise("Cable Fly", "chest", 100, 3, 12),
		Exercise("Chest Fly", "chest", 100, 3, 12),
		Exercise("Traditional Push-up", "chest", 110, 3, 12),
		Exercise("Wide Push-up", "chest", 110, 3, 12),
		Exercise("Narrow Push-up", "chest", 110, 3, 12),
		Exercise("Incline Push-up", "chest", 110, 3, 12),
		Exercise("Decline Push-up", "chest", 110, 3, 12),
		Exercise("Weighted Push-Up", "chest", 120, 3, 12),
		Exercise("Svend Press", "chest", 90, 3, 12)
	};
	//shoulders
	advancedWorkouts[FitnessGoal_endurance]["shoulders"] = {
		Exercise("Overhead Barbell Press", "shoulders", 110, 3, 12),
		Exercise("Dumbbell Lateral Raise", "shoulders", 90, 3, 12),
		Exercise("Seated Dumbbell Press", "shoulders", 100, 3, 12),
		Exercise("Front Dumbbell Raise", "shoulders", 90, 3, 12),
		Exercise("Bent-Over Reverse Fly", "shoulders", 95, 3, 12),
		Exercise("Upright Row", "shoulders", 100, 3, 12),
		Exercise("Shoulder Press", "shoulders", 100, 3, 12),
		Exercise("Seated Bent-Over Rear Delt Raise", "shoulders", 90, 3, 12),
		Exercise("Shrugs", "shoulders", 110, 3, 12)
	};
	// legs
	advancedWorkouts[FitnessGoal_endurance]["legs"] = {
		Exercise("Squat", "legs", 140, 3, 12),
		Exercise("Deadlift", "legs", 150, 3, 12),
		Exercise("Leg Press", "legs", 130, 3, 12),
		Exercise("Lunges with Dumbbells", "legs", 120, 3, 12),
		Exercise("Leg Curl", "legs", 110, 3, 12),
		Exercise("Calf Raises", "legs", 100, 3, 12),
		Exercise("Leg Extension", "legs", 100, 3, 12),
		Exercise("Goblin Squat", "legs", 100, 3, 12),
		Exercise("Front Squat", "legs", 140, 3, 12),
		Exercise("Bulgarian Split Squat", "legs", 120, 3, 12),
		Exercise("Romanian Deadlift", "legs", 150, 3, 12)
	};
	// back
	advancedWorkouts[FitnessGoal_endurance]["back"] = {
		Exercise("Traditional Pull - Up", "back", 120, 3, 12),
		Exercise("Close Grip Pull-Up", "back", 120, 3, 12),
		Exercise("Wide Grip Pull-Up", "back", 120, 3, 12),
		Exercise("Traditional Chin-Up", "back", 120, 3, 12),
		Exercise("Close Grip Chin Chin-Up", "back", 120, 3, 12),
		Exercise("Wide Grip Chin Chin-Up", "back", 120, 3, 12),
		Exercise("Bent-Over Barbell Row", "back", 130, 3, 12),
		Exercise("Deadlift", "back", 150, 3, 12),
		Exercise("Lat Pulldown", "back", 120, 3, 12),
		Exercise("Seated Cable Row", "back", 110, 3, 12),
		Exercise("T-Bar Row", "back", 125, 3, 12),
		Exercise("Weighted Pull-Up", "back", 130, 3, 12),
		Exercise("Weighted Close Grip Pull-Up", "back", 130, 3, 12),
		Exercise("Weighted Wide Grip Pull-Up", "back", 130, 3, 12),
		Exercise("Weighted Chin-Up", "back", 130, 3, 12),
		Exercise("Weighted Close Grip Chin Chin-Up", "back", 130, 3, 12),
		Exercise("Weighted Wide Grip Chin Chin-Up", "back", 130, 3, 12),
		Exercise("Single-Arm Dumbbell Row", "back", 120, 3, 12)
	};
	// abs
	advancedWorkouts[FitnessGoal_endurance]["abs"] = {
		Exercise("Hanging Leg Raise", "abs", 90, 3, 12),
		Exercise("Cable Crunch", "abs", 80, 3, 12),
		Exercise("Ab Roller", "abs", 80, 3, 12),
		Exercise("Reverse Crunch", "abs", 70, 3, 12),
		Exercise("Crunches", "abs", 60, 3, 12),
		Exercise("Russian Twist", "abs", 70, 3, 12),
		Exercise("Bicycle Crunches", "abs", 80, 3, 12),
		Exercise("Sit-ups", "abs", 70, 3, 12),
		Exercise("Weighted Plank (60 seconds)", "abs", 100, 3, 12),
		Exercise("Dragon Flag", "abs", 110, 3, 12)
	};

}

// Function to get exercises based on fitness goal, strength level, and muscle group
vector<Exercise> Workout::getExercises(const string& fitnessGoal, const string& strengthLevel, const string& muscleGroup) {
	vector<Exercise> exercisesList;

	// finds exercises for beginner
	if (strengthLevel == StrengthLevel_beginner) {
		if (beginnerWorkouts[fitnessGoal].find(muscleGroup) != beginnerWorkouts[fitnessGoal].end()) {
			exercisesList = beginnerWorkouts[fitnessGoal][muscleGroup];
		}
	}
	// finds exercises for intermediate
	else if (strengthLevel == StrengthLevel_intermediate) {
		if (intermediateWorkouts[fitnessGoal].find(muscleGroup) != intermediateWorkouts[fitnessGoal].end()) {
			exercisesList = intermediateWorkouts[fitnessGoal][muscleGroup];
		}
	}
	// finds exercises for advanced
	else if (strengthLevel == StrengthLevel_advanced) {
		if (advancedWorkouts[fitnessGoal].find(muscleGroup) != advancedWorkouts[fitnessGoal].end()) {
			exercisesList = advancedWorkouts[fitnessGoal][muscleGroup];
		}
	}
	return exercisesList;
}

// select and add exercises to queue based on user fitness goal, strength level, and muscle group
void Workout::selectAndQueueExercises(const string& fitnessGoal, const string& strengthLevel, const string& muscleGroup) {
	vector<Exercise> availableExercises = getExercises(fitnessGoal, strengthLevel, muscleGroup);

	int choice = 0;
	while (true) {
		// display available exercises
		cout << "Available exercises for \033[30;101m" << muscleGroup << "\033[0m:\n" << endl;
		for (size_t i = 0; i < availableExercises.size(); ++i) {
			cout << i + 1 << ". " << availableExercises[i].name << endl;
		}
		cout << availableExercises.size() + 1 << ". \033[31mFinish selection\033[0m" << endl;

		// user selects an exercise
		cout << "\033[33mSelect an exercise (enter the number):\033[0m ";
		cin >> choice;

		// add selected exercise to workout routine
		if (choice > 0 && choice <= availableExercises.size()) {
			WorkoutRoutine routine;
			routine.exercises.push_back(availableExercises[choice - 1]);

			addGymActivityToQueue(routine);
			cout << "\n\033[32m>>> " << availableExercises[choice - 1].name << " was added to your workout.\033[0m" << endl;

			WaitAndClear1();
		}

		// break if user finish selection
		else if (choice == availableExercises.size() + 1) {
			break;
		}
		else {
			cout << "\33[31mInvalid choice, please try again.\33[0m" << endl;
			WaitAndClear3();
		}
	}
}
// Function to add a workout routine to the queue
void Workout::addGymActivityToQueue(const WorkoutRoutine& workout) {
	WorkoutQueue.push(workout);
}

void Workout::WaitAndClear3()
{
	Sleep(3000);
	system("cls");
}

void Workout::WaitAndClear1()
{
	Sleep(1000);
	system("cls");
}

// execute the queue
void Workout::executeWorkoutQueue() {
	// check if the queue is empty
	if (WorkoutQueue.empty()) {
		cout << "\33[31mNo Workouts available.\33[0m" << endl;
		WaitAndClear3();
		return;
	}
	else {
		cout << "\33[33mUpcoming Exercises: \33[0m" << endl;
		queue<WorkoutRoutine> temporayQueue = WorkoutQueue;
		int count = 1;
		// display the upcoming exercises
		while (!temporayQueue.empty()) {
			for (const Exercise& ex : temporayQueue.front().exercises) {
				cout << count << "- " << ex.name << endl;
				count++;
			}

			temporayQueue.pop();
		}

		// execution each exercise in the queue
		while (!WorkoutQueue.empty()) {
			WorkoutRoutine currentWorkout = WorkoutQueue.front();

			for (const Exercise& ex : currentWorkout.exercises) {
				cout << "\n\33[33mNow Performing:\33[0m\n--> \033[30;101m" << ex.name << "\033[0m"
					<< "\n   \33[33m-Sets: \33[0m" << ex.sets
					<< "\n   \33[33m-Reps: \33[0m" << ex.reps
					<< "\n   \33[32m(targeted muscle: " << ex.muscleGroup << ")\33[0m"
					<< "\n>>> Press 0 to complete this exercise: ";

				int key;
				cin >> key;
				WorkoutQueue.pop();
			}
		}
		cout << "\n\33[32mLightWeight Baby!\33[0m" << endl;
		cout << "\n\33[32mAll Exercises Completed!\33[0m" << endl;
		WaitAndClear3();
	}
}

// calculate calories for walking, running, cycling and swimming
double Workout::calculateCalories(double weight, double duration, double speed = 0) {
	return weight * duration * 0.0175 * (speed + 1);
}

// update calorie intake for walking, running, cycling and swimming
void Workout::updateCalorieIntake_NonGym(User& U, Nutrition& N, int duration, double speed) {
	double caloriesBurned = 0.0;

	caloriesBurned = calculateCalories(U.getWeight(), duration, speed);
	N.SetBurnedCalories(caloriesBurned);
}

// calculate total calories burned for all gym exercises in the queue
double Workout::calculateTotalCaloriesBurned_Gym() {
	double totalCalories = 0;

	queue<WorkoutRoutine> temporayQueue1 = WorkoutQueue;
	while (!temporayQueue1.empty()) {
		WorkoutRoutine currentWorkout = temporayQueue1.front();
		for (const Exercise& ex : currentWorkout.exercises) {
			totalCalories += ex.caloriesBurn * ex.sets;
		}
		temporayQueue1.pop();
	}
	return totalCalories;
}