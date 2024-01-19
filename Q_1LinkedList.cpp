#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
    private:
        Node* head; // head node
    public:
        
        LinkedList() {
            head = NULL;
        }

        
        void insert_at_start(int num) {
            Node* newNode = new Node();
            newNode->data = num; 
            newNode->next = head; 
            head = newNode;
            // this function inserts a node at the startby creating a new node and placing it at the start of the list
        }

        
        void remove_from_start() {
            if(head == NULL) {
                cout << "The list is empty. Unable to remove." << endl;
                return;
            }
            Node* temp = head; 
            head = head->next; // Move the head to the next node
            delete temp; 
        }

        
        void insert_at_end(int num) {
            Node* newNode = new Node(); 
            newNode->data = num; 
            newNode->next = NULL; 
            if(head == NULL) {
                head = newNode; 
            } else {
                Node* temp = head; 
                while(temp->next != NULL) { // Traverse the list to raech the last node
                    temp = temp->next; 
                }
                temp->next = newNode; 
            }
        }

        
        void remove_from_end() {
            if(head == NULL) {
                cout << "The list is empty. Unable to remove." << endl;
                return;
            }
            if(head->next == NULL) {
                // checking if there is only one node in the list
                delete head; 
                head = NULL;
                return;
            }
            Node* temp = head; 
            while(temp->next->next != NULL) { // Traverse the list to reach the second last node
                temp = temp->next; 
            }
            delete temp->next;
            temp->next = NULL; 
        }

        
        int front() {
            if(head == NULL) {
                cout << "The list is empty." << endl;
                return -1;
            }
            return head->data; // Returning the data of the head node
        }

       
        int last() {
            if(head == NULL) {
                cout << "The list is empty." << endl;
                return -1;
            }
            Node* temp = head; 
            while(temp->next != NULL) { // Traverse the list to reach last node
                temp = temp->next; 
            }
            return temp->data; 
        }

        
        void traverse() {
            // to print all the elements
            if(head == NULL) {
                cout << "The list is empty." << endl;
                return;
            }
            Node* temp = head; 
            while(temp != NULL) { 
                cout << temp->data << " "; 
                temp = temp->next; 
            }
            cout << endl;
        }
};


