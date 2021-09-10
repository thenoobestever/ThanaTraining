#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    if(n < m)
        return cout << -1, 0;

    int solution = n / 2 + n % 2;
    int numberofsplit = n / 2;

    int targetNumber = solution + (m - solution % m) % m; 
    if(targetNumber - solution > numberofsplit){
        cout << -1 << endl;
    }else {
        cout << targetNumber;
    }


    return 0;
}