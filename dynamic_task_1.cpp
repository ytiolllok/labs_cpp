#include <iostream>
using namespace std;
int count_methods(int a)
{
int methods = 0;
if (a == 0) return 1;
if (a >= 1) methods += count_methods(a - 1);
if (a >= 2) methods += count_methods(a - 2);
if (a >= 3) methods += count_methods(a - 3);
return methods;
}

int main()
{
int n;
cin >> n;
cout << count_methods(n);
return 0;
}
