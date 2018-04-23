#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

struct student{
  int ID;
  string name;
  string major;
  //adding a default constructor (takes no inputs)
  student(){}
  //adding a constructor to structure
  student(int id, string n, string m){
    ID = id;
    name = n;
    major = m;
  }

};

int main(){
  // cout << "hello" << endl;

  //create instance of student called s
  student s;
  s.ID = 5; //setting ID property for student S to file
  s.name = "bob";
  s.major = "skiing";


  //creating student to test constructor
  student s2 (6, "jimmy", "swimming");

  //creating array
  student allStudents[10];
  //streams
  ifstream myfile("students.txt");
  if (!myfile)
    cout << "check ur werk" << endl;

  string line;
  int counter = 0;
  while (getline(myfile, line)){
    //string stream - include sstream lib
    stringstream ss;
    //write the line string into the string stream
    ss<<line;
    //can use getline within line
    string item;
    getline(ss, item, ',');
    allStudents[counter].ID = stoi(item);

    getline(ss, item, ',');
    allStudents[counter].name = item;

    getline(ss, item);
    allStudents[counter].major = item;
    cout << allStudents[counter].major << endl;
    counter ++;
  }
  for (int i = 0; i<counter; i++){
  cout << allStudents.ID[i] << allStudents.name[i] << allStudents.major[i] << endl;
  }


  // cout << s2.ID << ", " << s2.name << ", " << s2.major << endl;
  return 0;
}
