#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <fstream>
#include <sstream>

using namespace std;
using uint = unsigned int;

int main (){
    fstream Myfile("notas_alunos.txt");

    struct Aluno
    {
        string nome;
        int matricula;
        int nota;
    };

    string linha;
    int numeroLinha = 0;
    while (getline(Myfile, linha)){
        numeroLinha++;

        if (linha == "end"){
            cout << "cabou" << endl;
        } else if (numeroLinha%4==1){
            string Nome = linha;
            struct Aluno Nome = {.nome = Nome};
        } else if(numeroLinha%4 == 2) {
            int mat;
            stringstream ss(linha);
            ss >> mat;
            struct Aluno Nome = {.matricula = mat};
        } else if (numeroLinha%4 == 3){
            int nota;
            stringstream ss(linha);
            ss >> nota;
            struct Aluno Nome = {.nota = nota};
        }
    }
    Myfile.close();
}