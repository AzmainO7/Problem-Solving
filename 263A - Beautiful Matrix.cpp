#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int row = 5, col = 5;
    vector<vector<int>> matrix(row, vector<int>(col));

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int n;
            cin >> n;
            matrix[i][j] = n;
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] == 1)
            {
                int moves = abs(i - row / 2) + abs(j - col / 2);
                cout << moves << endl;
                break;
            }
        }
    }

    return 0;
}