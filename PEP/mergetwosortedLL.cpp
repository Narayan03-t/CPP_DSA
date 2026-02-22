// mrege two sorted linkedlist in single linkedlist (avoid duplicates in output) 
// input1 = linkedlist1 = 1 3 5
//         linkedlist2 = 2 4 6
// output1 = 1 2 3 4 5 6



// input2 = linkedlist1 = 1 2 3 4 5
//         linkedlist2 = 2 4 4 6 8
// output = 1 2 3 4 5 6 8

#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

Node* mergeTwoSortedLists(Node* head1, Node* head2) {
    Node dummy(-1);  
    Node* tail = &dummy;

    int lastInserted = INT_MIN; 

    while (head1 != nullptr && head2 != nullptr) {
        if (head1->data < head2->data) {
            if (head1->data != lastInserted) {
                tail->next = new Node(head1->data);
                tail = tail->next;
                lastInserted = head1->data;
            }
            head1 = head1->next;
        } else if (head2->data < head1->data) {
            if (head2->data != lastInserted) {
                tail->next = new Node(head2->data);
                tail = tail->next;
                lastInserted = head2->data;
            }
            head2 = head2->next;
        } else {
            if (head1->data != lastInserted) {
                tail->next = new Node(head1->data);
                tail = tail->next;
                lastInserted = head1->data;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
    }

    while (head1 != nullptr) {
        if (head1->data != lastInserted) {
            tail->next = new Node(head1->data);
            tail = tail->next;
            lastInserted = head1->data;
        }
        head1 = head1->next;
    }

    while (head2 != nullptr) {
        if (head2->data != lastInserted) {
            tail->next = new Node(head2->data);
            tail = tail->next;
            lastInserted = head2->data;
        }
        head2 = head2->next;
    }

    return dummy.next;
}

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node* createList(initializer_list<int> vals) {
    Node* head = nullptr, *tail = nullptr;
    for (int v : vals) {
        Node* newNode = new Node(v);
        if (head == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}

int main() {
    Node* head1 = createList({1, 3, 5});
    Node* head2 = createList({2, 4, 6});
    Node* mergedHead1 = mergeTwoSortedLists(head1, head2);
    cout << "Output 1: ";
    printList(mergedHead1); 

    Node* head3 = createList({1, 2, 3, 4, 5});
    Node* head4 = createList({2, 4, 4, 6, 8});
    Node* mergedHead2 = mergeTwoSortedLists(head3, head4);
    cout << "Output 2: ";
    printList(mergedHead2); 

    return 0;
}