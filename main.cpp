#include <iostream>
#include <string>

using namespace std;

int main() {
    string firstName;
    string lastName;
    cout << "Enter your first name: ";
    cin >> firstName; // get user input from the keyboard
    return 0;
}

void stringLength() {
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.length();
}

void dataTypes() {
    int age = 16;
    string name = "Omar ";
    string last_name = "Alshammari";
    string full_name = name.append(last_name);
    char sex = 'M';
    bool isMarried = false;

    if (age != 16) {
        isMarried = true;
    }

    cout << "Name: " << full_name << endl;
    cout << "Age: " << age << endl;
    cout << "Sex:" << sex << endl;
    cout << "Married: " << (isMarried ? "Yes" : "No") << endl;
}