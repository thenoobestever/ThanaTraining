#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    vector<int> arr(n), cs(n + 1);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        cs[i + 1] = cs[i] + arr[i];
    }

    int m;
    cin >> m;
    while(m--){
        int l, r;
        cin >> l >> r;
        cout << cs[r] - cs[l - 1] << endl;
    }
    return 0;
}