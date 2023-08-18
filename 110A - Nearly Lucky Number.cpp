#include <iostream>

using namespace std;

int main()
{
    long long int n, count = 0;
    cin >> n;

    while (n != 0)
    {
        int k = n % 10;
        if (k == 4 || k == 7)
            count++;

        n /= 10;
    }

    if (count == 4 || count == 7)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}