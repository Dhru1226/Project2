/*
Title: Project 2 
Filename: Project2
Programer: Dhrumi Mistry
Date: 10/10/2024
Requiremnts:
Create a Calculator Program that allows the user to choose 1 of 5 arithmetic operations:
1. Add, 2. Subtract, 3. Multiplication, 4. Division, 5. Power
The user should enter the number of the operation and then be prompted for the necessary input and display the result.
*/

#include <iostream>
using namespace std;
#include <cmath> 


int main()
{
    int choice;
    double num1, num2, results;

    //Display
    cout << "Calculator Program\n";
    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Power\n";
    cout << "Enter the number of the operation you want to use: ";
    cin >> choice;

    //Get the input
    switch (choice) {
    case 1:
        cout << "Enter the numbers to add: ";
        cin >> num1 >> num2;
        result = num1 + num2;
        cout << "result: " << result << endl;
        break;
        switch (choice)
    case 2:
        cout << "Enter the numbers to subtract: ";
        cin >> num1 >> num2;
        result = num1 - num2;
        cout << "result: " << result << endl;
        break;
        switch (choice)
    case 3:
        cout << "Enter the numbers to multiply: ";
        cin >> num1 >> num2;
        result = num1 * num2;
        cout << "result: " << result << endl;
        break;
        switch (choice)
    case 4:
        cout << "Enter the numbers to divide: ";
        cin >> num1 >> num2;
        if (num2 != 0) {
            result = num1 / num2;
            cout << "result: " << result << endl;
        }
        else {
            cout << "Error: Divison by zero is not allowed. \n";
        }
        break;
        switch (choice)
    case 5:
        cout << "Enter the base and exponent: ";
        cin >> num1 >> num2;
        result = pow(num1, num2);
        cout << "result: " << result << endl;
        break;
    default:
        cout << "Invailed choice. Please run the program again and select a valid operation.\n";

    }

        return 0;


}

