#include<bits/stdc++.h>
using namespace std;
/*
syntax for initialization-list in constructor :

constructor(argument-list):initialisation sector{constructor body}

*/

class test{
  protected:
  int a;
  int b;
  public:
  test(int i,int j) : a(i),b(j){
  //test(int i,int j) : a(i),b(j+i){
  //test(int i,int j) : a(i),b(j+a){
  //test(int i,int j) : b(j),a(i+b){ // will not work as a is initialised first in class 
    cout << "value of a is " << a <<endl;
    cout << "value of b is " << b <<endl;
  }
};
int main(){
    test t(4,5);
    return 0;
}