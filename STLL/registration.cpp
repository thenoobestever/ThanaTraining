#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string, int> mp;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        mp[s]++;
        if(mp[s] > 1){
            cout<< s << mp[s] - 1 << endl;
        }else {
            cout << "OK" << endl;
        }
    }
    return 0;
}