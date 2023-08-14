#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, p, v, t, count_1 = 0, count_yes = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        vector<int> choice;
        cin >> p >> v >> t;
        choice.push_back(p);
        choice.push_back(v);
        choice.push_back(t);

        for (int i = 0; i < choice.size(); i++)
        {
            if (choice[i] == 1)
                count_1++;
        }
        if (count_1 >= 2)
            count_yes++;

        count_1 = 0;
    }

    cout << count_yes;

    return 0;
}