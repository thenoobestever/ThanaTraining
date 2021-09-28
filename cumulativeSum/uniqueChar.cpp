#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;
    cin >> s;
    int n = s.size();
    // int arr[26][n + 1] = {0};
    vector<vector<int> > cs(26, vector<int>(n + 1, 0));

    for(int i = 0; i < s.size(); i++){
        for(int j = 0; j < 26; j++){
            cs[j][i + 1] = cs[j][i];
        } 
        cs[s[i] - 'a'][i] += 1;
    }
    int m;
    cin >> m;
    while(m--){
        int l, r;
        cin >> l >> r;
        int ans = 0;
        for(int j = 0; j < 26; j++){
            if(cs[j][r] - cs[j][l - 1] == 1)
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}