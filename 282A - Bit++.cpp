#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, x = 0;
    cin >> n;

    while (n != 0)
    {
        string stmt;
        cin >> stmt;
        if (stmt.find("++") != string::npos)
        {
            x++;
        }
        else if (stmt.find("--") != string::npos)
        {
            x--;
        }
        n--;
    }

    cout << x;

    return 0;
}