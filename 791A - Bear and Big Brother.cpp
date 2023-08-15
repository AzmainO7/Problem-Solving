#include <iostream>

using namespace std;

int main()
{
    int li, bob, year = 0;
    cin >> li >> bob;

    while(li <= bob)
    {
        li *= 3;
        bob *= 2;
        year++;
    }

    cout << year;

    return 0;
}