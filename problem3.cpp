#include <iostream>
using namespace std;
int main() {
    char M;
    cin>>M;
    float h;
    cin>>h;
    if (M=='M' && h<1.70)
        cout<<"Short";
    else if (M=='M' && h>=1.70 && h<1.85)
        cout<<"Normal";
    else if (M=='M' && h>=1.85)
        cout<<"Tall";
    else if (M=='F' && h<1.60)
        cout<<"Short";
    else if (M=='F' && h>=1.60 && h<1.75)
        cout<<"Normal";
    else if (M=='F' && h>=1.75)
        cout<<"Tall";
    return 0;}
