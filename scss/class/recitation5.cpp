#include <iostream>
#include "doublyLL.h"

using namespace std;

int main(){
  doublyLL object(1);
  object.insertNodeAtEnd(1);
  object.insertNodeAtEnd(1);
  object.insertNodeAtEnd(1);
  object.insertNodeAtEnd(1);
  object.insertNodeAtEnd(1);
  object.insertNodeAtEnd(4);
  object.insertNodeAtEnd(2);
  object.insertNodeAtEnd(3);
  object.insertNodeAtEnd(1);
  object.insertNodeAtEnd(1);
  object.insertNodeAtEnd(1);
  object.insertNodeAtEnd(1);
  object.insertNodeAtEnd(1);
  object.insertNodeAtEnd(4);
  object.insertNodeAtEnd(2);
  object.insertNodeAtEnd(3);
  object.insertNodeAtEnd(4);
  object.insertNodeAtEnd(2);
  object.insertNodeAtEnd(3);
  object.deleteNode(1);
  // object.insertNodeAtEnd(1);
  // object.insertNodeAtEnd(1);
  // object.insertNodeAtEnd(1);
  // object.insertNodeAtEnd(1);
  // object.insertNodeAtEnd(1);
  // object.insertNodeAtEnd(1);
  // object.insertNodeAtEnd(1);
  // object.insertNodeAtEnd(1);
  // object.insertNodeAtEnd(1);
  // object.insertNodeAtEnd(1);
  // object.insertNodeAtEnd(1);
  // object.insertNodeAtEnd(1);

  object.print_list();


  return 0;

}
