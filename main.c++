#include <iostream>
#include <string>

using namespace std;

int main(){

    string name;
    cout << "Enter your name: ";
    cin >> name;

    cout << "Welcome in this code \n";

    int first;
    cout << "Enter the Amount: ";
    cin >> first;

    int second;
    cout << "Enter the second Amount: ";
    cin >> second;

    char op;
    cout << "Enter your operator: \n";
    cout << " [+] Additon \n [-] Subtraction \n [*] Multiply \n [/] divide: \n";
    cout << "Your operator: ";
    cin >> op;

    if (op == '+') {
        cout << "Result: " << first + second << " " << name << " is your answer" << endl;
    }

    else if (op == '-') {
        cout << "Result: " << first - second << " " << name << " is your answer" << endl;
    }

    else if (op == '*') {
        cout << "Result: " << first * second << " " << name << " is your answer" << endl;
    }

    else if (op == '/') {
        if (second == 0) {
            cout << "Error can't divide by 0" << endl;
        }
        else {
            cout << "Result: " << first / second << " " << name << " is your answer" << endl;
        }
    }
    return 0;

}
