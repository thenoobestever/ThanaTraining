#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    string hello = "hello";
    int j = 0;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == hello[j])
            j++;
        if(j == hello.size())
            break;
    }
    if(j == hello.size())
        cout << "YES";
    else cout << "NO";

    /*
    bool h = false, e = false, l= false, l2 = false;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'h' || h){
            h = true;
            if(s[i] == 'e' || e){
                e = true;
                if(s[i] == 'l' || l){
                    l = true;
                    if(s[i] == 'l' || l2){
                        l2 = true;
                        if(s[i] == 'o'){
                            cout << "YES" ;
                            return 0;
                        }
                    }
                }
            }
        }
    }
    cout << "NO";
    */
    return 0;
}