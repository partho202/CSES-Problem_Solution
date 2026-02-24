//-----------राधा-----------//
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    long long n;
    cin >> n;
    vector<int> v(n - 1);
    vector<int> f(n + 1, 0);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> v[i];
        f[v[i]]++;
    }
    int ans;
    for(int i = 1; i<n;i++){
        if(f[i]==0){
            ans = i;
            break;
        }
    }
    cout << ans << '\n';
    return 0;
}