#include <iostream>
#include <Windows.h> 

using namespace std;

int main()
{
  
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x; // ������� ��������
    double y; // ������� ��������

    // �������� �����
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;

    // ������������ � ����� ����
    if ((y <= 3 - (x - 2) * (x - 2) && y >= x) ||
        (y <= 3 - (x - 2) * (x - 2) && y >= -x && y <= 0))
        cout << "���" << endl;
    else
        cout << "ͳ" << endl;

    return 0;
}
