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
    if (root==nullptr) return root;
    for (int i=max; i>=0; i--){
        root -> AddChd(new Node <int> (root->Val()-i));
        auto cur = root -> Chd(root->Val()-i);
    }
    return root;
}

int main() {
    int n=10;
    int m=2;
    printTree(buildCuscuz(m, n));
}