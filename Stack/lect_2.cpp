#include<iostream>
#include<stack>
using namespace std;


// print middle element of stack

void printMiddle(stack<int>& s, int count){
    // base case
    if(count == 0){
        cout<<s.top();
        return;
    }

    // 1 case mai solve karunga
    int topelement = s.top();
    s.pop();
    count--;

    // baki recursion solve karega 
    printMiddle(s,count);


    // backtracking    (to maintain the original stack as it is)
    s.push(topelement);
}


// check sorted

bool checkSorted(stack<int>& s,int element1){
    // base case
    if(s.empty()){
        return true;
    }

    int element2 = s.top();
    s.pop();
    if(element2<element1){
        bool recursionans = checkSorted(s,element2);
        return recursionans;
    }
    else{
        return false;
    }
}








// reverse a stack

void insertAtBottom(stack<int>& s,int val){
    // base case
    if(s.empty()){
        s.push(val);
        return;
    }

    int topElement = s.top();
    s.pop();
    insertAtBottom(s,val);

    // backtrack
    s.push(topElement);
}

void reverseStack(stack<int>& s){
    // base case
    if(s.empty()){
        return;
    }

    // 1 case mai solve karunga
    int topE = s.top();
    s.pop();

    reverseStack(s);

    insertAtBottom(s,topE);
}


void print(stack<int>& s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}









// sorted insert   (insert a element in sorted way)

void insertSorted(stack<int>& s,int val){
    if(s.empty()){
        s.push(val);
        return;
    }
    if(!s.empty() && s.top()<val){
        s.push(val);
        return;
    }

    // ek case mai solve karunga
    int topE = s.top();
    s.pop();
    insertSorted(s,val);

    // backtrack
    s.push(topE);
}





int main(){
    // stack<int>s;
    // s.push(10);
    // s.push(20);
    // s.push(30);
    // s.push(40);
    // s.push(50);
    // int count = s.size()/2;

    // printMiddle(s,count);





    // stack<int>s;
    // s.push(10);
    // s.push(20);
    // s.push(30);
    // s.push(40);
    // s.push(50);

    // int element1 = INT_MAX;
    // cout<<checkSorted(s,element1)<<endl;






    // stack<int>s;
    // s.push(10);
    // s.push(20);
    // s.push(30);
    // s.push(40);
    // s.push(50);
    
    // reverseStack(s);
    // print(s);













    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    
    int val = 23;
    insertSorted(s,val);
    print(s);









    return 0;
}












// Leetcode 20--------------very important

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0; i<s.length(); i++) {
            char ch = s[i];

            //ch -> open/close bracket
            //open ->  sirf push krta hu
            //close -> isme check krta hu k same type ka open h ya nahi

            if(ch == '(' || ch == '[' || ch == '{') {
                st.push(ch);
            }
            else {
                //mujhe close bracket mila h 
                //close bracket k case me 
                //main stack k top pr jata hu and check krta hu
                //k mujhe same type ka open bracket mila ya nahi 
                if(ch == ')' && !st.empty() && st.top() == '(') {
                    //bracket match -> cancel out 
                    st.pop();
                }
                else if(ch == ']' && !st.empty() && st.top() == '[') {
                    //bracket match
                    st.pop();
                }
                else if(ch == '}' && !st.empty() && st.top() == '{') {
                    //bracket match
                    st.pop();
                }
                else {
                    //bracket not-match
                    return false;
                }
            }
        }
        //check stack ka size here 
        if(st.size() == 0) {
            return true;
        }
        else {
            return false;
        }
    }
};