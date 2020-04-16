#include <iostream>
using namespace std;
int main() {
    int g,m,d;
    cout<<"Кількість днів: "<<endl;
    cin>>d;
    g=365; m=30;
    cout<<"Рік: "<<d/g<<endl;
    cout<<"Місяць: "<<(d%g)/m<<endl;
    cout<<"День: "<<(d%g)%m;
}
