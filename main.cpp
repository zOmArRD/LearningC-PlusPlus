#include <iostream>
#include <string>

using namespace std;

struct user {
    string name, age, country;
};

user createUser();

void doOptions(user user) {
    int options;
    cout << "what would you like to do?" << endl;
    cout << "1. Change name" << endl;
    cout << "2. Change age" << endl;
    cout << "3. Change country" << endl;
    cout << "4. Exit" << endl;
    cin >> options;
    switch (options) {
        case 1:
            cout << "Enter new name: ";
            cin >> user.name;
            doOptions(user);
            break;
        case 2:
            cout << "Enter new age: ";
            cin >> user.age;
            doOptions(user);
            break;
        case 3:
            cout << "Enter new country: ";
            cin >> user.country;
            doOptions(user);
            break;
        case 4:
            cout << "Exiting..." << endl;
            break;
    }
}

int main() {
    user user = createUser();
    cout << "Welcome, " << user.name << endl;
    doOptions(user);
    return 0;
}

user createUser() {
    user u;
    cout << "Enter name: ";
    cin >> u.name;
    cout << "Enter age: ";
    cin >> u.age;
    cout << "Enter country: ";
    cin >> u.country;
    return u;
}