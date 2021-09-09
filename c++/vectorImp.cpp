#include<bits/stdc++.h>
using namespace std;
template<typename T>
class myVector {
    int size, index;
    T *arr;
    public:
        myVector(){
            arr = new T[1];
            index = 0;
            size = 1;
        }
        myVector(int size){
            arr = new T[size];
            this->size = size;
            index = 0;
        }

        void push_back(int value){
            if(index + 1 >= size){
                // copy
                int *temp = new T[size];
                for(int i = 0; i < index; i++)
                    temp[i] = arr[i];
                
                size = size * 2;
                arr = new T[size];
                for(int i = 0; i < index; i++)
                    arr[i] = temp[i];
            }

            arr[index++] = value;
        }

        void pop_back(){
            index--;
            if(index < size / 2){
                int *temp = new T[size];
                for(int i = 0; i < index; i++)
                    temp[i] = arr[i];
                
                size = size / 2;
                arr = new T[size];
                for(int i = 0; i < index; i++)
                    arr[i] = temp[i];
            }
        }
        int size(){
            return index;
        }
        auto begin(){
            return arr;
        }

        auto end(){
            return arr + index;
        }

};

int main(){
    vector<int> thana = {1,2 ,3,4, 5};
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