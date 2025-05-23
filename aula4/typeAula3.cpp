#include <iostream>
int main(){
    int x = 10;
    int* ptr = &x;  // ptr holds the address of x
    std::cout << *ptr; // Output: 10
    *ptr = 20;
    std::cout << x; // Output: 20
}
// &x → Memory address of x
// *ptr → Dereferencing: Accesses the value stored at that address