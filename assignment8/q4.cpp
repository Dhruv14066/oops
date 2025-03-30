#include <bits/stdc++.h>
using namespace std;
template<class T>

void bubbleSort(T& a, int n) {
for (int i = 0; i < n - 1; i++)
for (int j = n - 1; i < j; j--)
if (a[j] < a[j - 1])
swap(a[j], a[j - 1]);
}
int main(){
    string s = "PRANSHU" ;
    bubbleSort(s,s.length());
    vector<int>A = {1,5,3,4,2};
     bubbleSort(A,A.size());
    cout<<s<<endl;
    for(int i=0;i<A.size();i++){
        cout<<A[i]<<" ";
    }
    return 0;
}