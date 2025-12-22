#include <iostream>
using namespace std;

struct node {
    int data;
    int key;
    node* next;
};

node* head = NULL;

void insertFirst(int key, int data) {
    node* link = new node;
    link->key = key;
    link->data = data;
    link->next = head;
    head = link;
}

void printList() {
    node* ptr = head;
    cout << "[ ";
    while (ptr != NULL) {
        cout << ptr->key << "," << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << "]\n";
}

node* deleteFirst() {
    if (head == NULL) return NULL;
    node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

node* find(int key) {
    node* cur = head;
    while (cur != NULL && cur->key != key)
        cur = cur->next;
    return cur;
}

void sortList() {
    for (node* i = head; i != NULL; i = i->next)
        for (node* j = i->next; j != NULL; j = j->next)
            if (i->data > j->data) {
                swap(i->data, j->data);
                swap(i->key, j->key);
            }
}

int main() {
    insertFirst(1, 10);
    insertFirst(2, 20);
    insertFirst(3, 30);

    cout << "Initial List: ";
    printList();

    cout << "Deleting first node.\n";
    deleteFirst();
    printList();

    cout << "Finding node with key 2.\n";
    node* f = find(2);
    if (f)
        cout << "Found node: (" << f->key << ", " << f->data << ")\n";
    else
        cout << "Node not found.\n";

    cout << "Sorting the list.\n";
    sortList();
    printList();

    return 0;
}
