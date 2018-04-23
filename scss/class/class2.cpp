#include <iostream>
using namespace std;

//arg  c is the number of arguments argv is an array of pointers to the arguments
int main(int argc, char *argv[]){
  //cout << "hello world" << endl;
  cout << argc << endl;
  //argv[0] is the name of the program running (./a.out)
  //cout << argv[0] << endl;

  //cout << argv[1] << endl;

  //loop through arguments
  //don't have to know how many arguments because that is set with argc
  for (int i = 0; i < argc; i++){
    cout << argv[i] << endl;
  }
}
