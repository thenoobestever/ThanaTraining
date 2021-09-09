#include<bits/stdc++.h>
using namespace std;

template<typename A>
A maxs(A x, A y){
    if(x > y)
        return x;
    else return y;
}

int main(){
    pair<int, int> x = {1, 2};
    pair<int, int> y = {2, 4};
    if(x < y)
        cout << "YES" << endl;
    max(x, y);

    cout << x.first << " " << x.second << endl;

    pair<int, int> arr[10];

    sort(arr, arr + 10);

    vector<pair<int, int> > v;
    v.push_back({1, 2});
    v.push_back({2, 3});

    for(int i = 0; i < v.size(); i++){
        cout << v[i].first << " " << v[i].second << endl;
    }

    for(pair<int, int> item: v){
        cout << item.first << " " << item.second << endl;
    }

    pair<int, int> thana;

    pair<int, pair<int, int> > t = {1, {2, 3} };
    // t.first 
   // t.second.first
    
    return 0;
}