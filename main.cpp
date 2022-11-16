#include <iostream>
#include <string>

using namespace std;

int main() {
    string full_name;
    cout << "Type your full name: " << endl;
    getline(cin, full_name);
    cout << "Your name is: " << full_name << endl;
    return 0;
}