
// Binary Tree implement
#include<iostream>
#include<queue>
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
        node* allnode[6];
        
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
        root = allnode[0];
    }

    void BFS(){
        queue<node*>q;
        q.push(root);
        //q.push(NULL);

        while(!q.empty()){
            node* temp = q.front();
            q.pop();
            int p = -1, l = -1, r = -1;
            if(temp->left != NULL){
                l = temp->left->data;
                q.push(temp->left);
            }
            if(temp->right !=NULL){
                r = temp -> right -> data;
                q.push(temp -> right);
            }
            if(temp->parent != NULL){
                p = temp->parent->data;
            }
            cout <<"Node data: "<<temp->data<<", left child: " << l;
            cout<<", Right child: "<< r <<", Parent data: "<< p <<endl;
        }
    }

    // DFS visit
    void DFS_visit(node *a){
        if(a == NULL){
            return;
        }
        
        cout <<a->data<<" ";
        DFS_visit(a->left);
        DFS_visit(a->right);
    }
    // Inorder traversal
    void inorder(node *a){
        if(a == NULL){
            return;
        }
        inorder(a->left);
        cout <<a->data<<" ";        
        inorder(a->right);
    }

    // Preorder traversal
    void preorder(node *a){
        if(a == NULL){
            return;
        }

        cout <<a->data<<" "; 
        preorder(a->left);              
        preorder(a->right);
    }

    // Postorder traversal
    void postorder(node *a){
        if(a == NULL){
            return;
        }

        postorder(a->left);              
        postorder(a->right);
        cout <<a->data<<" "; 
    }

};

int main(){
    BinaryTree bt;
    bt.build_binary_tree();
    bt.BFS();
    cout << endl;

    cout << "DFS node data:"<<endl; 
    bt.DFS_visit(bt.root);
    cout << endl;

    cout << "Inorder Traversal is: ";
    bt.inorder(bt.root);
    cout << endl;

    cout << "Preorder Traversal is: ";
    bt.preorder(bt.root);
    cout << endl;

    cout << "Postorder Traversal is: ";
    bt.postorder(bt.root);
    cout << endl;
    cout << endl;
    return 0;
}