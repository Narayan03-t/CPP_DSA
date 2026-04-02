// #include<iostream>
// #include<stack>
// using namespace std;




// int main(){

//     stack<int>s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     cout<<s.top();
//     cout<<endl;
//     cout<<s.size()<<endl;
//     s.pop();
//     cout<<s.size();


//     return 0;
// }



// #include<iostream>
// using namespace std;


// class stack{
//     public:
//     int* arr;
//     int size;
//     int top;

//     stack(int capacity){
//         arr = new int[capacity];
//         size = capacity;
//         top = -1;
//     }

//     void push(int value){
//         if(top == size-1){
//             // stack pehle se full hai, to ab push krne par stackoverflow ho jaayega
//             cout<<"Stack is already full, stack overflow"<<endl;
//             return;
//         }
//         else{
//             top++;
//             arr[top] = value;
//         }

//     }

//     void pop(){
//         if(top==-1){
//             // stack pehle se khhali hai
//             cout<<"Stack underflow"<<endl;
//         }
//         arr[top]=0;
//         top--;

//     }

//     void getsize(){
//         cout<<top+1<<endl;


//     }

//     int gettop(){
//         if(top==-1){
//             cout<<"stack is already empty";
//             return 0;
//         }
        
//         return arr[top];
        
        

//     }
//     bool isEmpty(){
//         if(top==-1){
//             return true;
//         }
//         else{
//             return false;
//         }

//     }
//     void print(){
//         cout<<"printng stack"<<endl;
//         for(int i=top;i>=0;i--){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
// };


// int main(){
//     stack s(5);

//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.print();

//     s.pop();
//     s.print();
//     s.getsize();
//     s.isEmpty();

//     return 0;
// }





// Implement two stack in an array

#include<iostream>
using namespace std;

class stack{
    int* arr;
    int size;
    int top1;
    int top2;

    stack(int capacity){
        arr = new int[capacity];

    }


};


int main(){



    return 0;
}

// reverse string using stack
// print middle of stack