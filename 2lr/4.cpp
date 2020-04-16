#include <iostream>
using namespace std;
int main() {
    char c;
    cout<<"ch: "<<endl;
    cin>>c;
    cout<<"Введенно ";
    if (c>=97 && c<=122){
        cout<<"символ літери нижнього регістру";
    }else if(c>=65 && c<=90){
        cout<<"символ літери верхнього регістру";
    }
    else if(c>=48 && c<=57){
        cout<<"символ числа";
    }else{
            cout<<"символ";
    }
    return 0;
}
