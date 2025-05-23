#include <iostream>
#include <cstdio>
using namespace std;

int partial = 1;
int *p = &partial;

int main(){
int arr[3] = {10, 20, 30};
        cout << &partial<< " " << endl;
        cout << p<< " " << endl;
}
// &var = endereço de var