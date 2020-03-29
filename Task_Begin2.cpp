//Даны катеты прямоугольного треугольника a и b. Найти его гипотенузу c и периметр P
//

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    double c;
    cout << "enter a"<<endl;
    cin >> a;
    cout << "enter b"<<endl;
    cin >> b;
    c = sqrt(a * a + b * b);
    cout << "c=" << c<<endl;
    cout << "P=" << a + b + c;
}

