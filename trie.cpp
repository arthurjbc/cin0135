#include <vector>
#include <string>
#include <iostream>

using namespace std;

template <typename T>
class Node {
    T val;
    vector<Node*> chd;
public:
    Node(const T& value) {
        val = value;
    }

    T const& Val(){
        return val;
    }
    size_t NChd() {
        return chd.size();
    }
    Node *Chd(size_t i) {
        return chd[i];
    } 
    void AddChd(Node *c) {
        chd.push_back(c);
    }
};


Node<string> *trie(const string nome, int i, Node<string> *root){
    string letraVal = string (1, nome[i]);
    Node<string> *letra = new Node<string>(letraVal);
    for (int j=0; j<root->NChd(); j++){
        if (letraVal==root->Chd(j)->Val()){
            trie (nome, i+1, root->Chd(j));
        }
    }
    
}

int main(){
    string termo;
    cin >> termo;
    Node<string> *root= new Node<string>("/");
    trie (termo, 0, root);
}