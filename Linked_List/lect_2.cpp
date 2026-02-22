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

    insertAtHead(10,head,tail);
    print(head);

    insertAtHead(5,head,tail);
    print(head);
    insertAtHead(1,head,tail);
    print(head);


    return 0;
}