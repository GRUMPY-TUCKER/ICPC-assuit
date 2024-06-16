#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main()
{
    ios::sync_with_stdio(false); // removes sync between cout and printf
    cin.tie(NULL);               // removes sync between cout and cin

    int n, m, q;
    cin >> n >> m >> q;
    vector<vector<int>> v(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }

    vector<vector<int>> prefixsum(n + 1, vector<int>(m + 1, 0));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            prefixsum[i][j] = prefixsum[i - 1][j] + prefixsum[i][j - 1] - prefixsum[i - 1][j - 1] + v[i - 1][j - 1];
        }
    }

    while (q--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        cout << prefixsum[c][d] - prefixsum[c][b - 1] - prefixsum[a - 1][d] + prefixsum[a - 1][b - 1] << endl;
    }
    return 0;
}