#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<string, int> myMap;
    int n;
    cin >> n;
    for(int i = 0;i < n; i++){
        string s;
        cin >> s;
        myMap[s]++;
    }

    for(pair<string, int> item: myMap){
        cout << item.first << " " << item.second << endl;
    }

    // tree map O(log n)
    map<string, int> mp;

    for(int i = 0;i < n; i++){
        string s;
        cin >> s;
        mp[s]++;
    }

    for(pair<string, int> item: mp){
        cout << item.first << " " << item.second << endl;
    }
    return 0;
}