#include<bits/stdc++.h>
using namespace std;
int main (){
  int n;
  cin >> n;
  int arr[n], cs[n + 1];
    for(int i = 0; i < n; i++){
      cin >> arr[i];
      cs[i + 1] = max(cs[i], arr[i]);
    }
    
    return 0;
}