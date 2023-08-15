#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    string s;

    while (n != 0)
    {
        char c;
        cin >> c;
        s += c;
        n--;
    }

    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            s.erase(i, 1);
            i--;
            count++;
        }
    }

    // cout << s << endl;
    cout << count;

    return 0;
}