#include <iostream>
#include <cstddef>
using namespace std;

class vector{
    public:
        vector();
        ~vector();
        void vecAppend(int val);
        int operator[](size_t pos);
        void vecRemove(int val);
        int size(){return sz;};
        int capacity(){return cap;};

    private:
        size_t sz;
        size_t cap;
        void checkAndDouble();
        int *arr = nullptr;
};

vector::vector(){       //construtor
    sz=0;
    cap=1;
    arr=new int [cap];
}

vector::~vector(){      //destrutor
    delete arr;
}

void vector::checkAndDouble()       //checa se vai além da capacidade atual e dobra capcaidade
{    
    if (sz == cap){             //dobra capacidade por meio de um array temporario usada para armazenar
        int *arrNovo = new int [cap*2];
        for (int i=0; i<cap ; i++){
            arrNovo[i]=arr[i];
        }
        delete arr;
        arr = arrNovo;
        cap=cap*2;
    }
}

void vector::vecAppend(int val)     //usa a função de checagem e adiciona ao final do array usando o sz
{
    checkAndDouble();
    arr[sz++]=val;
}

int vector::operator[](size_t pos)      //VER AULA 12
{
    return arr[pos];
}

int main(int argc, char **argv){
    

    vector vetor;

    int n = stoi(argv[1]);
    for (int i=0; i<n ; i++){
        vetor.vecAppend(i);      
        //cout << "v[" << i << "] = " << vetor[i]<< endl;
    }
    cout << "size = " << vetor.size() << endl;
    cout << "size = " << vetor.capacity() << endl;

}