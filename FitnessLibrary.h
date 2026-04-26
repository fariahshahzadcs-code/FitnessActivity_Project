#ifndef FITNESS_ACTIVITY_H
#define FITNESS_ACTIVITY_H

#include <iostream>
#include <string>
using namespace std;

class FitnessActivity {
private:
    string activityName;
    double duration;   // minutes
    double calories;
    double distance;   // km

public:

    // 🔹 Default Constructor
    FitnessActivity() {
        activityName = "Unknown";
        duration = 0;
        calories = 0;
        distance = 0;
    }

    // 🔹 Parameterized Constructor
    FitnessActivity(string name, double dur, double cal, double dist) {
        activityName = name;
        duration = dur;
        calories = cal;
        distance = dist;
    }

    // 🔁 FUNCTION OVERLOADING

    // 1. Default input
    void setActivity() {
        cout << "Enter Activity Name: ";
        cin >> activityName;

        cout << "Enter Duration (minutes): ";
        cin >> duration;

        cout << "Enter Calories Burned: ";
        cin >> calories;

        cout << "Enter Distance (km): ";
        cin >> distance;
    }

    // 2. Partial input
    void setActivity(string name, double dur) {
        activityName = name;
        duration = dur;

        // auto calculation
        calories = dur * 5;
        distance = dur * 0.1;
    }

    // 3. Full input
    void setActivity(string name, double dur, double cal, double dist) {
        activityName = name;
        duration = dur;
        calories = cal;
        distance = dist;
    }

    // 🔁 EXTRA FUNCTION OVERLOADING (Analysis)

    double calculateCalories() {
        return duration * 5;
    }

    double calculateCalories(double weight) {
        return duration * weight * 0.03;
    }

    double calculateCalories(double weight, double intensity) {
        return duration * weight * intensity * 0.05;
    }

    // ➕ OPERATOR OVERLOADING

    // 1. Addition
    FitnessActivity operator+(const FitnessActivity &obj) {
        FitnessActivity temp;
        temp.activityName = "Combined";
        temp.duration = duration + obj.duration;
        temp.calories = calories + obj.calories;
        temp.distance = distance + obj.distance;
        return temp;
    }

    // 2. Subtraction
    FitnessActivity operator-(const FitnessActivity &obj) {
        FitnessActivity temp;
        temp.activityName = "Difference";
        temp.duration = duration - obj.duration;
        temp.calories = calories - obj.calories;
        temp.distance = distance - obj.distance;
        return temp;
    }

    // 3. Multiplication (repeat activity)
    FitnessActivity operator*(int days) {
        FitnessActivity temp;
        temp.activityName = activityName + " (Repeated)";
        temp.duration = duration * days;
        temp.calories = calories * days;
        temp.distance = distance * days;
        return temp;
    }

    // 4. Comparison
    bool operator<(const FitnessActivity &obj) {
        return calories < obj.calories;
    }

    // 5. Equality
    bool operator==(const FitnessActivity &obj) {
        return (calories == obj.calories && duration == obj.duration);
    }

    // 6. Output Operator
    friend ostream& operator<<(ostream &out, const FitnessActivity &obj) {
        out << "\nActivity: " << obj.activityName << endl;
        out << "Duration: " << obj.duration << " min" << endl;
        out << "Calories: " << obj.calories << endl;
        out << "Distance: " << obj.distance << " km" << endl;
        return out;
    }
};

#endif