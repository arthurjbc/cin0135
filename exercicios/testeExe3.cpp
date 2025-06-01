#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream arquivo("notas_alunos.txt");
    std::string linha;

    if (arquivo.is_open()) {
        while (std::getline(arquivo, linha)) {
            std::cout << linha << std::endl;
        }
        arquivo.close();
    } else {
        std::cerr << "Não foi possível abrir o arquivo.\n";
    }

    return 0;
}
