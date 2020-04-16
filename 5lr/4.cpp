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
    cout<<"Parni A: ";
    for(int i=0;i<n;i++){
        if(A[i]%2==0){
            p++;
            cout<<A[i]<<" ";
            C[k++]=A[i];            
        }        
    }
    cout<<endl;
    cout<<"C: ";
    for(int i=0;i<k;i++){
        cout<<C[i]<<" ";        
    }
    cout<<endl;
    int np=0;
    cout<<"Ne Parni A: ";
    for(int i=n-1;i>=0;--i){
        if(A[i]%2!=0){
            np++;
            C[k++]=A[i];
            cout<<A[i]<<" ";
        }
    }
    cout<<endl;
    cout<<"C: ";
    for(int i=0;i<k;i++){
        cout<<C[i]<<" ";        
    }
    cout<<endl;int pb=0;
    cout<<"Parni B: ";
    for(int i=0;i<m;i++){
        if(B[i]%2==0){
            pb++;
            cout<<B[i]<<" ";
            for(int j=4;j>=p-1;j--){
                C[j+1]=C[j];
                C[p]=B[i];
               // k++;
            }
        }
    }
    cout<<endl;
    cout<<"C: ";
    for(int i=0;i<6;i++){
        cout<<C[i]<<" ";        
    }

 
    

}
int main() {
    mix();
    return 0;
}
