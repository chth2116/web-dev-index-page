//this is where we will run the functions from the .h and implementation .cpp
#include<iostream>
#include "SLL.h"

using namespace std;

int main(){
  //creating object of SLL class
  SLL llCoolList(10);

  llCoolList.insertNodeAtEnd(12);
  llCoolList.insertNodeAtEnd(12);
  llCoolList.insertNodeAtEnd(12);
  llCoolList.insertNodeAtEnd(12);
  llCoolList.insertNodeAtEnd(12);

  llCoolList.printList();

  return 0;
}
