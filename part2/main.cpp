/* 
Caleb Hughes
COP_2334
VS Code

This program takes a single integer input as a stopping point for the number of times to say "Hello." It also 
matches the correct order with the correct suffix, such as "st", "rd", or "th"
*/

#include <iostream>

using namespace std;

int main()
{
    int stoppingPoint;
    int i = 1;
    cout << "C++ Ordinals " << endl;
    cout << "Please enter a stopping point: ";
    cin >> stoppingPoint;

    while (i <= stoppingPoint)
    {
      if(i % 10 == 1 && i % 100 != 11)
        cout << i << "st Hello" << endl;
      else if(i % 10 == 2 && i % 100 != 12) 
        cout << i << "nd Hello" << endl;
      else if(i % 10 == 3 && i % 100 != 13) 
        cout << i << "rd Hello" << endl;
      else
        cout << i << "th Hello" << endl;
        i++;
    }

    cout << "Goodbye!" << endl;
    return 0;
}