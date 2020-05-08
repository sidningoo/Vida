#include <iostream>
using namespace std;
int health = 5;
int wealth = 5;
int happiness = 5;


int Gamedeveloper(){}


int teacher(){
  int counter = 0;
  while (health < 1 || wealth < 1 || happiness < 1){
    char questioninput;
    if (counter == 0){
      cout << "Question 1" << endl << "Where do you want to teach?" << endl;
      cout << "     A.  University" << endl;
      cout << "     B.  High School" <<endl;
      cout << "     C.  Middle School" <<endl;
      cout << "     D.  Primary School" << endl;

      if (questioninput == A){
        wealth += 2;
        cout << "Your Wealth increased by 2!" << endl;
      }
      if (questioninput == A){
        happiness += 2;
      }
      if (questioninput == A){
        happiness += 1;
      }
      if (questioninput == A){
        health += 1;
      }
      cout << "Health = " << health << " / 10" << endl;
      cout << "Wealth = " << health << " / 10" << endl;
      cout << "Happiness = " << health << " / 10" << endl;
    }
  }
}


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
  cout << "     B.  Teacher" <<endl;
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
