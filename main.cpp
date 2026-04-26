#include "YourLibrary.h"
using namespace std;

int main() {

   
    FitnessActivity a1, a2, a3;

    cout << "\n--- Enter Activity 1 (User Input) ---\n";
    a1.setActivity();  
    cout << "\n--- Activity 2 (Partial Input) ---\n";
    a2.setActivity("Running", 30);   

    cout << "\n--- Activity 3 (Full Input) ---\n";
    a3.setActivity("Cycling", 45, 300, 10); 

   
    cout << "\n--- Activity Details ---\n";
    cout << a1;
    cout << a2;
    cout << a3;

   

    FitnessActivity total = a2 + a3;
    cout << "\n--- Combined Activity ---\n";
    cout << total;

    FitnessActivity diff = a3 - a2;
    cout << "\n--- Difference Activity ---\n";
    cout << diff;

    FitnessActivity weekly = a2 * 7;
    cout << "\n--- Weekly Activity (Running x7 days) ---\n";
    cout << weekly;

   
    if (a2 < a3)
        cout << "\nCycling burns more calories than Running\n";
    else
        cout << "\nRunning burns more calories\n";

   
    if (a2 == a3)
        cout << "Activities are equal\n";
    else
        cout << "Activities are NOT equal\n";

   
    cout << "\n--- Calorie Analysis ---\n";
    cout << "Basic Calories: " << a2.calculateCalories() << endl;
    cout << "With Weight (60kg): " << a2.calculateCalories(60) << endl;
    cout << "With Weight & Intensity: " << a2.calculateCalories(60, 1.2) << endl;

    return 0;
}
