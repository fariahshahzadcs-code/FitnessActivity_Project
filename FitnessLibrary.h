#ifndef FITNESS_ACTIVITY_H
#define FITNESS_ACTIVITY_H

#include <iostream>
#include <string>
using namespace std;

class FitnessActivity {
private:
    string activityName;
    double duration;   
    double calories;
    double distance;   

public:

   
    FitnessActivity() {
        activityName = "Unknown";
        duration = 0;
        calories = 0;
        distance = 0;
    }

   
    FitnessActivity(string name, double dur, double cal, double dist) {
        activityName = name;
        duration = dur;
        calories = cal;
        distance = dist;
    }

   
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

    
    void setActivity(string name, double dur) {
        activityName = name;
        duration = dur;

       
        calories = dur * 5;
        distance = dur * 0.1;
    }

    
    void setActivity(string name, double dur, double cal, double dist) {
        activityName = name;
        duration = dur;
        calories = cal;
        distance = dist;
    }

    
    double calculateCalories() {
        return duration * 5;
    }

    double calculateCalories(double weight) {
        return duration * weight * 0.03;
    }

    double calculateCalories(double weight, double intensity) {
        return duration * weight * intensity * 0.05;
    }

   
    FitnessActivity operator+(const FitnessActivity &obj) {
        FitnessActivity temp;
        temp.activityName = "Combined";
        temp.duration = duration + obj.duration;
        temp.calories = calories + obj.calories;
        temp.distance = distance + obj.distance;
        return temp;
    }

    
    FitnessActivity operator-(const FitnessActivity &obj) {
        FitnessActivity temp;
        temp.activityName = "Difference";
        temp.duration = duration - obj.duration;
        temp.calories = calories - obj.calories;
        temp.distance = distance - obj.distance;
        return temp;
    }

    
    FitnessActivity operator*(int days) {
        FitnessActivity temp;
        temp.activityName = activityName + " (Repeated)";
        temp.duration = duration * days;
        temp.calories = calories * days;
        temp.distance = distance * days;
        return temp;
    }

   
    bool operator<(const FitnessActivity &obj) {
        return calories < obj.calories;
    }

    
    bool operator==(const FitnessActivity &obj) {
        return (calories == obj.calories && duration == obj.duration);
    }

   
    friend ostream& operator<<(ostream &out, const FitnessActivity &obj) {
        out << "\nActivity: " << obj.activityName << endl;
        out << "Duration: " << obj.duration << " min" << endl;
        out << "Calories: " << obj.calories << endl;
        out << "Distance: " << obj.distance << " km" << endl;
        return out;
    }
};

#endif
