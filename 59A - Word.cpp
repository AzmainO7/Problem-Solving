#include <iostream>
#include <cctype>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    int lower = 0, upper = 0;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (islower(s[i]))
            lower++;
        else if (isupper(s[i]))
            upper++;
    }

    if (lower >= upper)
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    else
        transform(s.begin(), s.end(), s.begin(), ::toupper);

    cout << s;

    return 0;
}
