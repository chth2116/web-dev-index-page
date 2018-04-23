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

void passByReference(int &a){
  a++;
}

void passByArray(int a[]){
  a[0] = 10;
  a[1] = 11;
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

  //pass by reference
  passByReference(a); // a is a regular variable
  cout << a << endl;

  for (int i = 0; i< 5; i++){
    arrayA[i] = 0;
  }
  //when you pass an array into a function, the changes are universal
  passByArray(arrayA);

  // for (int i = 0; i < 5; i++){
  //   cout << arrayA[i] << endl;
  // }

  //int a[stoi(argv[1])]

  //heap - large pool of memory, much larger than the stack
  //large data structures that we want to allocate during run time
  //dynamic memory allocation needed

  //dynamically allocate array
  //new used to allocated memory on the heap
  //have to use a pointer to access heap memory
  //y is pointer to array of 10 ints
  int *y = new int[10];
  //or
  double *x = new double [10]; //array of 20 doubles
  //for every new there needs to be a delete
  delete[] y; //frees the memory allocated to y
  delete[] x; // frees memory allocated to x
  //x and y still exist
  int *x2 = new int;
  *x2 = 5;
  y = x2; //y now points to same address as x2
  cout << *y << endl;

  int *x3 = new int[100];
  x3[0] = 100;
  x3[10] = 200;

  //at this point you lose the array at x3 because now *x3 points to a different location
  //can't get back to x3 and delete the memory stored there
  //we have an array of 100 ints in memeory that cannot be accessed
  //this is called a "memory leak"
  //this is the kind of thing that causes programs to run poorly over time
  //
  x3 = x2;
  delete[] x2;
  delete[] x3;
}
