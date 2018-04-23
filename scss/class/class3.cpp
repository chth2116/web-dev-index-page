#include <iostream>
using namespace std;

void passByValue(int a){
  a++;

}

void passByPointer(int *ptr){
  //this will give same address as that stored in b (ptr and b are pointing to the same location)
  cout << "address stored in ptr " << ptr << endl;
  *ptr = *ptr + 1; // this is the same as: (*ptr)++
}
int main(){
  int a = 5;

  //pointer and address it points to have to be the same type
  int *b = &a;

  //b gives address, *b gets the value stored at b which is the address of a
  //* has two meanings
  //use it to declare pointers
  //use it to dereference the pointers
  //dereference - go to address stored in pointer and get the value at that address
  //cout << &b<< ", " << b<< ", " << *b << endl;

 //*b gets updated as a gets updated because the address of a has not changed
  a = 10;


  int c = 20;
  b = &c; //change the address stored in b to address of c
  //cout << *b << endl;

  int arrayA[5];
  cout << arrayA << endl; //name of array gives us address of first element in arrayA

  //Functions
  passByValue(a);//the changes made to a in the function are local to that Functions
                  // pass by value basically made a copy of a and stored it at a new address unique to the function
  //cout << a << endl;

  //address' are unlike variables in that they are universal. If we change something at in address in one Functions
  //that variable at that address changes for all other Functions
  //in this case, we send the address of b to the function and the function changes the value at that address by adding one
  //we then check b and get 21 which is the value of *b+1;
  cout << "address stored in b " << b << endl;
  passByPointer(b);
  cout << *b << endl;

}
