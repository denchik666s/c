#include <iostream>
using namespace std;

void showChoice(int &user){
    cout<<"Для того щоб виконати операцію над двума аргументами виберіть дію (1,2,3,4,0): "<<endl;
    cout<<"1. +"<<endl<<"2. -"<<endl<<"3. *"<<endl<<"4. /"<<endl<<"0. exit"<<endl;
    cout<<"Дія: "<<endl;
    cin>>user;
}
void vvod(float &a1, float &a2){
    cout<<"Введіть 1й аргумент: "<<endl;
    cin>>a1;
    cout<<"Введіть 2й аргумент: "<<endl;
    cin>>a2;
}
void add(){
   float a1,a2;
   vvod(a1,a2);
   int sum=0;
   sum=a1+a2;
   cout<<"Сума: "<<sum<<endl;
}
void substrcut(){
   float a1,a2;
   vvod(a1,a2);
   int vidn=0;
   vidn=a1-a2;
   cout<<"Різниця: "<<vidn<<endl;
}
void multiply(){
   float a1,a2;
   vvod(a1,a2);
   int mng=1;
   mng=a1*a2;
   cout<<"Продукт: "<<mng<<endl;
}
void divide(){
   float a1,a2;
   vvod(a1,a2);
   float dil;
   dil=float(a1/a2);
   cout<<"Коефіцієнт: "<<dil<<endl;
}
int main() {
    int user,k=0;
    showChoice(user);
    if(user>4 || user < 0){
        cout<<"Не вірно введено номер дії!"<<endl;
        cout<<"1. +"<<endl<<"2. -"<<endl<<"3. *"<<endl<<"4. /"<<endl<<"0. exit"<<endl;
        cout<<"Дія: "<<endl;
        cin>>user;
        } 
    while(user!=0){
     if (user == 1){
         add();
     }
     else if(user == 2){
         substrcut();
     }
     else if(user == 3){
         multiply();
     }else if(user == 4){
         divide();
     }
     cout<<"Дія: "<<endl;
     cin>>user;
    }    
    if(user == 0){
         cout<<"Прощавай! До зустрічі:)";
    }
    return 0;
}
