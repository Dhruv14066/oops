#include <bits/stdc++.h>
using namespace std;

class rectangle{
private:
int height;
int width;

public:

void getdata(int h, int w){
 height = h;
 width =w;
}
int getarea()
 {
    return height*width;
 }
};

int main()
{
    rectangle a;
    a.getdata(5,6);
    int area = a.getarea();
    cout << "area of rectangle is "<<area<<endl;
    return 0;
}