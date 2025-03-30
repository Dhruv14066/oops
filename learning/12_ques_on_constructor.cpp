#include <bits/stdc++.h>
using namespace std;

class point
{
    private :
    int x;
    int y;

    public :
    point(int a, int b){
        x=a;
        y=b;
        
    }
    static double distance (point& p1, point& p2)
    {
        int diff_x = p1.x - p2.x;
        int diff_y = p1.y - p2.y;
        return (sqrt(diff_x*diff_x + diff_y*diff_y));
    }
};

int main()
{
    point p1(0,3), p2(4,0);
    cout << point :: distance(p1,p2) << endl;
    return 0;
}