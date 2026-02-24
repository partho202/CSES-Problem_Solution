//-----------राधा-----------//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin >> t;

    ll ans;

    // ei problem er main task ta hoilo row and column daoua tahaka value ta ber korta hoba like 2 and 3 er value jaita hoba oitai output

    while (t--)
    {

        ll y, x; // x is column and y is row.

        cin >> y >> x;

        if (y <= x)
        {
            if (x % 2 == 0)
            { // that's use for vertical
                ans = (x - 1) * (x - 1) + y;
            }
            else
            {
                ans = x * x - y + 1;
            }
        }
        else
        { // used for horizontal
            if (y % 2 == 0)
            {
                ans = y * y - x + 1;
            }
            else
            {
                ans = (y - 1) * (y - 1) + x;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}