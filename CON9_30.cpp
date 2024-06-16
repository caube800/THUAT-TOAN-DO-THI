//CHU TRINH EULER TRONG DO THI CO HUONG
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, u, v, ok = 1;
        cin >> n >> m;
        int a[n + 1] = {};
        for (int i = 0; i < m; i++)
        {
            cin >> u >> v;
            a[u]++;
            a[v]--;
        }
        for (int i = 1; i <= n; i++)
        {
            if (a[i] != 0)
            {
                ok = 0;
                cout << 0 << endl;
                break;
            }
        }
        if (ok)
            cout << 1 << endl;
    }
}