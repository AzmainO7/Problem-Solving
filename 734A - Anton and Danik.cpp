#include <iostream>

using namespace std;

int main()
{
    int n, anton = 0, danik = 0;
    string s;
    cin >> n >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A')
            anton++;
        else if (s[i] == 'D')
            danik++;
    }

    if (anton > danik)
        cout << "Anton";
    else if (danik > anton)
        cout << "Danik";
    else
        cout << "Friendship";

    return 0;
}