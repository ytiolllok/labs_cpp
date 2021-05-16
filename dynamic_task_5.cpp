#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> del(vector<vector<int>> m, int a, int b)
{
m.erase(m.begin() + a);
for (int i = 0; i < m.size(); i++) {
    m[i].erase(m[i].begin() + b);
}
return m;
}

int count_deter(vector<vector<int>> m)
{
if (m.size() == 2) {
    return m[0][0] * m[1][1] - m[0][1] * m[1][0];
}
int sum = 0;
for (int i = 0; i < m.size(); i++) {
    sum += m[0][i]*count_deter(del(m, 0, i)) * ((i % 2) ? -1 : 1);
}
return sum;
}

int main()
{
int n;
cin >> n;
vector<vector<int>> m(n, vector<int>(n));
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        cin >> m[i][j];
    }
}
cout << count_deter(m);
return 0;
}
