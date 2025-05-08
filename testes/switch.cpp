#include <iostream>
using namespace std;
string dia[7]={"segunda", "terca", "quarta", "quinta", "sexta", "sabado", "domingo"};
int main (){
    int day;
    cin >> day;
    switch (day) {
    case 1:
        cout << dia[0];
        break;
    case 2:
        cout << dia[1];
        break;
    case 3:
        cout << dia[2];
        break;
    case 4:
        cout << dia[3];
        break;
    case 5:
        cout << dia[4];
        break;
    case 6:
        cout << dia[5];
        break;
    case 7:
        cout << dia[6];
        break;
    }
}