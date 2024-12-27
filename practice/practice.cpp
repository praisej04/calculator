// practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
// This application performs various calculations on two numbers

#include <iostream>
using namespace std;

int SelectionMenu();
int Addition(int, int);
int Subtraction(int, int);
int Product(int, int);
int Division(int, int);

int main()
{
    int num1, num2;
    int option;
    int sum, product, division, subtraction;
    string repeat;

    cout << "This application performs different calculations on two numbers \n\n";

    do {
        cout << " Enter the first number \n";
        cin >> num1; //display the first number

        cout << "Enter the second number \n";
        cin >> num2; //display the second number

        //display the calculation menu
        option = SelectionMenu();

        cout << "You selected: " << option << endl << endl;

        //get the value from the calculation functions
        sum = Addition(num1, num2);
        subtraction = Subtraction(num1, num2);
        product = Product(num1, num2);
        division = Division(num1, num2);

        //Perform selected calculation
        switch (option) {
        case 1:
            cout << "The addition of " << num1 << " and " << num2 << " is: " << sum << endl << endl;
            break;
        case 2: 
            cout << "The subtraction of " << num1 << " and " << num2 << " is: " << subtraction << endl << endl;
            break;
        case 3:
            cout << "The product of " << num1 << " and " << num2 << " is: " << product << endl << endl;
            break;
        case 4:
            cout << "The division of " << num1 << " and " << num2 << " is: " << division << endl<< endl;
            break;
        default:
            cout << "The option you selected is invalid"<< endl << endl;
        }

        cout << "Do you want to perfom another calculation? Enter 'Y' for yes  or 'N' for no \n\n";
        cin >> repeat;
    } while (repeat == "y" || repeat == "Y");
    
return 0;
} 

int SelectionMenu()
{
    int option;
    cout << "Select Menu: \n";
    cout << "1. Addition \n"; 
    cout << "2. Subtraction \n";
    cout << "3. Multiplication \n";
    cout << "4. Division \n";

    cout << "Selecet an option from the menu (between 1-4) \n";
    cin >> option;

    return option;
}

int Addition(int num1, int num2)
{
    int sum;
    
    sum = num1 + num2;

    return sum;
}

int Subtraction(int num1, int num2)
{
    int subtraction;

    subtraction = num1 - num2;

    return subtraction;
}

int Product(int num1, int num2)
{
    int product;

    product = num1 * num2;

    return product;
}

int Division(int num1, int num2)
{
    int division;

    division = num1 / num2;

    return division;
}