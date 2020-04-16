#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int a,b,c;
    double s,p;
    cout<<"a = "<<endl;
    cin>>a;
    cout<<"b = "<<endl;
    cin>>b;
    cout<<"c = "<<endl;
    cin>>c;
    s=(a+b+c)/2;
    p=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"Площа трикутника: "<<p;
    return 0;
}
