#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, numberofones = 0;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] == 1)
            numberofones++;
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            int count = numberofones;
            // flip
            for(int k = i; k <= j; k++){
                if(arr[k] == 0)
                    count++;
                else count--;
            }

            ans = max(ans, count);
        }
    }
    cout << ans << endl;
    return 0;
}