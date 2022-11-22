#include <iostream>
#include <string>

using namespace std;

struct user {
    string name, age, country;
};

user createUser();

int main() {
    user user = createUser();
    cout << "User created: " << user.name << ", " << user.age << ", " << user.country << endl;
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