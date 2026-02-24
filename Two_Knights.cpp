//-----------राधा-----------//
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0) -> sync_with_stdio(0);

     long long n;
    cin >> n;

    for (long long k = 1; k <= n; k++) {

        long long t_cells = k * k;

        if (k == 1) {
            cout << 0 << endl;
        }
        else {
            // total ways to place two knights
            long long total = (t_cells * (t_cells - 1)) / 2;

            // attacking positions (2x3 and 3x2 slabs)
            long long slabs = (k - 2) * (k - 1) * 2 * 2;

            cout << total - slabs << endl;
        }
    }

    return 0;
}