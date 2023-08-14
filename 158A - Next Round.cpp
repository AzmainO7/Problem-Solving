#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int total, k, count = 0;
    cin >> total >> k;

    vector<int> scores;

    for (int i = 0; i < total; i++)
    {
        int score;
        cin >> score;
        scores.push_back(score);
    }

    for (int i = 0; i < scores.size(); i++)
    {
        // cout << scores[i] << " " << scores[k-1] << endl;
        if (scores[i] >= scores[k-1] && scores[i] > 0)
        {
            // cout << "Count + 1" << endl;
            count++;
        }
    }

    cout << count;

    return 0;
}