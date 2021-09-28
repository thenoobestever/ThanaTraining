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
    int count = 0;
    mp[0] = 1;
    for(int i = 1; i < cs.size(); i++){
        count += mp[cs[i] - k];
        mp[cs[i]]++;
    }
    return 0;
}
