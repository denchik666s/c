#include <iostream>
using namespace std;
int main() {
    int f; 
    double c;
    cout <<"Температура в  Фаренгейт: "<<endl; 
    cin>>f;
    c=(f-32.0)*(5.0/9.0);
    cout<<"Цельсій: "<<c;
    return 0;
}
