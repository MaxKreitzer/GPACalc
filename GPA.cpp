#include <iostream>
// fstream helps to open a .txt file to read it
#include <fstream>
// sstream is used for its library in seperating strings by spaces
#include <sstream>
using namespace std;

int main(){

// initiates the .txt file and declares the gpa initially as 0 as well as the
// total of classes taken as 0 called varbiable room
  ifstream file;
  string data;
  float gpa = 0;
  float room = 0;
  string input;
  cout << "Please input name of text file that has your courses and grades. Remember to have .txt at the end." << "\n";
  cin >> input;
// opens the .txt file and begins reading line by getline
// also istringstream iss begins seperating the strings by their spaces and puts
// them on seperate readable lines
  file.open(input);
  while(getline(file, data)){
    istringstream iss(data);
    do{
      string subs;
      iss >> subs;

// From here depending on the type of class a 0, 0.5, 1, or 1.5 is assigned to
// the gpa.
// Also depending on the letter a nummber, 0, 1, 2, 3, or 4 is added to the gpa
      if (subs == "CP"){
        gpa = gpa + 0;
        room = room + 1;
      }
      if (subs == "HN"){
        gpa = gpa + 0.5;
        room = room + 1;
      }
      if (subs == "AP"){
        gpa = gpa + 1;
        room = room + 1;
      }
      if (subs == "AP+"){
        gpa = gpa + 1.5;
        room = room + 1;
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
      if (subs == "F"){
        gpa = gpa + 0;
      }
    }

// continues to run the program that seperates strings by spaces
    while(iss);

    }

// finally gpa is divided by the total amount of classes and final gpa is printed
// also the .txt file is closed just to make sure it doesn't get edited
  cout << (gpa / room);
  cout << "\n";
  file.close();
  return 0;

}
