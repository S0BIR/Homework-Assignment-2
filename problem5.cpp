#include <iostream>
using namespace std;
int main() {
    float a,c;
    char b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter symbol: ";
    cin>>b;
    cout<<"Enter the second number: ";
    cin>>c;
    switch (b) {
        case '+':
            cout<<a+c;
        break;
        case '-':
            cout<<a-c;
        break;
        case '*':
            cout<<a*c;
        break;
        case '/':
            cout<<a/c;
        break;
        default:
            cout<<"ERROR!!!";
    }return 0;}
