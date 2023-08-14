#include <iostream>

using namespace std;

int main()
{
    int w;
    bool even_divide = false;
    // cout << "Enter weight: ";
    cin >> w;

    if (w < 1 || w > 100)
    {
        cout << "invalid weight. Enter again: ";
        cin >> w;
    }

    for (int i = 1; i < w; i++)
    {
        int weight1, weight2;
        weight1 = i;
        weight2 = w - i;

        if (weight1 % 2 == 0 && weight2 % 2 == 0)
        {
            // cout << weight1 << " " << weight2 << endl;
            cout << "YES" << endl;
            even_divide = true;
            break;
        }
    }

    if (even_divide == false)
        cout << "NO" << endl;

    return 0;
}