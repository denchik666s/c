#include <iostream> 
using namespace std;

int main() {
    int n, mas[n],max=mas[0],min=mas[0];
    cout<<"Кількість елементів: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<i<<"й"<<" елемент: "<<endl;
        cin>>mas[i];
    }
    cout<<"Масив: ";
    for(int i=0;i<n;i++){
        cout<<mas[i]<<" ";
        if (mas[i] > max) {
            max = mas[i];
        }
        if(mas[i]<min){
            min = mas[i];
        }
    }   
    cout<<endl<<"Максимальний елемент: "<<max;
    cout<<endl<<"Мінімальний елемент: "<<min;
 
    return 0;
}
