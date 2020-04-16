#include <iostream>
using namespace std;
int main() {
    int c=0;
    for(int i=0;i<10;i++){
        c=i+c;
    }
    cout<<"Сума перших 10 натуральних чисел: "<<c;
    return 0;
}
