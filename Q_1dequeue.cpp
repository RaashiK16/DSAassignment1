#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data) : data(data), next(nullptr), prev(nullptr) {}
};

class Dequeue {
public:
    Node* head;
    Node* tail;
    int size;
    Dequeue() : head(nullptr), tail(nullptr), size(0) {}

    void push_back(int num) {
        Node* new_node = new Node(num);
        if (size == 0) {
            head = new_node;
            tail = new_node;
        } else {
            new_node->prev = tail;
            tail->next = new_node;
            tail = new_node;
        }
        size++;
    }

    void push_front(int num) {
        Node* new_node = new Node(num);
        if (size == 0) {
            head = new_node;
            tail = new_node;
        } else {
            new_node->next = head;
            head->prev = new_node;
            head = new_node;
        }
        size++;
    }

    void pop_back() {
        if (size == 0) {
            cout<<("Dequeue is empty")<<endl;
        }
        if (size == 1) {
            delete head;
            head = nullptr;
            tail = nullptr;
        } else {
            Node* old_tail = tail;
            tail = tail->prev;
            tail->next = nullptr;
            delete old_tail;
        }
        size--;
    }

    void pop_front() {
        if (size == 0) {
            cout<<("Dequeue is empty")<<endl;
        }
        if (size == 1) {
            delete head;
            head = nullptr;
            tail = nullptr;
        } else {
            Node* old_head = head;
            head = head->next;
            head->prev = nullptr;
            delete old_head;
        }
        size--;
    }

    int front() {
        if (size == 0) {
            cout<<("Dequeue is empty")<<endl;
        }
        return head->data;
    }

    int back() {
        if (size == 0) {
            cout<<("Dequeue is empty")<<endl;
        }
        return tail->data;
    }

    
};

int main() {
    Dequeue dequeue;

    dequeue.push_back(5);
    dequeue.push_back(3);
    dequeue.push_front(8);
    dequeue.push_front(1);
    dequeue.push_back(7);

    cout << "Dequeue: ";
    for (Node* node = dequeue.head; node != nullptr; node = node->next) {
        cout << node->data << " ";
    }
    cout << endl;

    cout << "Front: " << dequeue.front() << endl;
    cout << "Back: " << dequeue.back() << endl;

    dequeue.pop_back();

    cout << "Dequeue after popping back: ";
    for (Node* node = dequeue.head; node != nullptr; node = node->next) {
        cout << node->data << " ";
    }
    cout << endl;

    return 0;
}