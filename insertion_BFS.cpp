
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

    void Insertion(int data){
        node* newnode = creatNewNode(data);

        //base case
        if(root == NULL){
            root = newnode;
            return;
        }

        queue<node*>q;
        q.push(root);
        //q.push(NULL);

        while(!q.empty()){
            node* temp = q.front();
            q.pop();
            
            if(temp->left != NULL){
                q.push(temp->left);
            }
            else{
                temp->left = newnode;
                newnode->parent = temp;
                return;
            }
            if(temp->right !=NULL){
                q.push(temp -> right);
            }
            else{
                temp->right = newnode;
                newnode->parent = temp;
                return;
            }
        }
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
  
};

int main(){
    BinaryTree bt;
    bt.Insertion(0);
    bt.Insertion(1);
    bt.Insertion(2);
    bt.Insertion(3);
    bt.Insertion(4);
    bt.Insertion(5);
    bt.Insertion(6);

    bt.BFS();
    cout<<endl;

    return 0;
}