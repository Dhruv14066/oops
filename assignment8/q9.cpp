#include <bits/stdc++.h>
using namespace std;
template<class T , int size>
class high{
    private :
    T group[size];

    public:
    high(){
        for(int i = 0 ; i < size ; i++){
            group[i] = 0 ;
        }
    }
    void set(int index , T val){
         if(index >=0 && index < size) group[index] = val;
         else cout << "index out of bound" << endl;
    }

    void display(){
        for(int i = 0 ; i < size ; i++){
            cout << group[i] << " ";
        }
        cout << endl;
    }
};
int main(){
    high <int,5> arr;
    arr.set(0,6);
    arr.set(1,9);
    arr.set(2,4);
    arr.set(3,2);
    arr.set(4,0);
    arr.display();
    return 0;
}