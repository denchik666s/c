#include <iostream>
using namespace std;
int main() {
    int c1,c2,c3,c4,c5,c;
    cout<<"Оцінка з 1го предмету: "<<endl;
    cin>>c1;
    cout<<"Оцінка з 2го предмету: "<<endl;
    cin>>c2;
    cout<<"Оцінка з 3го предмету: "<<endl;
    cin>>c3;
    cout<<"Оцінка з 4го предмету: "<<endl;
    cin>>c4;
    cout<<"Оцінка з 5го предмету: "<<endl;
    cin>>c5;
    cout<<"Студент має ";
    c=(c1+c2+c3+c4+c5)/5;
    if(c>=60){
        cout<<"Перший поділ";
    }else if (c>=50 && c<=59){
        cout<<"Другий поділ";
    }else if (c>=40 && c>=49){
        cout<<"Третій поділ";
    }else{
        cout<<"Невдача";
    }
    return 0;
}
