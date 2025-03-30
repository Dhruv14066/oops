#include <bits/stdc++.h>
using namespace std;

class example
{
   private:
   void priavte_display()
   {
    cout << "Hello World"<<endl;
   }

   public:

   void public_display()
   {
    priavte_display();
    cout << "executed succesfully"<<endl;
   }
};

int main()
{
    example a;
    a.public_display();
    return 0;
}