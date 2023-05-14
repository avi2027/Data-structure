#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;
        node* parent;
};

class BinaryTree{
    public: 
    node *root;
    node* allnode[6];
    
    BinaryTree(){
        root = NULL;
    }

    node* creatNewNode(int data){
        node* newNode = new node;
        newNode->data = data;
        newNode->left = NULL;
        newNode->right = NULL;
        newNode->parent = NULL;
        return newNode;
    }
    void build_binary_tree(){
        
        for(int i=0; i<6; i++){
            allnode[i] = creatNewNode(i);
        }
        allnode[0]->left = allnode[1];
        allnode[0]->right = allnode[2];

        allnode[1]->left = allnode[5];
        allnode[1]->parent = allnode[0];

        allnode[2]->left = allnode[3];
        allnode[2]->right = allnode[4];
        allnode[2]->parent = allnode[0];

        allnode[5]->parent = allnode[1];

        allnode[3]->parent = allnode[2];
        allnode[4]->parent = allnode[2];
    }

    void print_tree(){
        for(int i=0; i<6; i++){
            int p = -1;
            int l = -1;
            int r = -1;

            if(allnode[i]->parent != NULL){
                p = allnode[i]->parent->data;
            }
            if(allnode[i]->left != NULL){
                l = allnode[i]->left->data;
            }
            if(allnode[i]->right != NULL){
                r = allnode[i]->right->data;
            }

            cout << "Node " <<i<<": parent="<<p<<", left child="<<l<<
            "right chile="<<r<<"\n";
        }
    }

};
int main(){
    BinaryTree bt;
    bt.build_binary_tree();
    bt.print_tree();
    return 0;
}