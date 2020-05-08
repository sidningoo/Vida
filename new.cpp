#include <iostream>
using namespace std;

int Gamedeveloper(){}
int teacher(){}
int actor(){}
int doctor(){}

int main(){
  string name;
  char pickcareer;

  cout << "Greetings, please enter your name:" << endl;
  cin >> name ;
  cout << endl<< "Why Hello " << name << endl;
  cout << "You are about to start your journey, pick your career" << endl;
  cout << "     A.  Game developer" << endl;
  cour << "     B.  Teacher" <<endl;
  cout << "     C.  Doctor" <<endl;
  cout << "     D.  Actor" << endl;
  cin << pickcareer;
  if (pickcareer == "A"){
    Gamedeveloper()
  }
  if (pickcareer == "B"){
    teacher()
  }
  if (pickcareer == "C"){
    actor()
  }
  if (pickcareer == "D"){
    doctor()
  }
}
