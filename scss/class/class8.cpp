#include <iostream>
using namespace std;

class Date{
private:
  int month;
  int day;
  int year;

public:
  Date(int m, int d, int y){
    month = m;
    day = d;
    year = y;
  }

  void printDate(){
    cout << month << " " << day << " " << year << endl;
  }
};

int main(){
  Date d;
  return 0;
}
