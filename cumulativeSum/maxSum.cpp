#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n), cs(n + 1), mn(n + 1);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        cs[i + 1] = cs[i] + arr[i];
    }
    mn[0] = 0;
    for(int i = 1; i < cs.size(); i++){
        mn[i] = min(mn[i - 1], cs[i]);
    }
    int ans = 0;
    // 1, 4, -2, -5, -3, 10
    // 0 1 5 3 -2 -5 5
    // 0 0 0 0 -2 -5 -5
    for(int i = 1; i < cs.size(); i++){
        ans = max(ans, cs[i] - mn[i - 1]);
    }

    //sol 2
    set<int, int> myset;
    myset.insert(0);
    for(int i = 1; i < cs.size(); i++){
        ans = max(ans, cs[i] - (*myset.begin()) );
        myset.insert(cs[i]);
    }
    // sol 3
    int sum = 0;
    int ans = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        ans = max(ans, sum);
        if(sum < 0)
            sum = 0;
    }    
    cout << ans;
    return 0;
}
