#include <iostream> 
using namespace std;

int main() {
    int n, mas[n],sum=0;
    cout<<"Кількість елементів: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<i<<"й"<<" елемент: "<<endl;
        cin>>mas[i];
    }
    cout<<"Масив: ";
    for(int i=0;i<n;i++){
        cout<<mas[i]<<" ";
        sum+=mas[i];
    }
    cout<<endl<<"Сума елементів масиву: "<<sum;
    
    return 0;
}
