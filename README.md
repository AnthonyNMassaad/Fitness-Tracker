# Fitness Tracker 💪📊

## Overview
The Fitness Tracker is a simple yet powerful application designed to help users track their fitness activities, monitor their progress, and maintain a balanced lifestyle. With features to track water intake, calories, protein intake, and sleep. A colleague and I collaborated together on this project for our Data Structures final year project, utilizing a variety of data structures including maps, queues, and stacks.

## How It Works
1. **User Profile Setup:**
   - Users input essential information such as name, age, gender, weight, and height.
   - The system handles incorrect input, correcting capitalization in gender inputs and requesting valid entries.
   
2. **Nutrition Tracking:**
   - **BMI Calculation:** Utilizes user details to calculate BMI.
   - **Daily Intake:** Calculates daily caloric, protein, and water intake based on user information.
   - **Predefined Meals:** Access a map of preloaded meals with respective nutritional values (calories and proteins per 100g).
   - **Custom Meals:** Add personalized meals to the map.
   - **Meal Planning:** Strategize daily intake with meal plans. Update intake as meals are consumed.
   - **Sleep Schedule:** Advises required sleep hours based on previous night's sleep duration.
   - **Display:** Shows user information and created meal plans.
   - **New Day Reset:** Function to reset all nutrition information for a new day.

3. **Workout Tracking:**
   - **Predefined Workouts:** Choose from a variety of tailored workouts.
   - **Custom Workouts:** Create workout plans from predefined options.
   - **Calorie Burning:** Updates daily calorie intake based on activity distance and intensity for cardio exercises (walking, running, swimming) and post-workout execution for planned workouts.
   - **Display:** Shows the workout plan. Indicates if the plan is empty.

## Time Complexity

### a) Algorithm for Calculating BMI: 
   - **Time Complexity:** O(1)

### b) Algorithm for keeping track of daily calorie and protein intake: 
   - **Time Complexity:** O(n) where n is the size of the map.
   
**Description of the algorithm:**
1. Let the User input what he ate:
   - From the system meals (map), the only thing he needs to input is the name of the meal. (O(1))
   - From the Meal Plan (queue), the first element of the queue is searched in the map, (O(n) since in the worst case we search the map till the last element)
2. The daily Calorie and Protein intake attributes are then updated using the calorie and protein of the corresponding food from the vector inside the map. (O(1))

### c) Algorithm for Suggesting a Workout Plan: 
   - **Time Complexity:** O(n) where n is the size of the workout routine.

**Description of the algorithm:**
1. Input the user's strength level and fitness goal. (O(1))
2. Based on the user's input, select an appropriate predefined workout routine from the map of workout routines. (O(1))
3. For each exercise in the selected workout routine:
   - Retrieve the targeted muscle group and estimate calorie burn for the exercise. (O(1))
   - Add the exercise to the workout plan queue. (O(1)) (But since this is done for every element in the workout routine then the time complexity is O(N))
4. Display the workout plan with exercises, muscle groups, and estimated calorie burns. (O(1))

