// #include<iostream>
// #include<stack>
// using namespace std;


// int main(){
//     // creation
//     stack<int>s;

//     // insertion
//     s.push(10);
//     s.push(20);
//     s.push(30);

//     cout<<s.size()<<endl;
//     cout<<s.empty()<<endl;
//     cout<<s.top()<<endl;

//     s.pop();      // removal from top

//     cout<<s.size()<<endl;
//     cout<<s.empty()<<endl;
//     cout<<s.top()<<endl;
    



//     return 0;
// }


// stack implementation without STL

// #include<iostream>
// using namespace std;

// class Stack{
//     public:
//     int* arr;
//     int size;
//     int top;

//     Stack(int capacity){
//         arr = new int[capacity];
//         size = capacity;
//         top = -1;
//     }

//     void push(int value){
//         if(top == size-1){
//             cout<<"Stack overflow"<<endl;
//             return;
//         }
//         top++;
//         arr[top] = value;
//     }

//     void pop(){
//         if(top == -1){
//             cout<<"Stack underflow"<<endl;
//         }
//         arr[top] = 0;
//         top--;

//     }

//     int getsize(){
//         return top+1;

//     }

//     bool isempty(){
//         if(top==-1){
//             return true;
//         }
//         else{
//             return false;
//         }

//     }

//     int gettop(){
//         if(top == -1){
//             cout<<"Stack is already empty"<<endl;
//             return 0;
//         }
//         return arr[top];

//     }

//     void print(){
//         cout<<"printing stack: "<<endl;
//         for(int i=0;i<top;i++){
//             cout<<arr[top]<<endl;
//         }
//         cout<<endl;
//     }



// };


// int main(){
//     Stack s(5);
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);
//     s.push(60);
    

//     cout<<s.gettop()<<endl;
//     cout<<s.getsize()<<endl;
//     cout<<s.isempty()<<endl;

//     s.pop();
//     cout<<s.gettop()<<endl;
//     s.pop();s.pop();s.pop();
//     cout<<s.gettop()<<endl;


//     return 0;
// }




// implementation of two stack in an array

#include<iostream>
using namespace std;


class Stack{
    public:
    int* arr;
    int size;
    int top1;
    int top2;

    Stack(int capacity){
        arr = new int[capacity];
        size = capacity;
        top1 = -1;
        top2 = size;
    }

    void push1(int value){
        if(top2-top1==1){
            cout<<"stack overflow"<<endl;
        }
        else{
            top1++;
            arr[top1] = value;
        }

    }
    void push2(int value){
        if(top2-top1==1){
            cout<<"StackOverFlow"<<endl;
        }
        else{
            top2--;
            arr[top2] = value;
        }

    }

    void pop1(){
        if(top1==-1){
            cout<<"StackUnderFlow"<<endl;
        }
        else{
            arr[top1] = 0;
            top1--;
        }
    }

    void pop2(){
        if(top2==size){
            cout<<"StackUnderFlow"<<endl;
        }
        else{
            arr[top2] = 0;
            top2--;
        }

    }

    void print(){
        cout << "Top1: " << top1 << endl;
        cout << "Top2: " << top2 << endl;

        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};


int main(){

    Stack s(5);
    s.push1(10);
    //s.print();
    s.push2(50);
    //s.print();
    s.push1(20);
    s.push1(30);
    s.push2(40);
    s.print();
    s.pop1();
    s.pop2();
    s.print();

    return 0;
}



// // stack reverse

// #include<iostream>
// #include<stack>
// using namespace std;


// int main(){
//     stack<char>s;
//     string name = "swati";
//     for(int i=0;i<name.length();i++){
//         char ch = name[i];
//         s.push(ch);
//     }

//     while(!s.empty()){
//         cout<<s.top();
//         s.pop();
//     }



//     return 0;
// }





// // insertAtBottome

// #include<iostream>
// #include<stack>
// using namespace std;

// void insertAtBottom(stack<int>&
//     s,int value){
//     if(s.empty()){
//         s.push(value);
//         return;
//     }

//     int topelement = s.top();
//     s.pop();
//     insertAtBottom(s,value);

//     // Backtracking
//     s.push(topelement);
// }

// int main(){
//     stack<int>s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);

//     int value = 5;

//     insertAtBottom(s,value);


//     while(!s.empty()){
//         cout<<s.top()<<" ";
//         s.pop();
//     }



//     return 0;
// }