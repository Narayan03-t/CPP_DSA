#include<iostream>
using namespace std;

// single linked list

class Node{
    public:
    int data;
    Node* next;
    // Node(){
    //     data =0;
    //     next = NULL;
    // }
    // constructor
    Node(int value){
        this->data = value;
        this->next = NULL;
    }

};

Node* insertAtHead(int value,Node* &head,Node* &tail){
    // when LL is empty then head and tail both point to NULL 
    if(head == NULL && tail ==NULL){
        // step 1 = create a new node 
        Node* newNode = new Node(value);
        // step 2 = head ko newnode pr lagao
        head = newNode; 
        // step 3 = tail ko newnode pr lagao
        tail = newNode;
    }

    else{
        // when LL is not empty 
        // step 1: create a newNode
        Node* newNode = new Node(value);
        // step 23: newNode ka connect kro head node se 
        newNode->next = head; 
        // step 3: head ko update kro 
        head = newNode;
    }
    return head;
}

Node* insertAtTail(int value,Node* &head,Node* &tail){
    // when LL is empty 
    if(head == NULL && tail == NULL){
        // step 1: create newnode 
        Node* newNode = new Node(value);
        // step 2: head ko newnode pr lagao 
        head = newNode;
        // step 3: tail ko bhi newNode pr lagao 
        tail = newNode;
    }

    // when LL is not empty
    else{
        // step 1: create a newnode 
        Node* newNode = new Node(value);

        // step 2: tail ko newnode pr lagao 
        tail->next = newNode;

        // step 3: tail ko update kro 
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

Node* insertAtPosition(int position,int value,Node* head,Node* tail){
    int length = getlength(head);
    
    if(position == 1){
        head = insertAtHead(value,head,tail);
    }
    
    else if(position == length+1){
        head = insertAtTail(value,head,tail);
    }
    else{
        Node* temp = head;
        for(int i=0;i<position-2;i++){
            temp = temp->next;
        }

        Node* newNode = new Node(value);
        newNode->next = temp->next;
        temp->next = newNode;
    }
    return head;
}



bool searchinLL(int target,Node* head){
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == target){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int searchinLLbypos(int target,Node* head){
    int pos =1;
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == target){
            return pos;
        }
        temp = temp->next;
        pos++;
    }
    return -1;
    
}

void deletenodeofLLbypos(int pos,Node* &head,Node* &tail){
    // case 1: if LL is empty teh we cannot delete
    if(head == NULL && tail == NULL){
        cout<<"Linked list can't be delete"<<endl;
    }
    //  case 2: if LL has only one node (single node)
    else if(head == tail){
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
    }
    // case 3: multiple node 
    else{
        if(pos==1){
            Node* temp = head;
            head = temp->next;
            temp->next = NULL;
            delete temp;
        }
        else{
            Node* temp = head;
            for(int i=0;i<pos-2;i++){
                temp = temp->next;
            }

            Node* nodeTodelete = temp->next;
            temp->next = nodeTodelete->next;
            nodeTodelete->next = NULL;
            delete nodeTodelete;
        }
    }

}



int main(){
    // Node* head = NULL;
    // Node* tail = NULL;

    // head = insertAtHead(10,head,tail);
    // print(head);

    // head = insertAtHead(20,head,tail);
    // print(head);
    // head = insertAtHead(30,head,tail);

    // print(head);

    Node* head = NULL;
    Node* tail = NULL;

    // head = insertAtTail(101,head,tail);
    // print(head);

    head = insertAtTail(102,head,tail);
    print(head);

    head = insertAtHead(100,head,tail);
    print(head);

    head = insertAtPosition(2,101,head,tail);
    print(head);

    
    //cout<<searchinLL(105,head);

    //cout<<searchinLLbypos(100,head);

    deletenodeofLLbypos(1,head,tail);
    print(head);

    return 0;
}







// int main(){
//     // stack memory 
//     // Node first;

//     // Dynamic memory 
//     //Node* first = new Node(10);

//     return 0;
// }
