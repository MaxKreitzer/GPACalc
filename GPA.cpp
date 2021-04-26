#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;
int main(){
  ifstream file;
  string data;
  float gpa = 0;
  float room = 0;
  file.open("major.gpa.txt");
//  getline(file, data);
  while(getline(file, data)){
    istringstream iss(data);
    do{
      string subs;
      iss >> subs;
      cout << subs << "\n";
      if (subs == "CP"){
        gpa = gpa + 0;
        room = room + 1;
      }
      if (subs == "HN"){
        gpa = gpa + 0.5;
      }
      if (subs == "AP"){
        gpa = gpa + 1;
      }
      if (subs == "A"){
        gpa = gpa + 4;
      }
      if (subs == "B"){
        gpa = gpa + 3;
      }
      if (subs == "C"){
        gpa = gpa + 2;
      }
      if (subs == "D"){
        gpa = gpa + 1;
      }
    }
    while(iss);
    }
//    cout << data;
//    cout << "\n";

  cout << gpa << "\n";
  cout << (gpa / room);
  cout << "\n";
  file.close();
  return 0;
}
