#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>
using namespace std;

void displayMenu() {
    cout << "\n==== Advanced Calculator Application ====" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Modulus" << endl;
    cout << "6. Power" << endl;
    cout << "7. Square Root" << endl;
    cout << "8. Exit" << endl;
    cout << "Choose an operation (1-8): ";
}
int main() {
    int choice;
    do {
        displayMenu();
        cin >> choice;
        // Logic to be implemented later
    } while (choice != 8);
    return 0;
}

int main() {
    int choice;
    do {
        displayMenu();
        while (!(cin >> choice)) {
            cout << "Invalid input! Please enter a number between 1 and 8: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        // Logic to be implemented later
    } while (choice != 8);
    return 0;
}
if (choice == 1) {
    double num1, num2, result;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    result = num1 + num2;
    cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
}
if (choice == 2) {
    double num1, num2, result;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    result = num1 - num2;
    cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
}
if (choice == 3) {
    double num1, num2, result;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    result = num1 * num2;
    cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
}
  else if (choice == 3) {
            double num1, num2, result;
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 * num2;
            cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
  }
  else if (choice == 4) {
            double num1, num2, result;
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << num1 << " / " << num2 << " = " << result <<
            }
  }