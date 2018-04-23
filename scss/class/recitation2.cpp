#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

//create struct for car data
struct CarData {
 string  model;
 string  make;
 string  year;
};

int main(int argc, char const *argv[]){
//create object array of car CarData
CarData carArray[10];

ifstream infile(argv[1]);
ofstream outfile(argv[3]);
if (!outfile){
  cout << "output file did not open properly" << endl;
}
if (!infile){
  cout << "input file was not opened properly" << endl;
}

cout << "number of lines in file: " << argv[2] << endl;

int counter = 0;
string line;
while(getline(infile, line)){
  stringstream ss(line);

  string model;
  ss>>model;
  carArray[counter].model = model;



  string make;
  ss >> make;
  carArray[counter].make = make;


  string year;
  ss >> year;
  carArray[counter].year = year;

  //write output to file
  outfile << carArray[counter].model << "\t" << carArray[counter].make << "\t" << carArray[counter].year << endl;

  counter ++;



}
  return 0;
}
