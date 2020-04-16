#include <iostream>
using namespace std;

void two_n(){
    int a1,a2;
    cout<<"1й аргумент: "<<endl;
    cin>>a1;
    cout<<"2й аргумент: "<<endl;
    cin>>a2;
    cout<<"Числа в діапазоні: "<<endl;
    for (int i=a1+1;i<a2;i++){
        cout<<i<<endl;
    }
}
int main() {
    two_n();
    return 0;
}
