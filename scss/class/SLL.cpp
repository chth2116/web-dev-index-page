//implement whats defined in header
#include <iostream>
#include "SLL.h"

using namespace std;

//default constructor
SLL::SLL(){

}

//constructor that takes an int
SLL::SLL(int nodeID){
    //create head of list
    head = new Node;
    head -> next = NULL;
    head ->id = nodeID;
}

SLL::~SLL(){
  //free the memory from the linked list
  if(head!=nullptr){
    cout << "deleting head id " << head->id << endl;
    delete head;
  }
}

bool SLL::insertNodeAtEnd(int nodeID){
  Node *newNode = new Node;
  newNode->next = nullptr;
  newNode->id = nodeID;
  //check if head is null, if so, create a head node
  if (head == nullptr){
    head = newNode;
  }
  //if head is not null, add a new node at the end of the list
  else{
    Node *current = head;
    while(current->next != nullptr){
      current = current->next;
    }
    current -> next = newNode;
  }
  return true;
}

void SLL::printList(){
  Node *tmp;
  tmp = head;
  while (tmp != nullptr){
    cout << tmp->id << endl;
    tmp = tmp->next;
  }
}
