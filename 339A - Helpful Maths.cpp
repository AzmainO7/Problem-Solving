#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string si, s;
    int op_count = 0;
    cin >> si;

    for (int i = 0; i < si.size(); i++)
    {
        if (isdigit(si[i]))
        {
            s += si[i];
        }
        else
        {
            op_count++;
        }
    }

    for (int i = 0; i < s.size() - 1; i++)
    {
        for (int j = 0; j < s.size() - i - 1; j++)
        {
            if (s[j] > s[j + 1])
            {
                int temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i];
        if (op_count != 0)
        {
            cout << "+";
            op_count--;
        }
    }

    return 0;
}