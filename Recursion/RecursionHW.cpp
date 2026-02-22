// # solve using Recursion
// Tower of honoi
// finding subsets with given sum
// Find all posible permutation of array
// reverse Linked List
// array rotation with K- given step
// Checking String Palindrome
// Find nth fibonacci number

// given an array of distinct integer, return all possible permutation. implement solution using recursion   




// Solve these Leetcode Question of recursion 
// coin change 
// cut into segment
// house robber
// integer to english word 
// climbing stairs 
// perfect square
// minimum cost for tickets
// maximum sum of non adjacent elements 
// reverse a string using recursion 
// subsequence of string 






#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s, int start, int end) {
    if (start >= end) return true;
    if (s[start] != s[end]) return false;
    return checkPalindrome(s, start + 1, end - 1);
}

long long fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }
    towerOfHanoi(n - 1, source, auxiliary, destination);
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;
    towerOfHanoi(n - 1, auxiliary, destination, source);
}

void findSubsetsWithSum(vector<int>& arr, int idx, int targetSum, int currentSum, vector<int>& current) {
    if (currentSum == targetSum) {
        for (int num : current) {
            cout << num << " ";
        }
        cout << endl;
        return;
    }
    
    if (idx >= arr.size() || currentSum > targetSum) {
        return;
    }
    
    current.push_back(arr[idx]);
    findSubsetsWithSum(arr, idx + 1, targetSum, currentSum + arr[idx], current);
    current.pop_back();
    
    findSubsetsWithSum(arr, idx + 1, targetSum, currentSum, current);
}

void generatePermutations(vector<int>& arr, int idx, vector<vector<int>>& result) {
    if (idx == arr.size()) {
        result.push_back(arr);
        return;
    }
    
    for (int i = idx; i < arr.size(); i++) {
        swap(arr[idx], arr[i]);
        generatePermutations(arr, idx + 1, result);
        swap(arr[idx], arr[i]);
    }
}

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

Node* reverseLinkedList(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }
    
    Node* newHead = reverseLinkedList(head->next);
    head->next->next = head;
    head->next = nullptr;
    return newHead;
}

void rotateArray(vector<int>& arr, int k, int n, int idx = 0) {
    k = k % n;
    if (k == 0 || idx == n) {
        return;
    }
    
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
    rotateArray(arr, k, n, idx + 1);
}

int main() {
    cout << "1. String Palindrome Check:\n";
    string str = "racecar";
    if (checkPalindrome(str, 0, str.length() - 1)) {
        cout << str << " is a palindrome\n\n";
    } else {
        cout << str << " is not a palindrome\n\n";
    }
    
    cout << "2. Fibonacci Number (n=10):\n";
    cout << "10th Fibonacci number: " << fibonacci(10) << "\n\n";
    
    cout << "3. Tower of Hanoi (n=3):\n";
    towerOfHanoi(3, 'A', 'C', 'B');
    cout << "\n";
    
    cout << "4. Subsets with Sum (target=6):\n";
    vector<int> arr = {2, 3, 1, 4};
    vector<int> current;
    findSubsetsWithSum(arr, 0, 6, 0, current);
    cout << "\n";
    
    cout << "5. All Permutations:\n";
    vector<int> perm = {1, 2, 3};
    vector<vector<int>> result;
    generatePermutations(perm, 0, result);
    for (auto& p : result) {
        for (int num : p) {
            cout << num << " ";
        }
        cout << endl;
    }
    cout << "\n";
    
    cout << "6. Reverse Linked List:\n";
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    
    cout << "Original: ";
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    
    head = reverseLinkedList(head);
    cout << "Reversed: ";
    temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n\n";
    
    cout << "7. Array Rotation (k=2):\n";
    vector<int> rotateArr = {1, 2, 3, 4, 5};
    cout << "Original: ";
    for (int num : rotateArr) cout << num << " ";
    cout << endl;
    
    rotateArray(rotateArr, 2, rotateArr.size());
    cout << "After rotation by 2: ";
    for (int num : rotateArr) cout << num << " ";
    cout << endl;
    
    return 0;
}

    
 



