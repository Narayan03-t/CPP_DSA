#include<iostream>
//#include<stack>
using namespace std;

class stack{
    int *arr;
    int capacity;
    int topindex;
    public:
            stack(int size){
                arr = new int[size];
                topindex = -1;
            }
    
    bool empty(){
        if(topindex <0){
            return true;
        }
        else{
            return false;
        }
      
    }
    int top(){
      if(topindex<0){
        cout<<"stack is underflow"<<endl;
        return -1;
      }
      return arr[topindex];
    }





    void push(int data){
        if(topindex +1 >= capacity){
            cout<<"stackoverflow"<<endl;
            return;

        }
        arr[++topindex] = data;
    }
    
    int pop(){
        if(topindex==-1){
            cout<<"stackunderflow can't delete"<<endl;
            return -1;
        }
        int deletedelement = arr[topindex];
        topindex--;
        return deletedelement;
    }
};


class Node{
public:
    int data;
    Node *next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
void printLinkedList(Node* head) {
    while(head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main(){

    // stack<int> s1;

    // for(int i=1;i<=10;i++){
    //     if(i%3==0){
    //         continue;
    //     }
    //     s1.push(i);
    // }

    // while(!s1.empty()){
    //     int x = s1.top();
    //     s1.pop();
    //     cout<<x<<" ";
    // }

    // string str = "abcd";
    // stack<char>s1;
    // for(char ch : str){
    //     s1.push(ch);
    // }
    // while(!str.empty()){
    //     cout<<(char)s1.top()<<" ";
    //     s1.pop();
    // }

    stack s1(3);
    // Push elements
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);  
    
    cout << "Top element: " << s1.top() << endl;

    
    while (!s1.empty()) {
        cout << "Popped: " << s1.pop() << endl;
    }

    
    s1.pop();





    Node* n1 = new Node(100);
    Node* n2 = new Node(200);
    Node* n3 = new Node(300);
    n1->next = n2;
    n2->next = n3;


    cout << "Linked List: ";
    printLinkedList(n1);

    
    delete n1;
    delete n2;
    delete n3;


    return 0;
}


// leetcode 155
// leetcode 739
// leetcode 844
// leetcode 1047