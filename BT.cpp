#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;

    node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

void level_order_traversal(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            //old level compleate done
            cout << endl;

            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout << temp -> data << " ";
            if(temp -> left){
                q.push(temp -> left);
            }
            if(temp -> right){
                q.push(temp -> right);
            }
        }
    }
}
// inorder traversal
void inorder(node* root){
    //base case
    if(root == NULL){
        return;
    }
    inorder(root -> left);
    cout << root -> data << " ";
    inorder(root -> right);

}
// preorder traversal
void preorder(node* root){
    if(root == NULL){
        return;
    }
    cout << root -> data << " ";
    preorder(root -> left);
    preorder(root -> right);
}
// postorder traversal
void postorder(node* root){
    if(root == NULL){
        return;
    }
    
    postorder(root -> left);
    postorder(root -> right);
    cout << root -> data << " ";
}

node* buildTree(node* root){
    int data;
    cout << "Enter the data: ";
    cin >> data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout << "Enter data for inserting int left of " << data << endl;
    root -> left = buildTree(root -> left);
    cout << "Enter data for inserting int right of " << data << endl;
    root -> right = buildTree(root -> right);
    return root;
}

int main(){
    node* root = NULL;

    //creating a tree
    root = buildTree(root);
    cout << endl;
    cout << "The compleate tree" << endl;
    level_order_traversal(root);

    cout << "inorder traversal is" << endl;
    inorder(root);
    cout << endl;


    cout << "preorder traversal is" << endl;
    preorder(root);
    cout << endl;

    cout << "postorder traversal is" << endl;
    postorder(root);

    return 0;
}

// 1 2 4 -1 -1 5 -1 -1 3 -1 6 -1 -1

// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
/*For new rep
git init
git add .
git commit -m "First Commit"
git push
git push --set-upstream origin master*/
/*Existing Rep:
git add .
git commit -m "First Commit"
git push*/
