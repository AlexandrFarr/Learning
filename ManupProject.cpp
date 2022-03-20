#include <iostream>
#include "Manipulator.h"
#include "Point.h"

using namespace std;


int main()
{
    setlocale(LC_ALL, "ru");

    Manipulator M1, M2;
    double x,y,r;

    cout << "Введите координаты и радиус работы манипуляторов" << endl;;
    cout << "Координаты первого манипулятора " << endl;
    cout << " x = ";
    cin >> x;
    cout << " y = ";
    cin >> y;
    cout << " radius = " ;
    cin >> r;

    M1.setx(x);
    M1.setY(y);
    M1.setRadius(r);

    cout << "Координаты второго манипулятора " << endl;
    cout << " x = ";
    cin >> x;
    cout << " y = ";
    cin >> y;
    cout << " radius = " ;
    cin >> r;
    cout << endl;

    M2.setx(x);
    M2.setY(y);
    M2.setRadius(r);

    cout << endl;
    cout << "ВВеденные данные" << endl;
    cout << "Первый манипулятор " << M1.getX() << "," << M1.getY() << " Radius = " << M1.getRadius() << endl;
    cout << "Второй манипулятор " << M2.getX() << "," << M2.getY() << " Radius = " << M2.getRadius() << endl;

    double p1,p2;
    
    cout << "Введите точку P " << endl;
    cout << "Введите точку x= ";
    cin >> p1;
    cout << "Введите точку y= ";
    cin >> p2;

    Point pDot(p1, p2);
    cout << endl;
    cout << "Координаты точки P";
    pDot.showDisplay();

    cout << "Проверка каким манипулятором пользоватья эффективнее " << endl;

    if (M1.proverka(p1, p2) == true && M2.proverka(p1, p2)==false) {
        cout << "Наиболее эффективный  первый манипулятор " << endl;
    }
    if (M1.proverka(p1, p2) == false && M2.proverka(p1, p2) == true)
    {
        cout << "Наиболее эффективный второй манипулятор " << endl;
    }
    if (M1.proverka(p1, p2) ==true && M2.proverka(p1, p2) == true)
    {
        
        if ((sqrt((pow((p1- M1.getX()),2) +pow((p2- M1.getY()),2))))<=(sqrt((pow((p1 - M2.getX()), 2) + pow((p2 - M2.getY()), 2)))))
        { 
            cout << "Наиболее эффективный первый манипулятор " << endl;
        }
        else 
        {
            cout << "Наиболее эффективный второй манипулятор " << endl;
        }
           
           
    }
    

    
    



    
    
    
}

