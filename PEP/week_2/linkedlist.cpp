

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
        Node(int data){
            this->data=data;
            next=NULL;
        }
};

void printLinkedlist(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

Node * takeinput(){
    int data;
    cin>>data;
        Node *head = NULL;
        Node *tail = NULL;

    while(data!=-1){
        Node *newNode=new Node(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;

            tail=newNode;
        }
        cin>>data;
    }
    return head;
}




int main(){



    // creating objects statically
    // Node n1(10);
    // Node n2(20);
    // n1.next=&n2;

    // Node n3(30);
    // Node n4(40);
    // n2.next=&n3;
    // n3.next=&n4;


    // // creating objects dynamically
    // Node *n1=new Node(10);
    // Node *n2=new Node(20);
    // Node *n3=new Node(30);
    // Node *n4=new Node(40);
    // Node *n5=new Node(50);

    // n1->next=n2; n2->next=n3; n3->next=n4; n4->next=n5;


        // cout<<"n1= "<<n1<<endl;
        // cout<<"n1->data= "<<n1->data<<endl;
        // cout<<"n1->next= "<<n1->next<<endl;

        // cout<<"n1->next->data "<<n1->next->data<<endl;


     Node *head=takeinput();  // first node
    printLinkedlist(head);



    return 0;
}




// 1. Find length of linkedlist 
// 2. sum of linkedlist;
// 3. Delete at given pos in linkedlist 
// 4. insert at given pos in linkedlist
// 5. find midpoint of a linkedlist 
// 6. reverse a linkedlist 
// 7. check linkedlist is a palindrome or not  