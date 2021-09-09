#include<bits/stdc++.h>
using namespace std;
int main(){
    int w;
    cin >> w;
    if(w % 2 == 0 && w != 2)
        cout << "YES";
    else cout << "NO";
    return 0;
}

// 10 ^ 8 ---> 1 second
// 2 * 10 ^ 8 ---> 2 seconds 