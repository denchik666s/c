#include <iostream>
using namespace std;
#include <cmath>
typedef struct Complex {
    double Re;
    double Im;
} z;
 
z summation(z z1, z z2) {
    z summ;
    summ.Re = z1.Re + z2.Re;
    summ.Im = z1.Im + z2.Im;
    return summ;
}
 
z subtract(z z1, z z2) {
    z subt;
    subt.Re = z1.Re - z2.Re;
    subt.Im = z1.Im - z2.Im;
    return subt;
}
 
z multiply(z z1, z z2) {
    z mult;
    mult.Re = (z1.Re * z2.Re) - (z1.Im * z2.Im);
    mult.Im = (z1.Im * z2.Re) + (z2.Im * z1.Re);
    return mult;
}
 
z divide(z z1, z z2) {
    z divi;
    divi.Re = (z1.Re * z2.Re + z1.Im * z2.Im) / (pow(z2.Re,2) + pow(z2.Im,2));
    divi.Im = (z1.Im * z2.Re - z2.Im * z1.Re) / (pow(z2.Re,2) + pow(z2.Im,2));
    return divi;
}
 
int main() {
    setlocale(LC_ALL, "Russian");
    z com1, com2;
    cout << "Введіть a и b першого комплексного числа" << endl;
    cin >> com1.Re;
    cin >> com1.Im;
    cout << "Перше комплесне число: " << com1.Re << " + (" << com1.Im << ")i" << endl;
    cout << "Введіть a и b другого комплексного числа" << endl;
    cin >> com2.Re;
    cin >> com2.Im;
    cout << "Друге комплексне число: " << com2.Re << " + (" << com2.Im << ")i" << endl;
    z summ = summation(com1, com2);
    z subt = subtract(com1, com2);
    z mult = multiply(com1, com2);
    z divi = divide(com1, com2);
    cout << "Сума чисел = " << summ.Re << " + (" << summ.Im << ")i" << endl;
    cout << "Різниця чисел = " << subt.Re << " + (" << subt.Im << ")i" << endl;
    cout << "Добуток чисел = " << mult.Re << " + (" << mult.Im << ")i" << endl;
    cout << "Частка чисел = " << divi.Re << " + (" << divi.Im << ")i" << endl;
    return 0;
}