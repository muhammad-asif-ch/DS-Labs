#include <iostream>
using namespace std;

#define MAX_SIZE 5 // Required for StackArray

// --- StackArray Definition (Minimal for Context) ---
class StackArray {
private:
    int data[MAX_SIZE];
    int top;
public:
    StackArray() : top(-1) {}
    void push(int val) { 
        if (top == MAX_SIZE - 1) { 
            cout << "StackArray Overflow. "; 
            return; 
        } 
        data[++top] = val; 
    }
    int pop() { 
        if (top == -1) { 
            cout << "StackArray Underflow. "; 
            return -1; 
        } 
        return data[top--]; 
    }
    void print() const { 
        cout << "Array Stack: [ "; 
        for (int i = top; i >= 0; --i) { 
            cout << data[i] << " "; 
        } 
        cout << "]" << endl; 
    }
};

// --- SNode Definition ---
class SNode {
public:
    int data;
    SNode* next;
    SNode(int val) : data(val), next(nullptr) {}
};

// --- StackList Definition (Minimal for Context) ---
class StackList {
private:
    SNode* head;
public:
    StackList() : head(nullptr) {}

    // Destructor is CRITICAL for linked lists memory management.
    ~StackList() { 
        SNode* current = head; 
        while (current != nullptr) { 
            SNode* next_node = current->next; 
            delete current; 
            current = next_node; 
        } 
    } 
    
    void push(int val) { 
        SNode* newNode = new SNode(val); 
        newNode->next = head; 
        head = newNode; 
    }
    
    int pop() { 
        if (head == nullptr) { 
            cout << "StackList Underflow. ";
            return -1; 
        } 
        SNode* temp = head; 
        int val = temp->data; 
        head = head->next; 
        delete temp; 
        return val; 
    }
    
    void print() const { 
        SNode* current = head; 
        cout << "List Stack: [ "; 
        while (current != nullptr) { 
            cout << current->data << " "; 
            current = current->next; 
        } 
        cout << "]" << endl;
    }
};

// Demonstration function that uses the same interface for both implementations
void demonstrateADT(StackArray& arrayStack, StackList& listStack) {
    cout << "Pushing 10 and 20 onto both implementations." << endl;

    // Use interface on Array Stack
    arrayStack.push(10);
    arrayStack.push(20);
    cout << "Array Stack Pop: " << arrayStack.pop() << endl; // Pops 20

    // Use interface on Linked List stack
    listStack.push(100);
    listStack.push(200);
    cout << "List Stack Pop: " << listStack.pop() << endl; // Pops 200

    arrayStack.print();
    listStack.print();
}

int main() {
    cout << "--- Task 4 Demonstration ---" << endl;
    StackArray stack1;
    StackList stack2;

    demonstrateADT(stack1, stack2);

    // Destructors handle cleanup
    return 0;
}