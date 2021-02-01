/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <iostream>
#include <math.h>
using namespace std;

char32_t a = 1;
char32_t b = 2;
char32_t c = 0;
unsigned long long summ = 0;
int main()
{
    while(b<=4000000){
        if (b % 2 == 0){
            summ = summ + b;
          }
        c = b;
        b = b + a;
        a = c;
    }
    cout << summ;
    return(0);
    
}
