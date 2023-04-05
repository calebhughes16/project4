/* 
Caleb Hughes
COP_2334
VS Code

This code takes in a number from the user and calculates the product, quotient, and two other calculations. The 
program stops running after the user inputs "-1" and outputs the number of times the user entered a number.

When using test value "0" the program defaults to the incorrect data type in the last two calculations
rounding down for int. Entering j causes an infinite loop. The quotient of zero is also NaN since its trying to
divide by zero. */

#include <iostream>

using namespace std;

int main()
{
    double product;
    double quotient;
    double input = 0.0;
    int counter = 0;

    while(true)
    {
        cout << "Enter a number: ";
        cin >> input;

        if(input != -1)
        {
            product = input * input;
            quotient = input / input;
            cout << "Product: " << product << endl;
            cout << "Quotient: " << quotient << endl;
            cout << "(n + 3) / 5: " << (input + 3) / 5 << endl;
            cout << "((n + 3) / 5) + ((n + 7) / 2): " << ((input + 3) / 5) + ((input + 7) / 2) << endl;
        }
        else if(input == -1)
        {
            cout << "You entered a number " << counter << " times" << endl;
            break;
        }
        else
        {
            cout << "Invalid input" << endl;
        }
        ++counter;
    }

    return 0;
}