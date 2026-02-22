#include<iostream>
using namespace std;
// Doubly Linked List

class Node{
    public:
    int data;
    Node* next;
    Node* prev;


    Node(int value){
        data = value;
        prev = NULL;
        next = NULL;
    }
};


void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void deleteAtbegan(Node* &head){
    // case 1: if LL is empty'
    if(head==NULL){
        cout<<"Can't be deleted"<<endl;
    }
    else{
        Node* temp = head;
        head = temp->next;
        head->prev = NULL;
        
        delete temp;

    }
}

void insertAtHead(int value,Node* &head,Node* &tail){
    // case 1: if LL is empty
    if(head==NULL && tail==NULL){
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }

    // case 2: if LL is not empty
    else{
        Node* newNode = new Node(value);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;

    }
}




int main(){
    Node* head = NULL;
    Node* tail = NULL;

    int n;
    cout << "Enter the number of elements to insert: ";
    cin >> n;

    cout << "Enter " << n << " values to insert at head:" << endl;
    for(int i = 0; i < n; i++){
        int value;
        cout << "Enter value " << (i+1) << ": ";
        cin >> value;
        insertAtHead(value, head, tail);
    }

    cout << "Doubly Linked List: "<<endl;

    print(head);
    deleteAtbegan(head);
    print(head);
    return 0;
}