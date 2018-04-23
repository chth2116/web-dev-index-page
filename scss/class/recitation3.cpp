#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int* resizeArray(int* oldArray, int* capacity){
  int newCapacity = *capacity * 2;
  int* newArray = new int[newCapacity];
  //copy info from oldArray to newArray
  for (int i = 0; i < *capacity; i++){
    newArray[i] = oldArray[i];
    cout << oldArray[i] << '\t' << newArray[i] << endl;
  }
  //delete oldArray
  delete[] oldArray;

  //set oldArray equal to the newArray;
  oldArray = newArray;
  *capacity = newCapacity;
  return oldArray;
}



int main(int argc, char* argv[]){
  if (argc!=2){
    return -1;
  }
  string filename = argv[1];
  ifstream inStream;
  inStream.open(filename);

  //check to see file opens
  if(!inStream){
    cout << "error opening file" << endl;
    return -1;
  }

  //dynamically allocate array of size capacity
  int capacity = 10;
  int* arrayA = new int[capacity];

  int elementNum = 0;
  string line;
  //get lines and store lines in arrayA
  while(getline(inStream, line)){
    if (elementNum == capacity){
      arrayA=resizeArray(arrayA, &capacity);
    }
    //store value in the array
    arrayA[elementNum] = stoi(line);
    elementNum ++;
  }
  //print values in array
  for(int i = 0; i<elementNum; i++){
    cout << arrayA[i] << endl;
  }
  cout << endl << capacity;
  return 0;
}
