same value in the list (like ‘4’), and print out the list.
You also need to create a class for this doubly linked list. For example,
class doublyLL {
private:
Node* createNode(int,Node*,Node*);
Node* head = nullptr;
Node* tail = nullptr;
public:
bool insertNodeAtEnd(int);
bool deleteNode(int);
void print_list();
doublyLL(); //default constructor
doublyLL(int); //overloaded constructor
~doublyLL(); //destructor
};
