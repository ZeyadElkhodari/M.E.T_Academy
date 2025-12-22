#include <iostream>
using namespace std;

int stack[5], top = 0;

void push(int value) {
    if (top == 5) cout << "Error: Overflow\n\n";
    else stack[top++] = value;
}

int pop() {
    if (top == 0) {
        cout << "Error: Underflow.\n";
        return -1;
    }
    return stack[--top];
}

int stack_is_empty() { return top == 0; }

int top_element() { return stack[top - 1]; }

void traverse() {
    if (top == 0) { cout << "The stack is empty.\n\n"; return; }
    cout << "Stack elements:\n";
    for (int i = top - 1; i >= 0; i--) cout << stack[i] << "\n";
}

int main() {
    int choice, element;
    while (true) {
        cout << "1.Push  2.Pop  3.Top  4.IsEmpty  5.Traverse  6.Exit\nEnter choice: ";
        cin >> choice;
        switch (choice) {
        case 1: {
            cout << "Enter value: "; cin >> element;
            push(element);
            break;
        }
        case 2: {
            element = pop();
            if (element != -1) cout << "Removed: " << element << "\n";
            break;
        }
        case 3: {
            if (!stack_is_empty()) cout << "Top: " << top_element() << "\n";
            else cout << "Stack is empty.\n";
            break;
        }
        case 4: {
            cout << (stack_is_empty() ? "Stack is empty.\n" : "Stack isn't empty.\n");
            break;
        }
        case 5:
            traverse();
            break;
        case 6:
            return 0;
        default:
            cout << "Invalid choice.\n";
        }
    }
}
