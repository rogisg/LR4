//задача 6
#include <vector>
#include <string>
#include <iostream>
using namespace std;

string replace(const string &str, const string &old, const string &new_string)
{
    string f90 = str;
    string f10 = old;
    string f80 = new_string;
    vector<int> vec = {};
    while (f90.find(f10) != string::npos)
    {
        vec.push_back(f90.find(f10));
        f90.erase(f90.find(f10), f10.size());
    }
    for (int i = 0; i < vec.size(); ++i)
    {
        f90.insert(vec[i], f80);
    }
    return f90;
};

int main()
{
    string f90 = "asdaafsag";
    cout << replace(f90, "a", "!");
}
