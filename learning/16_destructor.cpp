#include <bits/stdc++.h>
using namespace std;
int count = 0;
// destructor doesnt have any return value
class name
{
public:             
    name()
    {
        count++;
        cout << " constructor is called for object " << count << endl;
    }
    ~name()
    {
        cout << "Destructor is called for object " << count << endl;
        count--;
    }
};
int main()
{
    name n1;
    {
        name n2;
        name n3;
    }
    return 0;
}