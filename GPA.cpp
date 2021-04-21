#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
int main() {
  ifstream file;
  string data;
  float gpa = 5.5;
  file.open("major.gpa.txt");
//  getline(file, data);
  while(getline(file, data)){

    istringstream iss(data);
    do{
      string subs;
      iss >> subs;
      cout << subs << "\n";
      if (subs == "CP"){
        gpa = gpa - 1.5;
      }
    }
    while(iss);
//    cout << data;
//    cout << "\n";
  }
  cout << gpa;
  cout << "\n";
  file.close();
  return 0;
}
