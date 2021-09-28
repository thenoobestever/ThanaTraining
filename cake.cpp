#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    string s[n + 1];
    for (int i = 0; i < n; i++)
        cin >> s[i];

    int row[n + 1] = {0}, col[m + 1] = {0};
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (s[i][j] == 'S')
            {
                row[i] = 1;
                col[j] = 1;
            }

    int ans = 0;
    for (int i = 0; i < n; i++)
        if (row[i] == 0){
            for (int j = 0; j < m; j++)
            {
                s[i][j] = '!';
            }
        }

    for (int i = 0; i < m; i++)
        if (col[i] == 0){
            for (int j = 0; j < n; j++){
                s[j][i] = '!';
            }
        }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (s[i][j] == '!')
                ans++;

    cout << ans;

    return 0;
}