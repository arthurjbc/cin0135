#include <iostream>
using namespace std;
using uint = unsigned int;

int main1(){
    struct 
    {
        string nome;    
        uint age;
        bool vivo;
        /* data */
    } pessoa;

    pessoa.nome = "jorge";
    pessoa.age = 60;
    cin >> pessoa.vivo;
    cout << pessoa.vivo << endl;
    return 0;
}

int main(){
    struct pessoa
    {
        string nome;    
        uint age;
        bool vivo;
        /* data */
    } jorge;

    jorge.nome = "jorge";
    jorge.age = 60;
    jorge.vivo = true;

    //struct pessoa alice = {"alice", 20, true}; IGUAL À LINHA ABAIXO
    struct pessoa alice = {.nome = "alice", .age = 20, .vivo =  true};
    
    

    cout << jorge.vivo << endl;
    cout << jorge.nome << endl;
    cout << jorge.age << endl;
    
    cout << alice.vivo << endl;
    cout << alice.nome << endl;
    cout << alice.age << endl;
    
}

//struct é uma especie de class reduzida
//não há como adicionar values, ou seja, não é igual a dicionarios
//PLAIN OLD DATA
