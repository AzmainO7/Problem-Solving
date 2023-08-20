#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, t, r;
    cin >> s >> t;

    for (int i = s.size() - 1 ; i >= 0; i--)
    {
        r += s[i];
    }

    if (r == t)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}