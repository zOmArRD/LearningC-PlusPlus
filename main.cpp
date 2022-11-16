#include <iostream>
#include <string>

using namespace std;

int main() {
    string firstName;
    string lastName;
    cout << "Enter your first name: " << endl;
    cin >> firstName; // get user input from the keyboard
    cout << "Enter your last name: " << endl;
    cin >> lastName; // get user input from the keyboard
    cout << "Your name is: " << firstName << " " << lastName << endl;
    return 0;
}