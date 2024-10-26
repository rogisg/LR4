//задача 8
#include <vector>
#include <string>
#include <iostream>
using namespace std;

string join(const vector<string> &vec, const string &sep)
{
    vector<string> victor = vec;
    string s = sep;
    string s1 = "";
    for (int i = 0; i < victor.size(); ++i)
    {
        s1 = s1 + victor[i] + s;
    }
    return s1;
};

int main()
{
    vector<string> s1 = {"lm10", "ls9", "n11"};
    cout << join(s1, " probel ");
}
