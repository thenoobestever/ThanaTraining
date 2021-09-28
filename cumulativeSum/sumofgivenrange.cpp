#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    vector<int> arr(n), cs(n);
    cin >> arr[0];
    cs[0] = arr[0];
    for(int i = 1; i < n; i++){
        cin >> arr[i];
        cs[i] = cs[i - 1] + arr[i];
    }

    int m;
    cin >> m;
    while(m--){
        int l, r;
        cin >> l >> r;
        l--; r--;
        if(l == 0)
            cout << cs[r] << endl;
        else
            cout << cs[r] - cs[l - 1] << endl;

    }
    return 0;
}