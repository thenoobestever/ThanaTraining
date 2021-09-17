#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> myset;
    // with repetition
    multiset<int> mymultiset;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        // log n
        myset.insert(x);
    }
    cout << myset.size() << endl;

    if(myset.find(10) != myset.end()){
        cout << "FOUND" << endl;
    }else {
        cout << "NOT found" << endl;
    }
    
    auto it = myset.find(10);
    if(it != myset.end())
        myset.erase(it);
    
    for(int item: myset){
        cout << item << endl;
    }

    return 0;
}