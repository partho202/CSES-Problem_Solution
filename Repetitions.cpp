//-----------राधा-----------//
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    string s;
    cin >> s;

    int n = s.size();

    int maxLength = 1;
    int currLength = 1;

    for (int i = 1; i < n; i++)
    {

        if (s[i] == s[i - 1])
        {
            currLength++;
        }
        else
        {
            currLength = 1;
        }
        maxLength = max(maxLength, currLength);
    }

    cout << maxLength << '\n';

    return 0;
}