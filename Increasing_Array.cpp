//-----------राधा-----------//
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n;

    cin >> n;

    vector<int> v(n);

    long long moves = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 1; i < n ; i++) //n = 5...1,2,3,4
    {
        if (v[i] < v[i - 1]) // for 2..3<3(not added).. for 3..1<5(true and added)..
        {
            moves += v[i - 1] - v[i]; // for 1..3-2.. for 3..{5-1 = 4} moves = 5..
            
            v[i] = v[i - 1];
        }
    }
    cout << moves << '\n';
    return 0;
}