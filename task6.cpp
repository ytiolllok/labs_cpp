/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <iostream>
#include <math.h>
using namespace std;

double a = 0;
double b = 0;
int main()
{
    cin >> a;
    for (int i = a; i > 0; i = i - 2){
        for (int k = 0; k < (a-i)/2; k++){
            cout << " ";
        }
        for (int k = 0; k < i; k++){
            cout << "*";
        }
        for (int k = 0; k < (a-i)/2; k++){
            cout << " ";
        }
        cout << "\n";
    }
    return(0);
}
