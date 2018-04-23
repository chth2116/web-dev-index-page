#include<iostream>
using namespace std;

struct node{
  int key;
  node *next;
  node(int k, node *n){
    key = k;
    next = n;
  }
};

node *search(int value, node* head){
  node *current = head;
  while(current != NULL){
    if(current->key == value){
      return current;
    }
    current = current->next;
  }
  return NULL;
}

int main(){

  node *x = new node(5, NULL);
  //print x.key
  cout << x->key << endl; //(*x).key

  node *x2 = new node(6, NULL);
  x->next = x2;
  cout << x2 << endl;
  cout << x->next << endl;

  (*x2).key = 10;
  cout << x->next->key << endl;

  int i = 1;
  node *head = new node(i, NULL);
  node *p = head; //head and p point to same memory
  i++;

  while(i <= 10){
    node *n = new node(i, NULL); //n->next = NULL, n->key = i
    p->next = n; //set p's next node to point to n
    p = n; //same as p = p->next
    i++;
  }

  //go back to the beginning
  p = head;
  while(p!=NULL){
    cout << p->key << endl; //print the key value
    p = p->next;
  }

  //how do I find a value in the list?
  //do any of the key values = 4?
  p = head;
  while(p!=NULL){
    if (p->key == 4){
      cout << "Theres a 4 in that there list sir" << endl;
    }
    p = p->next;
  }
  //call search function
p = search(12, head);
if(p != NULL){
  cout << "found it" << endl;
}
else{
  cout << "Not in list" << endl;
}
return 0;
}
