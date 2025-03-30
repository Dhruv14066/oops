#include <bits/stdc++.h>
using namespace std;

class shop{
    int id;
    float price;
    public:
    void set_item(int a, int b){
        id = a;
        price = b;
    }

    void get_item(){
        cout << "Item ID: " << id << endl;
        cout << "Price : " << price << endl;
    }
};

int main(){
    int size = 2;
    shop* ptr = new shop[size];
    int a;
    float b;
    for(int i =0;i<size;++i){
        cout << "Enter id and price :";
        cin >> a >> b;
        (ptr + i)->set_item(a,b);
    }
    for(int i =0;i<size;++i){
        (ptr + i)->get_item();
    }
    delete[] ptr;
    return 0;
}