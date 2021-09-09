#include<bits/stdc++.h>
using namespace std;
// n <= 10^5
// arr[i] <= 10^6
// n = 5, arr={1, 4 , 1, 2 , 2 , 2}
// outpu = 
//1 -> 2, 2-> 3, 4 -> 1
int main(){
    int n ;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];


    // 
    // first solution maxItem * n
    int maxItem = 1e6;
    for(int i = 1; i <= maxItem; i++){
        int counter = 0;
        for(int item: arr){
            if(item == i)
                counter++;
        }
        if(counter)
            cout << i << " " << counter << endl;
    }
    
    // second Solution
    sort(arr.begin(), arr.end());
    // 1 1 2 2 2 4
    for(int i = 0; i < arr.size();){
        int curVal = arr[i];
        int counter = 0;
        while(curVal == arr[i]){
            counter++;
            i++;
        }
        cout << curVal << " " << counter << endl; 
    }

    // frequency array
    vector<int> frequency(maxItem + 1);
    
    for(int i = 0; i < arr.size(); i++){
        frequency[arr[i]]++;
    }

    for(int i = 1; i <= maxItem; i++){
        if(frequency[i] > 0)
            cout << i << " " << frequency[i] << endl;
    }
    // n <= 10^5
    // -10^6 <= arr[i] <= 10^6
  //  arr[i] = 0 --> index --> 10^6
    //arr[i] = -10^6 --> index --> 0
    // n = 5, arr={-1, 4 , 1, 2 , 2 , 2}
    vector<int> frequencyWithNegative(2 * maxItem + 1);
    int shiftValue = 10^6;
    for(int i = 0; i < arr.size(); i++){
        frequencyWithNegative[arr[i] + shiftValue]++;
    }

    // with strings
    string s = "ABCDEDASEDASD";

    vector<int> frequencyChar(400);

    for(int i = 0; i < s.size(); i++)
        frequencyChar[s[i]]++;

    // with offset 
    vector<int> frequencyChar2(26);
    for(int i = 0; i < s.size(); i++)
        frequencyChar2[s[i] - 'A']++;
    for(int i = 0; i < 26; i++){
        if(frequencyChar2[i] > 0)
            cout << char(i + 'A') << " " << frequencyChar2[i] << endl;
    }

    
    return 0;
}