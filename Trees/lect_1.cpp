#include<iostream>
#include<queue>
using namespace std;


class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        this->data = val;
        left = NULL;
        right = NULL;
    }
};

Node* createTree(){
    //cout<<"Enter value for Node: "<<endl;
    int value;
    cin>>value;

    if(value==-1){
        return NULL;
    }
    else{
        //valid value
        Node* root = new Node(value);    // ek case hm solve kr liye baaki recursion kr lega
        //cout<<"adding left child for "<<value <<endl;
        root->left = createTree();    

        //cout<<"adding right child for "<<value<<endl;
        root->right = createTree();

        return root;
    }
}



// Tree traversal
// preorder (NLR)
// inorder (LNR)
// postorder (LRN)
// Level order traversal


void preOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    //NLR
    cout<<root->data;
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}


void inOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    // LNR
    inOrderTraversal(root->left);
    cout<<root->data;
    inOrderTraversal(root->right);
}

void postOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    // LRN
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data;
}

void levelOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    queue<Node*>q;
    q.push(root);

    while(!q.empty()){
        Node* front = q.front();
        q.pop();
        cout<<front->data<<" ";

        if(front->left != NULL){
            q.push(front->left);
        }
        if(front->right != NULL){
            q.push(front->right);
        }
    }

}


int main(){
    Node* root = createTree();
    levelOrderTraversal(root);


    return 0;
}