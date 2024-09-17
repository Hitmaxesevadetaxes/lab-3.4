#include <iostream>
#include <Windows.h> 

using namespace std;

int main()
{
  
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x; // вхідний аргумент
    double y; // вхідний параметр

    // Введення даних
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;

    // Розгалуження в повній формі
    if ((y <= 3 - (x - 2) * (x - 2) && y >= x) ||
        (y <= 3 - (x - 2) * (x - 2) && y >= -x && y <= 0))
        cout << "Так" << endl;
    else
        cout << "Ні" << endl;

    return 0;
}
