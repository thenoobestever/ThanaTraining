#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n), cs(n + 1);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        cs[i + 1] = cs[i] + arr[i];
    }

    map<int, int> mp;
    // 1 2 3 4 
    // 0 1 3 6 10 
    // k = 6 
    mp[0] = 1;
    for(int i = 1; i < cs.size(); i++){
        if(mp[cs[i] - k] != 0){
            cout << mp[cs[i] - k] << " " << i << endl;
            return 0;
        }
        mp[cs[i]] = i + 1;
    }
    return 0;
}