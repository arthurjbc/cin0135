#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;
using uint = unsigned int;

int main (){
    uint m;
    cin >> m;
    uint n;
    cin >> n;
    uint p;
    cin >> p;
    uint array1[m][n];
    for (int i=0; i<m;i++){
        for (int j=0; i<n;i++){
            array1[i][j]=rand()%100;
            cout << array1[i][j]<< " ";
        }
        cout << endl;
    }
    uint array2[n][p];
    for (int i=0; i<n;i++){
        for (int j=0; i<p;i++){
            array2[i][j]=rand()%100;
            cout << array2[i][j]<< " ";
        }
        cout << endl;
    }
}