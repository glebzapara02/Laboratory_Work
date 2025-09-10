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
    //задача 28

    double V1, V2, S, T;
    cout << "V1 = ";
    cin >> V1;
    cout << "V2 = ";
    cin >> V2;
    cout << "S = ";
    cin >> S;
    cout << "T = ";
    cin >> T;
    
    double D = fabs(S - (V1 + V2) * T);
    cout << "Відстань через T годин = " << D << endl;
    
    return 0;
}


