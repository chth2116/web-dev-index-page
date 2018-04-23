#include <iostream>
using namespace std;

//node implementation for doubly linked list
struct Node {
int key;
Node* previous;
Node* next;
};

class doublyLL {
private:
//Node* createNode(int,Node*,Node*);
Node* head = NULL;
Node* tail = NULL;
public:
doublyLL(); //default constructor
doublyLL(int); //overloaded constructor
~doublyLL(); //destructor
bool insertNodeAtEnd(int);
bool deleteNode(int);
void print_list();
};
