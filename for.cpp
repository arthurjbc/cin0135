#include <stdio.h>

//CMake Tools

int main(){
    for(int i=0; i<500; i++){
        if (i%2==0){
            printf("é par:%d\n", i);
        }
        else{
            printf("é impar:%d\n", i);
        }
    }
}
