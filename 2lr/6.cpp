#include <iostream>
using namespace std;
int main() {
    int sum=0;
    int a;
    cout<<"Введіть число: "<<endl;
    cin>>a;
    while(a!=0){
        sum+=a%10;
        a/=10;
    }
    cout<<"Сума цифр: "<<sum;
    return 0;
}
