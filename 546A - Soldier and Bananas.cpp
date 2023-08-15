#include <iostream>

using namespace std;

int main()
{
    int cost, ini, n, borrow = 0;
    cin >> cost >> ini >> n;

    for (int i = 1; i <= n; i++)
    {
        // cout << i * cost << endl;
        if (i * cost <= ini)
        {
            ini -= i * cost;
            // cout << "money left: " << ini << endl;
        }
        else
        {
            borrow += i * cost;
        }
    }

    if (borrow != 0)
    {
        borrow -= ini;
    }
    cout << borrow;

    return 0;
}