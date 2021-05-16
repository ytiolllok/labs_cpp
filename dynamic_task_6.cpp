#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
string string_;
vector<vector<int>> v;
for (int i = 0; getline(cin, string_); i++)
{
    stringstream string_stream(string_);
    v.resize(v.size() + 1);
    while (!string_stream.eof()) {
        char t;
        string_stream >> t;
        if (!string_stream.eof())
            v[i].push_back(t - '0');
    }
}
int ans = 0;
for (int i = 1; i <= v.size(); i++)
    {
    for (int j = 1; j <= v[0].size(); j++)
    {
        for (int k = 0; k <= v.size() - i; k++)
        {
            for (int l = 0; l <= v[0].size() - j; l++)
            {
                int s = 1;
                for (int m = k; m < k + i; m++)
                {
                    for (int n = l; n < l + j; n++)
                    {
                        s *= v[m][n];
                    }
                }
                if (s == 1) ans++;
            }
        }
    }
}
cout << ans;
return 0;
}
