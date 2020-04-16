#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a,b,c,x;
    cout<<"Введіть сторону a"<<endl;
    cin>>a;
    cout<<"Введіть сторону b"<<endl;
    cin>>b;
    cout<<"Введіть сторону c"<<endl;
    cin>>c;
    if((b*b - 4*a*c) >= 0)
    {
        x = ( -1*b + sqrt(b*b - 4*a*c) ) / (2 * a);
        cout<<"Перший корень =  " << x << endl;
        x = ( -1*b - sqrt(b*b - 4*a*c) ) / (2 * a);
        cout<<"Другий корень =  " << x << endl;
    }   
    else{
        cout<<"Дискримінант менше 0, коренні несуттєві"<<endl;
    }
    return 0;
}
