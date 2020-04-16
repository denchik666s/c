#include <iostream>
using namespace std;
int main() {
    int n;
    float sum = 1;
    cout<<"n = "<<endl;
    cin>>n;
    for(int i=2;i<=n;i++){
        sum+=1.0/i;
    }
    cout<<"Сума ряду: "<<sum;
    return 0;
}
