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



template <typename T>
void printTree(Node<T> *root, int depth = 0) 
{
    if (root == nullptr) return;
    for (int i = 0; i < depth; i++)
        cout << "  ";
    cout << root->Val() << std::endl;
    for (int i = 0; i < root->NChd(); i++) 
    {
        auto c = root->Chd(i);
        printTree(c, depth+1);
    }


}

Node<int> *buildCuscuz(int max, int val){
    Node <int> *root = new Node<int>(val);
    for (int i=0; i<max; i++){
        if (val-i-1<0) return root;
        root -> AddChd(buildCuscuz(max, val-i-1));
    }
    return root;
}

Node <int> *checar(int seq[], int i, Node<int> *root){
    if (root == nullptr) return root;
    cout << root->Val() << std::endl;
    for (int i = 0; i < 5; i++) 
    {
        if (root->Val()==seq[i]){
            auto c = root->Chd(i);
            checar(seq, i+1, c);
        }else{
            cout << "n deu" <<endl;
        }
    }
    return root;
}

int main() {
    int n=5;
    int m=3;
    int sequencia[5]={5, 4, 2, 1, 2};
    //printTree(buildCuscuz(m, n));
    printTree(buildCuscuz(m, n));
    int a = checar(sequencia, 0, buildCuscuz(m, n))->Val();
    //cout << a<<endl;
}