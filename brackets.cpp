#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector <char> brackets;
string bracket;
int main() {
    cin >> bracket;
    for (int i = 0; i < bracket.size(); ++i) {
        if (bracket[i] == '(' or bracket[i] == '{' or bracket[i] == '[' or bracket[i] == '<')
            brackets.push_back(bracket[i]);
        if (brackets.empty() and ((bracket[i] == ')') or (bracket[i] == '}') or (bracket[i] == ']') or (bracket[i] == '>'))) {
            cout <<"NO";
            return 0;
        }
        if ((bracket[i] == ')') and (!brackets.empty()) and (brackets.back() == '('))
            brackets.pop_back();
        if ((bracket[i] == '}') and (!brackets.empty()) and (brackets.back() == '{'))
            brackets.pop_back();
        if ((bracket[i] == ']') and (!brackets.empty()) and (brackets.back() ==  '['))
            brackets.pop_back();
        if ((bracket[i] == '>') and (!brackets.empty()) and (brackets.back() ==  '<'))
            brackets.pop_back();
    }
    if (brackets.empty()){
        cout <<"YES";
    }
    else{
        cout <<"NO";
    }
}
