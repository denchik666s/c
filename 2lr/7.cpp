#include <iostream>
using namespace std;
int main() {
    int n;
    int k1=0,k2=0,k3=0;
    cin>>n;
    int mas[n];
  
    for(int i=0; i<=n; i++){
        cin>>mas[i];
    }
    for(int i=0; i<=n; i++){
        if(mas[i]<0){
            k1++;}
        if(mas[i]>0){
            k2++;} 
        if(mas[i]==0){
            k3++;}       
    }
    cout<<"Кількість від'ємних: "<<k1<<endl;
    cout<<"Кількість додатніх: "<<k2<<endl;
    cout<<"Кількість нульових: "<<k3;
    return 0;
}
