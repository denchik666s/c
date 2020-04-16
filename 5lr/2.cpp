#include <iostream> 
using namespace std;

int main() {
    int n, mas[n],t;
    cout<<"Кількість елементів: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<i<<"й"<<" елемент: "<<endl;
        cin>>mas[i];
    }
    cout<<"Масив: ";
    for(int i=0;i<n;i++){
        cout<<mas[i]<<" ";
       
    }
    for(int i=0; i<n/2; i++) {
        t = mas[i];
        mas[i] = mas[n-i-1];
        mas[n-i-1] = t;
    }
    cout<<endl<<"Зворотній масив: ";
    for(int i=0;i<n;i++){
        cout<<mas[i]<<" ";
       
    }    
    return 0;
}
