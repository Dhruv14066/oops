#include<iostream>
using namespace std;
// class A{
// public: A(){cout<<"In constructor"<<endl;}
// };
// int main(){
// A a[5];
// }
// class A{
// int i,j;
// public:
// A(int a=-99, int b=-88){ i=a; j=b;}
// void show(){cout<<"i="<<i<<" j = "<<j<<endl;}
// };
// int main(){
// A a, b(22),c(1,2);
// a.show(); b.show(); c.show();	
// // }
// class Test  { 
// public: Test() {cout << "In constructor"<<endl; } 
//     ~Test() { cout << "In destructor"<<endl; } 
// }; 
// void myfunc() {  Test obj; } 
// int main() { 
// cout << "Start main()"<<endl;   myfunc();   
// cout << "End main()"<<endl; 
// }
// class Array { 
//     int ptr[], size;
// public: 
//    Array(int* p,int s) { ptr[0]=p[0]; ptr[1]=p[1];  size=s;}
//   int& operator[](int i) { 
//     if (i >= size) { 
//         cout << "Array index out of bound, exiting"; exit(0); 
//     } 
//     return ptr[i]; 
// } 
// }; 
// int main() { 
// int a[] = { 1, 2 };  
// Array arr1(a,2);  
// cout << arr1[1] << endl;  } 

// class B{
//     public:
//     void display(){
//         cout << "Hello" << endl;
//     }
// };

// class C{
//     public:
//     void display(){
//         cout << "World" << endl;
//     }
// };

// class D : public C public B{
//     public :
//     void display(){
        
//         cout << "HI" << endl;
//     }
// };
// int main(){
//     D obj;
//     obj.display();
// }

int main(){
   // char name[] = "test";
    char* name = new char[4];
    name[0]='t';
    *(name+1) = 'e';
    *(name+2) = 's';
    *(name+3) = 't';
    for (int i = 0; i<4;i++){
        cout << name[i];
    }
    cout << endl;
}