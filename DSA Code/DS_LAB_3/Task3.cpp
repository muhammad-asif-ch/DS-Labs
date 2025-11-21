#include <iostream>
using namespace std;

// 1. Node structure (Encapsulates data and pointer)
class SNode {
public:
    int data;
    SNode* next;
    SNode(int val) : data(val), next(nullptr) {}
};

// 2. StackList Class: Manages the collection of SNodes.
class StackList {
private:
    SNode* head; // Head pointer serves as the 'top' of the stack.

public:
    // Constructor
    StackList() : head(nullptr) {}

    // Destructor (~StackList): CRITICAL for linked lists memory management.
    ~StackList() {
        SNode* current = head;
        // Loop through all nodes and delete them one by one.
        while (current != nullptr) {
            SNode* next_node = current->next;
            delete current;
            current = next_node;
        }
    }

    // Method 1: Push (Adding element always at the head/top)
    // O(1) Push: A new node is created and immediately becomes the new head.
    void push(int val) {
        SNode* newNode = new SNode(val);
        newNode->next = head;
        head = newNode;
        cout << "Pushed: " << val << endl;
    }

    // Method 2: Pop (Removing the top element always at the head)
    int pop() {
        // Check for Underflow
        if (head == nullptr) {
            cout << "\nERROR: STACK UNDERFLOW! (Stack is empty)." << endl;
            return -1;
        }
        // O(1) Pop: Remove node at head.
        SNode* temp = head;
        int val = temp->data;
        head = head->next; // Move head to the next node.
        delete temp;       // Free the memory of the removed node.
        return val;
    }

    // Helper to print the stack state
    void print() const {
        SNode* current = head;
        cout << "StackList (TOP->BOT): [ ";
        while (current != nullptr) {
            cout << current->data << (current->next == nullptr ? "" : ", ");
            current = current->next;
        }
        cout << "]" << endl;
    }
};

int main() {
    cout << "--- Task 3 Demonstration ---" << endl;
    StackList stack;
    stack.push(100);
    stack.push(200);
    stack.push(300);
    stack.print();
    cout << "Popped value: " << stack.pop() << endl;
    stack.push(400); // Add another element dynamically
    stack.print();
    // Destructor handles cleanup.
    return 0;
}