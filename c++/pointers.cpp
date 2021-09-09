#include<bits/stdc++.h>
using namespace std;
void print(int arr[]){
    arr[0] = 10;
}
int main(){
    int x = 4;
    int arr[4] = {4, 3, 2, 1};
    print(arr);
    cout << arr << endl;
    cout << arr[0] << endl; // --> *(arr + 1)
    cout << *(arr + 0) << endl;

    sort(arr + 1, arr + 4); 
    return 0;
}