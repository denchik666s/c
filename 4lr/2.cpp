#include <iostream>
using namespace std;

void zero_small(int &a1, int &a2){
    cout<<"1й аргумент: "<<endl;
    cin>>a1;
    cout<<"2й аргумент: "<<endl;
    cin>>a2;
    cout<<"0: "<<endl;
    if(a1<a2){
       a1=0;
   }else{a2=0;}
}
int main() {
    int a1,a2;
    zero_small(a1,a2);
    cout<<a1<<endl<<a2;
    return 0;
}
