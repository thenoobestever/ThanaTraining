#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int ansWithA = n * a;
    int ansWithB = n / m * b + min((n % m) * a, b); 
    cout << min(ansWithB, ansWithA);
    return 0;
}