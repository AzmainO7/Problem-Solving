#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    string s;
    int count = 0;
    set<char> distinct;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
        distinct.insert(s[i]);

    if (distinct.size() % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

    return 0;
}