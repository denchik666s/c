#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    int n = 1+ rand() %(11); 
    int user;
    cout<<"Введіть число в діапазоні [1:10]"<<endl;
    cin>>user;
    while(user<n){
        cout<<"Здогадка занизька"<<endl;
        cin>>user;
        }
    while(user>n){
        cout<<"Здогадка зависока"<<endl;
        cin>>user;
        }
    cout<<"Ви вгадали!!";  
    return 0;
}
