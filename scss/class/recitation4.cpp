#include <iostream>
using namespace std;

//creating structure
struct city{
  string cityName;
  int message;
  city *next;
  city(){};//default constructor
  city(string initName, city *initNext, int initMessage){
    cityName = initName;
    next = initNext;
    message = initMessage;
  }
};

city *insertNode(city *head, city *previous, string cityName);
// city *searchList(head);

int main(){
  // city *zero = new city("Denver", NULL, 0);
  // city *head = zero;
  //
  // city *one = new city("L.A.", NULL, 1);
  // zero->next = one;
  //
  // city *two = new city ("Cali", NULL, 2);
  // one->next = two;
  //
  // city *three = new city ("Seattle", NULL, 3);
  // two->next = three;
  //
  // city *four = new city ("Boulder", NULL, 4);
  // three->next = four;
  //
  // city *five = new city ("Atlanta", NULL, 5);
  // four->next = five;

  //print original list
  city *head = NULL;
  insertNode(NULL, NULL, "city")
  city *current = head;
  cout << "ORGINAL LIST" << endl;
  while(current != NULL){
  cout << current->message << " -> ";
  current = current->next;

  }
  cout << "NULL" << endl;

  current = head;

  while( current!=NULL )
  {
    if( current->message % 2 == 0 ){
      cout << "inserting new node" << endl;
      insertNode(head, current, current->cityName);
      current = current->next;
    }
    else
      current = current->next;
  }

  current = head;
  cout << "New List" << endl;
  while(current != NULL){
  cout << current->message << " -> ";
  current = current->next;
  }
  cout << "NULL" << endl;

  return 0;
}

// city *searchList(head){
//
//   	Node *current;
//   	current = head;
//
//   	while( current!=NULL )
//   	{
//   		if( current->message % 2 == 0 )
//   			return current;
//   		else
//   			current = current->next;
//   	}
//
//   	return NULL;
//   }


city *insertNode(city *head, city *previous, string cityName)
{
  city *newNode = new city("cityName", NULL, previous->message++);
  //if we are passed an empty list just create a new head node
  if (head == NULL){
    head = newNode;
    return head;

  }

  //if previous is null, add to head of list
  else if(previous == NULL){
    head = previous;
    return head;
  }

  //if not empty and previous not null, append to previus node
  else{
    newNode->next = previous->next;
    previous->next = newNode;


  return newNode;
  }
}
