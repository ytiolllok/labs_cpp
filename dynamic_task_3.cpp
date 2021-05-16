
#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
int n;
cin>>n;
string string_;
vector<int> v;
getline(cin, string_);
getline(cin, string_);
stringstream string_stream(string_);
for (int i = 0; !string_stream.eof(); i++)
    {
    int tmp;
    string_stream >> tmp;
    v.push_back(tmp);
    }
sort(v.begin(), v.end());
int x=0;
for (int i = 1; i < v.size(); i++)
    {
    if(v[i] - v[i-1]<=n)x = v[i];
        else x+=n;
    }
cout<<x;
return 0;
}
