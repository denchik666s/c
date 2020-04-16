#include <iostream> // C++ [GCC 9.2.0] 
using namespace std;

void mix(){
    int n,m;
    cout<<"Введіть кількість едементів масиву А"<<endl;
    cin>>n;
    cout<<"Введіть кількість едементів масиву В"<<endl;
    cin>>m;
    int A[n];int k=0;
    cout<<"Введіть едементи масиву А"<<endl;
    for(int i=0;i<n;i++){
        cin>>A[i];
        cout<<A[i]<<" ";   
    }
    cout<<endl<<"Введіть едементи масиву В"<<endl;
    int B[m];
    for(int i=0;i<m;i++){
        cin>>B[i];
        cout<<B[i]<<" ";    
    }
    int C[n+m],p=0;;
    cout<<endl;
    //Усі парні числа A зліва направо копіюються в C зліва направо.
    for(int i=0;i<n;i++){
        if(A[i]%2==0){
            C[k++]=A[i];            
        }        
    }
    //Усі непарні числа A зліва направо копіюються в C справа наліво.
    for(int i=n-1;i>=0;--i){
        if(A[i]%2!=0){
            C[k++]=A[i];
        }
    }
    //Усі парні числа B зліва направо копіюються в C зліва направо.
    for(int i=0;i<m;i++){
        if(B[i]%2==0){
            C[k++]=B[i];
        } 
    }
    //Усі непарні числа B зліва направо копіюються в C справа наліво.
    for(int i=m-1;i>=0;--i){
        if(B[i]%2!=0){
            C[k++]=B[i];
        }
    }
    cout<<"Масив C: ";
    for(int i=0;i<k;i++){
        cout<<C[i]<<" ";        
    }
}
int main() {
    mix();
    return 0;
}
