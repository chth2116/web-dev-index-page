#include <iostream>
#include "doublyLL.h"

using namespace std;

//default constructor
doublyLL::doublyLL(){

}
//overloaded constructor
doublyLL::doublyLL(int newKey){
  Node* first = new Node;
  first->key = newKey;
  first->next = NULL;
  first->previous = NULL;
  head = first;
}

doublyLL::~doublyLL(){

}

bool doublyLL::insertNodeAtEnd(int newKey){
  Node* newNode = new Node;
  newNode->key = newKey;

  if(tail == NULL){
    tail = newNode;
    tail->next = NULL;
    tail->previous = head;
    head->next = tail;


  }

else{
  //newNode->key = newKey;
  //tail->next->previous = newNode
  newNode->next = tail->next;
  tail->next = newNode;
  newNode->previous = tail;
  tail->next = newNode;
  tail = newNode;
}

  return true;
}


bool doublyLL::deleteNode(int removeKey){

    Node *current = head;

    while(current!=NULL){
      //if found the node with the city name, return that node
      if (current->key == removeKey){
        if(current->key==head->key){
          head->next->previous = NULL;
          head = head->next;
        }
        else if(current->key == tail->key){
          tail->previous->next = NULL;
          tail = tail->previous;
        }
        else {
        current->previous->next = current->next;
        current->next->previous = current->previous;
        }
      }

      // else if (current == tail){
      //   cout << removeKey << " not found" << endl;
      //   break;
      // }
      //if the node with the city name has not been found, move through to the next node

        current = current->next;
    }



  return true;
}

void doublyLL::print_list(){
  Node *current = head;
  while(current != NULL){
    cout << current->key << endl;
    current = current->next;
  }
  return;
}
