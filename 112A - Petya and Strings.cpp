#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;

int main()
{
    string st1, st2;
    cin >> st1 >> st2;

    transform(st1.begin(), st1.end(), st1.begin(), ::tolower);
    transform(st2.begin(), st2.end(), st2.begin(), ::tolower);

    if (st1 > st2)
    {
        cout << 1;
    }
    else if (st1 < st2)
    {
        cout << -1;
    }
    else if (st1 == st2)
    {
        cout << 0;
    }

    return 0;
}