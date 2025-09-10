/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //задача 31
    
    double a, b;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    double c = sqrt(a * a + b * b);
    cout << "Гіпотенуза = " << c << endl;
    
    return 0;
}

