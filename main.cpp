#include <iostream>
#include <string>

using namespace std;

int main() {
    string full_name;
    int age;

    cout << "Type your full name: " << endl;
    getline(cin, full_name);

    cout << "Type your age: " << endl;
    cin >> age;

    bool has_access = false;

    if (age >= 18 || full_name == "Omar Sena") {
        has_access = true;
    }

    if (!has_access) {
        cout << "Access denied - " << full_name << endl;
        return 0;
    } else {
        cout << "Access granted - " << full_name << endl;
    }

    cout << "Congratulations! You are now a member of our club!" << endl;

    int day;
    cout << "What is the current day of the week?" << endl;
    cin >> day;

    string day_of_week;
    switch (day) {
        case 1:
            day_of_week = "Monday";
            break;
        case 2:
            day_of_week = "Tuesday";
            break;
        case 3:
            day_of_week = "Wednesday";
            break;
        case 4:
            day_of_week = "Thursday";
            break;
        case 5:
            day_of_week = "Friday";
            break;
        case 6:
            day_of_week = "Saturday";
            break;
        case 7:
            day_of_week = "Sunday";
            break;
        default:
            cout << "Invalid day" << endl;
            return 0;
    }
    cout << "Today is " << day_of_week << endl;

    cout << "Looping with for" << endl;
    for (int i = 0; i < 50; ++i) {
        cout << i;
    }

    cout << endl << "Finished" << endl;

    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cout << "Cars: " << endl;
    for (auto & car : cars) {
        cout << car << endl;
    }

    cout << "What is your favorite car?" << endl;
    string favorite_car;
    cin >> favorite_car;

    cout << "Your favorite car is: " << favorite_car << endl;

}