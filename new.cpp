Proposal - Group 189.

Team Members.
Sahabudeen Asimudeen - 3035577997
Asim is majoring in Information Systems and Computer Science. He takes great interest in the field of software development.

Ningoo Siddhant Darpan - 3035577973
Siddhant is majoring in Information Systems and Computer Science. He finds coding interesting and would like to broaden his horizons and apply business concepts in it. 

Vida
Concept and rules.
This game simulates a person’s travel through his or her life, from college to retirement, with jobs, marriage and possible children along the way. In life, we often find it difficult to strike a balance between health, wealth and happiness.The player will start off his life journey starting by choosing a career. In this game, we prompt users to make a series of life decisions, one decision leads to another, each decision affects the health, wealth and happiness meters (HWH meters). As the player’s life goes on, he/she may encounter some quizzes that will eventually lead them to their choice in picking a career, house, daily life decisions which eventually affects their meters. The player will start off with 5 points in each meter, where the maximum points is 10 points. The objective of the game is to make decisions that will keep all 3 meters roughly balanced until retirement. Addition and deduction of points will happen corresponding to player made decisions. If either one of the three meters falls under a certain point, they would fall into difficult times (e.g. bankruptcy, divorce, mid-life crisis, unemployment, etc) .


List of features & functions:
Pop-up questions to make daily decisions
This function will randomly throw questions to the player to choose between 2 activities at any point of the game. These questions ultimately affect their 
The questions are simple questions like “Go out with friends or with family?”
Mini-game redirector 
For certain decisions made, the user would have to win a mini-game to complete the desired action. For example, if the user chooses to make a risky investment, he/she will have to play the mini-game to make the investment. If the player wins, he/she will gain wealth points. However, if the player loses he/she will lose wealth points, as a way to illustrate the deterrent of the risk. 
Health, Wealth & Happiness (HWH) meter counter
This function will add and subtract points from respective meters based on player decisions.
If either one of the meters fall under 5 points, this function will redirect the player to one of the respective functions.
Save game function
The game would be dealing with each level recognized with a number. Once the player enters the command to save the game, the players game progress (eg. Game Level, HWH meters, career, marital status, etc.) would be saved in a text file saved in the working directory of the game file.
Once the game is relaunched, the game would detect for any saved game files in the directory, and the player can choose if they want to continue with that game or a new one. 
Separation of different game parts 
We will implement the road map of the game - which contains the roadmap, random scenarios, etc- on one file. 
The mini-games will also be coded on to a seperate file which will be called in the roadmap file of the game.
The main file that would contain functions that will be accessible at any point during the game. These functions include: Checking your current life status in the game, going back to the game, Saving and Exiting, Accessing the HWH meters. It essentially works as a pause menu.
Dynamic Memory Management
Implement New and Delete functions to dynamically allocate memory. 
The game board would then be built into the main file



Gameplan

Print rules 
“You are stepping into a new and exciting journey of your life, but with great power comes great responsibility.”


“Greetings, please enter your name”
“Hello, ”  name here
“You are about to start your journey”


If any bar == 0; restart 

Choose your career.
Game developer
Teacher
Doctor
Actor


Teacher
Where do you want to teach?
University professor	wealth +2
High School Teacher 	happiness +2
Middle School Teacher 	happiness +1
Primary School Teacher health +1

Oh no, you came back home very tired and still have alot to mark, what do you do?
Spend time with your family		happiness +2
Finish your work			happiness -2
Go to bed 				Health +1

One of your students bribes you and is willing to pay HKD$ 1 Million for the exam paper, what do you do?
Take the bribe and give them the exam		wealth+3
Oh no, another teacher finds out about the bribe, and you got fired
 restart the game
Don't take the bribe but just give them the exam	happiness +1
Oh no, another teacher finds out about the bribe, and you got fired
 restart the game
Take the bribe but don't give them the paper	wealth +3
Don't take the bribe and report student 		happiness -1

One of the other teachers is hosting a party, and has invited you
Attend the party but leave early, as you want to go to bed early 		health +2
Attend the party, and stay till the end, and you get drunk 			health -1

Stay back and complete your work					happiness -2

A school holiday is coming, how do you plan on making your students spend the holiday
Extra tutorials for everyone even during the holiday			happiness -2
Have a school picnic							health +1
Assign them more homework than they can handle 			happiness -1
Let them take the day off						happiness +1

Your students are tired of having in-class lectures, which would you rather do with them? 
Open up a start-up and maybe everyone earns little money 		wealth +1
Enjoy a day out and do some sports 					health +1
Watch a movie 								happiness +1
Do nothing and resume with normal classes 				happiness -1

You have received a better offer at another school, so your current employer has decided to match that job position, you now have to choose what to do.
Stay at the old school with a higher job title but the same salary 		happiness +1
Go to the other school which gives a higher salary 			wealth +1



Doctor
You find a patient who is in dire need of consultation but may not be able to pay the fees, what do you do?
Do nothing								happiness -1
Let them come in for the consultatio				happiness +1


You realize one of your patients only visits you so that they can get access to drugs.
Continue giving them consultation but no drugs			Happiness -1 
Give them the drugs at a higher price 				Wealth +1
Talk to them about it							happiness +1
Abuse the drugs along with them 					health -2
There is a patient who just arrived at the hospital and in critical condition and you just ended your shift and might be too tired to operate on the patient, what do you do?
Operate on the patient by yourself				Wealth +1
Oh no the operation was a failure, you get fired restart 
Go Home and get some rest  					Health +1
You forgot about the patient, they died, restart career
Request some other doctor to do the surgery along with you Happiness +1
       
Mini Quiz along with 2 questions: List of general knowledge questions, and they pick one question to answer, implement sleep function 

How many sides does a heptadecagon have? 	Ans; 17
What is the capital of Canada				Ans; Ottawa
Currency of Turkey 					ans; Lira
The country with most fifa world cup wins 		ans; Brazil

NEW FILE
#include <iostream>
#include <fstream>
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


int new(){
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

int existing(name, health, wealth, happiness, career){
  cout << "Hey, ” << name  welcome back !" << endl;
  cout << "Below were your HWH meters" << endl;
  cout << "Health = " << health << " / 10" << endl;
  cout << "Wealth = " << health << " / 10" << endl;
  cout << "Happiness = " << health << " / 10" << endl;
  Cout << “Let’s take you back to the career of” 
}

int main(){
	String name;
	Int a, b, c;
	String career;
	ifstream fin;
	fin.open(“save_file”);
If (fin){
existing(


