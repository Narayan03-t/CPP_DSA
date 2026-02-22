#include<iostream>
using namespace std;

// single linked list

class Node{
    public:
    int data;
    Node* next;
    
    Node(int value){
        this->data = value;
        this->next = NULL;
    }

};



Node* insertAtHead(int value,Node* &head,Node* &tail){
     
    if(head == NULL && tail ==NULL){
        
        Node* newNode = new Node(value);
        
        head = newNode; 
        
        tail = newNode;
    }

    else{
       
        Node* newNode = new Node(value);
        
        newNode->next = head; 
        
        head = newNode;
    }
    return head;
}

Node* insertAtTail(int value,Node* &head,Node* &tail){
    
    if(head == NULL && tail == NULL){
        
        Node* newNode = new Node(value);
         
        head = newNode;
        
        tail = newNode;
    }

    
    else{
        
        Node* newNode = new Node(value);

        tail->next = newNode;
 
        tail = newNode;
    }
    return head;

}

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int getlength(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        temp = temp->next;
        len++;
    }
    return len;
}


Node* reverseLinkedList(Node* head){
    Node* prev = NULL;     
    Node* curr = head;      
    Node* next = NULL;      
    
    while(curr != NULL){
        
        next = curr->next;
        
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    
    
    return prev;
}

bool checkCycle(Node* head){
    if(head == NULL){
        return false;
    }
    
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            return true;
        }
    }
    return false;
}





int main(){
    Node* head = NULL;
    Node* tail = NULL;

    head = insertAtHead(10,head,tail);
    //print(head);

    head = insertAtHead(20,head,tail);
    //print(head);
    head = insertAtHead(30,head,tail);

    //print(head);

    // Node* head = NULL;
    // Node* tail = NULL;

    // head = insertAtTail(101,head,tail);
    // print(head);

    head = insertAtTail(102,head,tail);
    //print(head);

    head = insertAtHead(100,head,tail);
    //print(head);

    // cout<<"Linked list before reverse: ";
    // print(head);
    
    // Reverse the linked list
    // head = reverseLinkedList(head);
    
    // cout<<"Linked list after reverse: ";
    // print(head);

    checkCycle(head);

    return 0;
}







// check whether a linkedlist is palindrome or not?  
// a singly linkedlist given, where each node contain an integer value,  rearrange linkedlist in such way where all odd position element appear first followed bt even number   [input = 10,20,30,40,50   output = 10.30,50,20,40]

// swap posiotion of kth node one from beginning , one from end [input: 3 9 14 21 27   ,k=2 , output = 3 21 14 9 27]

// split linkedlist into n parts where each node is a  valid linkedlist  