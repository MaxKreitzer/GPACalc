#include <iostream>
#include <fstream>
using namespace std;
int main() {
  ifstream file;
  string data;
  file.open("major.gpa.txt");
  while(getline(file, data)){
    cout << data;
    cout << "\n";
  }

  file.close();
  return 0;
}
