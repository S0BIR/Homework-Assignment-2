#include <iostream>
using namespace std;
int main() {
     int n1,n2,n3,n4;
     cin>>n1>>n2>>n3>>n4;
     // if (n1!=n2 && n2!=n3 && n3!=n4 && n4!=n1 && n1!=n3 && n2!=n4)
     //     cout<<0;
     // else if(n1==n2 && n2!=n3 && n3!=n4 && n4!=n1) || (n1!=n2 && n2==n3 && n3!=n4 && n4!=n1) || ()
     if (n1==n2) {
         if (n2==n3) {
             if (n2==n4) {
                 cout<<0;
             }
             else {
                 cout<<1;
             }
         }
         else {
             cout<<2;
         }
     }
     return 0;}
