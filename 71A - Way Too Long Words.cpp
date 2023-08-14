#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n;
    string word;
    vector<string> words;
    cin >> n;

    if (n < 1 || n > 100)
    {
        cout << "invalid input" << endl;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> word;
        // cout << word.size() << endl;
        if (word.size() > 10)
        {
            word = word[0] + to_string(word.size() - 2) + word[word.size()-1];
        }
        words.push_back(word);
    }

    for (int i = 0; i < words.size(); i++)
    {
        cout << words[i] << endl;
    }

    return 0;
}