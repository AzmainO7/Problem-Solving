#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(2));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            int x;
            cin >> x;
            matrix[i][j] = x;
        }
    }

    int in_tram = 0, min_cap = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (j == 0)
                in_tram -= matrix[i][j];
            else if (j == 1)
                in_tram += matrix[i][j];
            min_cap = ::max(min_cap, in_tram);
        }
    }

    cout << min_cap;

    return 0;
}