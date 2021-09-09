#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int> thana = {1,2 ,3,4};
    vector<int> x;
    cout << thana[0] << endl;
   
    thana[0] = 1000;

    thana.push_back(5);

    thana.size();
    auto p = thana.begin(); // --> pointer on beginging of the array -->arr
    thana.end(); // --> pointer on the end of array --> arr + n

    for(int i = 0; i < thana.size(); i++)  
        cout << thana[i] << endl;
    for(auto p = thana.begin(); p < thana.end(); p++){
        cout << *p << endl;
    }
    for(int item: thana){
        cout << item << endl;
    }
    thana.erase(thana.begin() + 1);
    sort(thana.begin(), thana.end());
    sort(thana.begin(), thana.begin() + 3);
    return 0;
}