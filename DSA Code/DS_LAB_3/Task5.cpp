#include <iostream>
using namespace std;

// Define the maximum size for the Array-based stack (Fixed Size)
#define MAX_SIZE 5 

// C++ Class manages a fixed-size integer array
class StackArray {
private:
    int data[MAX_SIZE]; // The fixed-size array storage
    int top;            // Index of the top element (serves as the LIFO tracker)

public:
    // Constructor initializes the stack as empty
    StackArray() : top(-1) {
        cout << "StackArray initialized (MAX Size: " << MAX_SIZE << ")" << endl;
    }

    // Method 1: Push (Adding an element to the top)
    void push(int val) {
        // Check for Overflow (the array is full)
        if (top == MAX_SIZE - 1) {
            cout << "\nERROR: STACK OVERFLOW! Cannot push " << val << " (Array is full)." << endl;
            return;
        }

        // O(1) Push operation: Increment top, then store value.
        data[++top] = val;
        cout << "Pushed: " << val << endl;
    }

    // Method 2: Pop (Removing and returning the top element)
    int pop() {
        // Check for Underflow (The array is empty)
        if (top == -1) {
            cout << "\nERROR: STACK UNDERFLOW! (Stack is empty)." << endl;
            return -1;
        }
        // O(1) Pop operation: Get value, then decrement top (LIFO).
        return data[top--];
    }

    // Method 3: Peek (Viewing the top element without removing it)
    int peek() const {
        if (top == -1) return -1;
        return data[top];
    }

    // Helper to print the stack state
    void print() const {
        cout << "Stack (TOP->BOTTOM): [ ";
        for (int i = top; i >= 0; --i) {
            cout << data[i] << (i == 0 ? "" : ", ");
        }
        cout << "]" << endl;
    }
};

// =======================
// MAIN DEMONSTRATION
// =======================
int main() {
    cout << "--- TASK 5: STACK ARRAY DEMO ---" << endl;

    StackArray myStack;

    // Pushing elements up to the capacity (5 elements)
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    myStack.push(40);
    myStack.push(50);
    myStack.print();

    // Trigger Overflow error
    myStack.push(60); 

    // Peek and Pop
    cout << "\nPeek (Top value): " << myStack.peek() << endl; // Should be 50
    cout << "Popped value: " << myStack.pop() << endl; // Should be 50
    myStack.print();

    // Empty the stack
    myStack.pop();
    myStack.pop();
    myStack.pop();
    myStack.pop();

    // Trigger Underflow error
    myStack.pop();

    cout << "\n--- Demo Complete ---" << endl;
    return 0;
}