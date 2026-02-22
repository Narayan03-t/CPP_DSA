// Two Stack in a queue

#include <iostream>
#include <stack>
using namespace std;

class QueueUsingStacks {
private:
    stack<int> s1;  
    stack<int> s2;  

public:
    
    void enqueue(int x) {
        s1.push(x);
        cout << "Enqueued: " << x << endl;
    }

    
    int dequeue() {
        if (s2.empty()) {
            if (s1.empty()) {
                cout << "Queue is empty!" << endl;
                return -1;
            }
            
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        
        int result = s2.top();
        s2.pop();
        cout << "Dequeued: " << result << endl;
        return result;
    }

    
    void display() {
        cout << "Queue (front to back): ";
        
        
        stack<int> temp1 = s1;
        stack<int> temp2 = s2;
        
        
        stack<int> tempDisplay;
        while (!temp2.empty()) {
            tempDisplay.push(temp2.top());
            temp2.pop();
        }
        
        while (!tempDisplay.empty()) {
            cout << tempDisplay.top() << " ";
            tempDisplay.pop();
        }
        
        
        while (!temp1.empty()) {
            cout << temp1.top() << " ";
            temp1.pop();
        }
        
        cout << endl;
    }

    
    bool isEmpty() {
        return s1.empty() && s2.empty();
    }

    
    int front() {
        if (s2.empty()) {
            if (s1.empty()) {
                cout << "Queue is empty!" << endl;
                return -1;
            }
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }
};

int main() {
    QueueUsingStacks q;

    
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.display();

    
    q.dequeue();
    q.dequeue();
    q.display();

    
    q.enqueue(50);
    q.enqueue(60);
    q.display();

    
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.display();

    
    q.front();

    return 0;
}