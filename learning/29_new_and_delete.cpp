#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    int* ptr = &a;//ptr stores addres of a as int*(pointer) is just a datatype to store adress
    *ptr = 28;
    cout << "value of a is " <<a << endl;
    int* p = new int(15); // dynamically allocate value at p
    float* f = new float(3.14); // can also use for different datatypes 
    cout << "value at adress p is "<< *p <<endl;
    cout << "value at adress f is "<< *f <<endl;

    int* arr = new int[3];
    arr[0] = 10;
    *(arr+1) = 15;
    arr[2] = 20;
    for( int i = 0; i<3;i++)
    {
        cout << "Value at arr["<<i<<"] is "<<arr[i]<<endl;
    }
    return 0;

// delete - to delete the space we use 
 delete p,f;
delete[] arr;
}