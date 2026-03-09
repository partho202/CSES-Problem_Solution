//-----------राधा-----------//
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    long long n;
    cin >> n;

    long long ans = 0;

    for (int i = 5; i <= n; i *= 5)
    {
        ans += n / i;               /*tralling zero means how much 5 there 
                                    because 0 comes form 10 and 10 = 5*2 
                                    so we are count 5 and 
                                    2 can't count because 
                                    2 is more i means all 
                                    factorial numbers 2 is there.*/
    }

    cout << ans << '\n';
    return 0;
}