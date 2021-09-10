#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    if(n < m)
        return cout << -1, 0;
        
    for(int i = m; i <= n; i += m){
        // check if I can reach n with i steps
        if(i * 2 >= n)
            return cout << i << endl, 0;
    }

    return 0;
}