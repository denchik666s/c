#include <iostream>
using namespace std;
int main() {
    int a,b,c,s;
    cout<<"Введіть сторону a"<<endl;
    cin>>a;
    cout<<"Введіть сторону b"<<endl;
    cin>>b;
    cout<<"Введіть сторону c"<<endl;
    cin>>c;
    s=a+b+c;
    s==180? cout<<"Трикутник дійсний" : cout<<"Трикутник не дійсний";
    return 0;
}
