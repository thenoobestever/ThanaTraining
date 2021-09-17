#include<bits/stdc++.h>
using namespace std;
int main(){
    set<char> myset;
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        cin >> s[i];
        myset.insert(tolower(s[i]));
    }
    if(myset.size() == 26)
        cout << "YES";
    else cout << "NO";
    return 0;
}