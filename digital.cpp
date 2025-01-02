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
            else {
                cout << "Error! Division by zero is not allowed." << endl;
            }
      else if (choice == 5) {
            int num1, num2, result;
            cout << "Enter two integers: ";
            cin >> num1 >> num2;
            if (num2 != 0) {
                result = num1 % num2;
                cout << "Result: " << num1 << " % " << num2 << " = " << result << endl;   
            }
      }
        else {
                cout << "Error! Modulus by zero is not allowed." << endl;
            }
        else if (choice == 6) {
            double base, exponent, result;
            cout << "Enter base and exponent: ";
            cin >> base >> exponent;
            result = pow(base, exponent);
            cout << "Result: " << base << " ^ " << exponent << " = " << result << endl;
        }
               else if (choice == 7) {
            double num, result;
            cout << "Enter a number: ";
            cin >> num;
            if (num >= 0) {
                result = sqrt(num);
                cout << "Result: Square root of " << num << " = " << result << endl;
            }
               } 
                else {
                cout << "Error! Negative number input for square root." << endl;
            }
            else if (choice == 8) {
            cout << "Exiting program. Goodbye!" << endl;
            }
            else {
            cout << "Invalid choice! Please choose a valid operation." << endl;
        }
         while (choice != 8);
         return 0;
