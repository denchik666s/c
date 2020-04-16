#include <iostream> 
using namespace std;

int main() {
    int m,n;
    cout<<"Кількість рядків m: "<<endl;
    cin>>m;
    cout<<"Кількість стовпців n: "<<endl;
    cin>>n;
    int A[m][n];
    int B[m][n];
    cout<<"Введіть масив А: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
        }
    }
    cout<<"Масив А: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<A[i][j]<<" ";
        }
    }
    cout<<endl<<"Введіть масив В: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>B[i][j];
        }
    }
    cout<<"Масив B: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<B[i][j]<<" ";
        }
    }
    int C[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    cout<<endl<<"Сума масивів А і В: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<C[i][j]<<" ";
        }
    }
    return 0;
}
