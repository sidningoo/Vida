#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime> 
#include <unistd.h>

using namespace std;
int health = 5;
int wealth = 5;
int happiness = 5;

bool minigame(){
  string * questions;
  questions = new string [10];
  questions[0] = "Who is on the USD$100 bill ?" ;
  questions[1] = "What is the capital of Canada?" ;
  questions[2] = "What is the currency in Turkey?";
  questions[3] = "Which country has most FIFA World Cup Wins? ";
  questions[4] = "Who is the founder of SpaceX?";
	
  string * answers;
  answers = new string [10];
  answers[0] = "Benjamin Franklin";
  answers[1] = "Ottawa";
  answers[2] = "Lira";
  answers[3] = "Brazil";
  answers[4] = "Elon Musk";
	
  int randomnumtracker;
  string inputanswer;

  cout << "Welcome to the minigame, here we will give you a randomly generated question, you will have 15 seconds to answer the question, or else you loose" << endl;
  cout << "Example: Question: What is the name of our planet?" <<endl;
  cout << "         Answer: Earth" << endl;
  cout << "Do remember to capitalize your answers or else they would would be renderded void" << endl; 
  cout << "Alright, here we go" ;
  cout << "Here's your question" ;
  srand(time(NULL));
  randomnumtracker = rand() % 10;
  cout << questions[randomnumtracker];
  cout << "You have 15 seconds to type in your answer" << endl;
  cin >> inputanswer ;
  sleep(15);
  if (inputanswer != answers[randomnumtracker]){
    cout << "Oh no, you got it wrong, the correct answer is " << answers[randomnumtracker] << endl;
    return false;
  }
  else {
    cout << "Correct Answer!" << endl;
    return true;
  }
  delete [] questions;
  questions = NULL;
  delete [] answers;
  answers = NULL;
}

int Gamedeveloper(){}


int teacher(){
  int counter = 0;
  while (health >= 3 || wealth >= 3 || happiness >= 3){
    char questioninput;
    if (counter == 0){
      cout << "Question 1" << endl << "Where do you want to teach?" << endl;
      cout << "     A.  University" << endl;
      cout << "     B.  High School" <<endl;
      cout << "     C.  Middle School" <<endl;
      cout << "     D.  Primary School" << endl;
      cin >> questioninput ;

      if (questioninput == "A"){
        wealth += 2;
        cout << "Your Wealth increased by 2!" << endl;
      }
      if (questioninput == "B"){
        happiness += 2;
        cout << "Your Happiness increased by 2!" << endl;
      }
      if (questioninput == "C"){
        happiness += 1;
        cout << "Your Happiness increased by 1!" << endl;
      }
      if (questioninput == "D"){
        health += 1;
        cout << "Your Health increased by 1!" << endl;
      }
      cout << "Health = " << health << endl;
      cout << "Wealth = " << wealth << endl;
      cout << "Happiness = " << happiness << endl;
      counter += 1;
    }
    if (counter == 1){
      cout << "Question 2" << endl << "Oh no, you come back home very tired and still have alot to mark, what do you do?" << endl;
      cout << "     A.  Spend time with your family" << endl;
      cout << "     B.  Finish your work" <<endl;
      cout << "     C.  Go to bed" <<endl;
      cin >> questioninput ;

      if (questioninput == "A"){
        Happiness += 2;
        cout << "Your Happiness increased by 2!" << endl;
      }
      if (questioninput == "B"){
        happiness -= 2;
        cout << "Your Happiness decreased by 2!" << endl;
      }
      if (questioninput == "C"){
        health += 1;
        cout << "Your Health increased by 1!" << endl;
      }
      cout << "Health = " << health << endl;
      cout << "Wealth = " << wealth << endl;
      cout << "Happiness = " << happiness << endl;
      counter += 1;
    }
     if (counter == 2){
      cout << "Question 3" << endl << "One of your student bribes you and is willing to pay HKD $1 Million for the exam paper, what do you do?" << endl;
      cout << "     A.  Take the bribe and give them the exam" << endl;
      cout << "     B.  Don't take the bribe, but just give them the exam" <<endl;
      cout << "     C.  Take the bribe, but dont give them the the exam" <<endl;
      cout << "     D.  Dont take the bribe and report the student" << endl;
      cin >> questioninput ;

      if (questioninput == "A"){
        wealth += 3;
        cout << "Your Wealth increased by 3!" << endl;
        cout << "Oh no, another teacher found out that you took a bribe, and you get fired" << endl;
        cout << "Restart your career" << endl;
        counter = -1;
        health = 5;
        wealth = 5;
        happiness = 5;
      }
      if (questioninput == "B"){
        happiness += 1;
        cout << "Your Happiness increased by 1!" << endl;
        cout << "Oh no, another teacher found out that you took a bribe, and you get fired" << endl;
        cout << "Restart your career" << endl;
        counter = -1;
        health = 5;
        wealth = 5;
        happiness = 5;
      }
      if (questioninput == "C"){
        wealth += 3;
        cout << "Your Wealth increased by 3!" << endl;
        cout << "Oh no, another teacher found out that you took a bribe, and you get fired" << endl;
        cout << "Restart your career" << endl;
        counter = -1;
        health = 5;
        wealth = 5;
        happiness = 5;
      }
      if (questioninput == "D"){
        happiness -= 2;
        cout << "The student got expelled and other students are afraid of you now." << endl;
        cout << "Your Happiness decreased by 2!" << endl;
      }
      cout << "Health = " << health << endl;
      cout << "Wealth = " << wealth << endl;
      cout << "Happiness = " << happiness << endl;
      counter += 1;
      
      string choiceselection;
      cout << "POPQUIZ" << endl;
      if (miniquiz()){
        cout << "Congratulations, you can add a point to any one of your meters" << endl;
        cout << "Which meter would you like to add a point to ?" << endl;
        cout << "     A.  Health" << endl;
        cout << "     B.  Wealth" <<endl;
        cout << "     C.  Happiness" <<endl;
        cin >> choiceselection ;
        if (choiceselection == "A"){
          health += 1;
          cout << "Your health increased by 1!" << endl;
      	}
      	if (choiceselection == "B"){
          wealth += 1;
          cout << "Your Wealth increased by 1!" << endl;
      	}
      	if (choiceselection == "C"){
          happiness += 1;
          cout << "Your Happiness increased by 1!" << endl;
      	}
      	cout << "Health = " << health << endl;
      	cout << "Wealth = " << wealth << endl;
      	cout << "Happiness = " << happiness << endl;
      }
      else{
        "Too bad, you can't increase one of your meters, better luck next time."
      }
    }
    if (counter == 3){
      cout << "Question 4" << endl << "One of the other teachers is hosting a party and has invited you." << endl;
      cout << "     A.  Attend the the party but leave early" << endl;
      cout << "     B.  Attend the party but stay till the end" <<endl;
      cout << "     C.  Stay back at the school and finish your work" <<endl;
      cin >> questioninput ;

      if (questioninput == "A"){
        health += 2;
        cout << "You managed to go to bed early and get all the rest needed" << endl;
        cout << "Your Health increased by 2!" << endl;
      }
      if (questioninput == "B"){
        health -= 2;
        cout << "Wasted!" << endl << "You got drunk and passed out." << endl;
        cout << "Your health decreased by 2!" << endl;
      }
      if (questioninput == "C"){
        happiness -= 2;
        cout << "Your Happiness decreased by 2!" << endl;
      }
      cout << "Health = " << health << " / 10" << endl;
      cout << "Wealth = " << health << " / 10" << endl;
      cout << "Happiness = " << health << " / 10" << endl;
      counter += 1;
    }
    if (counter == 4){
      cout << "Question 5" << endl << "A school holiday is coming, how do you plan on making your students spend the holiday?" << endl;
      cout << "     A.  Extra tutorials for everyone even during the holiday" << endl;
      cout << "     B.  Have a school picnic" <<endl;
      cout << "     C.  Assign them more homework than they can handle" <<endl;
      cout << "     D.  Let them take the day off" << endl;
      cin >> questioninput ;

      if (questioninput == "A"){
        happiness += 2;
	cout << "Your students are not too comfortable with you anymore" << endl;
        cout << "Your Happiness decreased by 2!" << endl;
      }
      if (questioninput == "B"){
        health += 1;
	cout << "Your Health increased by 2!" << endl;
      }
      if (questioninput == "C"){
        happiness -= 1;
	cout << "Your Happiness decreased by 1!" << endl;
      }
      if (questioninput == "D"){
        happiness += 1;
	cout << "Your Happiness increased by 1!" << endl;
      }
      cout << "Health = " << health << endl;
      cout << "Wealth = " << wealth << endl;
      cout << "Happiness = " << happiness << endl;
      counter += 1;
    }
    if (counter == 5){
      cout << "Question 6" << endl << "Your students are tired of having in-class lectures and want to do something different, what would you do?" << endl;
      cout << "     A.  Teach them how to invest in stocks" << endl;
      cout << "     B.  Enjoy a day out and do some sports" <<endl;
      cout << "     C.  Watch a movie" <<endl;
      cout << "     D.  Do nothing special and continue with regular in-class lectures" << endl;
      cin >> questioninput ;

      if (questioninput == "A"){
        wealth += 1;
        cout << "You and your students earned a little money" << endl;
        cout << "Your Wealth increased by 1!" << endl;
      }
      if (questioninput == "B"){
        health += 1;
        cout << "Your Health increased by 1!" << endl;
      }
      if (questioninput == "C"){
        happiness += 1;
        cout << "Your Happiness increased by 1!" << endl;
      }
      if (questioninput == "D"){
        happiness += 1;
        cout << "Your Happiness decreased by 1!" << endl;
      }
      cout << "Health = " << health << endl;
      cout << "Wealth = " << wealth << endl;
      cout << "Happiness = " << happiness << endl;
      counter += 1;
    
      
	    
      string choiceselection;
      cout << "POPQUIZ" << endl;
      if (miniquiz()){
        cout << "Congratulations, you can add a point to any one of your meters" << endl;
        cout << "Which meter would you like to add a point to ?" << endl;
        cout << "     A.  Health" << endl;
        cout << "     B.  Wealth" <<endl;
        cout << "     C.  Happiness" <<endl;
        cin >> choiceselection ;
        if (choiceselection == "A"){
          health += 1;
          cout << "Your health increased by 1!" << endl;
      	}
      	if (choiceselection == "B"){
          wealth += 1;
          cout << "Your Wealth increased by 1!" << endl;
      	}
      	if (choiceselection == "C"){
          happiness += 1;
          cout << "Your Happiness increased by 1!" << endl;
      	}
      	cout << "Health = " << health << endl;
      	cout << "Wealth = " << wealth << endl;
      	cout << "Happiness = " << happiness << endl;
      }
      else{
        "Too bad, you can't increase one of your meters, better luck next time."
      }
    }
    if (counter == 6){
      cout << "Question 7" << endl << "You have recieved a better offer at another school, so your current employer has decided to match that job position, you now have to choose." << endl;
      cout << "     A.  Stay at the old school with a higher position but the same salary " << endl;
      cout << "     B.  Go to the other school which also gives the higher salary" <<endl;
      cin >> questioninput ;

      if (questioninput == "A"){
        happiness += 1;
        cout << "You decided to stay and realized that you can't leave this amazing school" << endl;
        cout << "Your Happiness increased by 1!" << endl;
      }
      if (questioninput == "B"){
        wealth += 1;
        cout << "Your Wealth increased by 1!" << endl;
      }
      cout << "Health = " << health << endl;
      cout << "Wealth = " << wealth << endl;
      cout << "Happiness = " << happiness << endl;
      cout << "End of Journey, thank you for playing" << endl;
    }
  }
  if (health < 3 || wealth < 3 || happiness < 3){
    cout << "Oh no one or more of your meters are below 3" << endl;
    cout << "You will have to restart your career" << endl;
    counter = 0;
    health = 5;
    wealth = 5;
    happiness = 5;
  }
}

int actor(){
  int counter = 0;
  while (health < 1 || wealth < 1 || happiness < 1) {
    char questioninput;
    cout << "Question 1" << endl;
    cout << "You arrive 20 minutes late for an audition.The casting director frowns when you walk in. You respond:" << endl;
    cout << "A. Do you mind if I change the lines?  " << endl;
    cout << "B. I’m sorry. I promise it won’t happen again. " << endl;
    cout << "C. I had a stomachache; I was just a little nervous. " << endl;
    cout << "D. Sorry! I am very sorry!! " << endl;

    cin >> questioninput;

    if (questioninput == A){
      happiness -= 2;
      cout << "You made the director angry, happiness -2"; << endl;
    }
    if (questioninput == B){
      happiness += 1;
      cout << "The director understands and gives you a chance, happiness +1" << endl;
    }
    if (questioninput == C){
      happiness -= 2;
      cout << "The director thinks you are lying and rolls his eyes, happiness -2" << endl;
    }
    if (questioninput == D){
      happiness += 1;
      cout << "The director understands and lets you off this time, happiness +1" << endl;
    }
    cout << "You gave a bad first impression to the rest of the team. So you didn't get through the audition."
    cout << "Health: " << health << " / 10" << endl;
    cout << "Wealth: " << wealth <<" / 10" << endl;
    cout << "Happiness: " << happiness << " / 10" << endl;

    // __________________________________________________________________________//

    cout << "Question 2" << endl;
    cout << "Your agent yells at you because you went late for the audition many actors hope for. You respond:" << endl;
    cout << "A. Can you get me on the new BCC show?" << endl;
    cout << "B. They should just offer me the part. I’m so perfect for it." << endl;
    cout << "C. I’m sorry. It will not happen again" << endl;
    cout << "D. Whatever, other directors would want me anyway" << endl;

    cin >> questioninput;

    if (questioninput == A){
      happiness -= 3;
      cout << "You come out as very arrogant and the agent leaves you, happiness -3" << endl;
    }
    if (questioninput == B){
      happiness -= 3;
      cout << "You come out as very arrogant and the agent leaves you, happiness -3" << endl;
    }
    if (questioninput == C){
      happiness += 1;
      cout << "Your agent tries to get you another job, happiness +1" << endl;
    }
    if (questioninput == D){
      happiness -= 3;
      cout << "You come out as very arrogant and the agent leaves you, happiness -3" << endl;
    }
    cout << "Health: " << health << " / 10" << endl;
    cout << "Wealth: " << wealth << " / 10" << endl;
    cout << "Happiness: " << happiness << " / 10" << endl;
    cout << "Fortunately, another production company approached you to be in their film as a main character." << endl;
    //__________________________________________________________________________//

    cout << "Question 3" << endl;
    cout << "Will you accept the offer?" << endl;
    cout << "A. Yes" << endl;
    cout << "B. No" << endl;

    cin >> questioninput;

    if (questioninput == A){
      happiness += 1;
      cout << "You are back in the industry and everyone welcomes you, happiness +1" << endl;
    }
    if (questioninput == B){
      wealth -= 5;
      cout << "You are unemployed and in the verge of bankruptcy, wealth -5" << endl;
    }
    cout << "Health: " << health <<" / 10" << endl;
    cout << "Wealth: " << wealth <<" / 10" << endl;
    cout << "Happiness: " << happiness <<" / 10" << endl;

    //__________________________________________________________________________//

    cout << "Question 4" << endl;
    cout << "You must go through a test to get the job. The question is as follows: Who of the following is not an actor:" << endl;
    cout << "A. Morgan Freeman" << endl;
    cout << "B. WIll Smith" << endl;
    cout << "C. Adriana Alba" << endl;
    cout << "D. Eiza Ganzalez" << endl;

    cin >> questioninput;

    if (questioninput == A){
      wealth -= 3;
      cout << "How do you not know this??? You only get to be a supporting actor/actress, wealth -3" << endl;
    }
    if (questioninput == B){
      wealth -= 3;
      cout << "How do you not know this??? You only get to be a supporting actor/actress, wealth -3" << endl;
    }
    if (questioninput == C){
      wealth += 2;
      cout << "Congreatulations you got the job! happiness +2" << endl;
    }
    if (questioninput == D){
      wealth -= 3;
      cout << "How do you not know this??? You only get to be a supporting actor/actress, wealth -3" << endl;
    }
    cout << "Health: " << health << " / 10" << endl;
    cout << "Wealth: " << wealth << " / 10" << endl;
    cout << "Happiness: " << happiness <<" / 10" << endl;
    cout << "Your acting was remarkable." << endl;
    //__________________________________________________________________________//

    cout << "Question 5" << endl;
    cout << "After seeing your performance in the previous show. A famous production company gives you a once in a lifetime opportunity,"" << endl;
    cour << "but you haven’t spent much time with your family and friends. Will you take the offer or spend time with your family ?" << endl;
    cout << "A. Take the once in a lifetime opportunity given by the production company " << endl; //play mini game//
    cout << "B. Spend more time with family " << endl;

    cin >> questioninput;

    if (questioninput == A){
      // mini game//
    }
    if (questioninput == B){
      // mkni game//
    }

    }
    cout << "Health: " << health << " / 10" << endl;
    cout << "Wealth: " << wealth <<" / 10" << endl;
    cout << "Happiness: " << happiness << " / 10" << endl;

    //__________________________________________________________________________//

    cout << "Question 6" << endl;
    cout << "Wow you are 26 already and looking for a significant other. You have your eyes on four options but you can only choose one:" << endl;
    cout << "A. Snoop Dawg" << endl;
    cout << "B. Shawnny Mendes" << endl;
    cout << "C. Gurl Gadot" << endl;
    cout << "D. Zenfiya" << endl;

    cin >> questioninput;

    if (questioninput == A){
      health -= 3;
      cout << "Huff puff your lifestyle has become very unhealthy with this man !!!, health -3" << endl;
    }
    if (questioninput == B){
      happiness += 2;
      cout << "He keeps you and your tum tum happy , happiness +2" << endl;
    }
    if (questioninput == C){
      happiness += 2;
      cout << "Nothing much to say ... you are one lucky person, happiness +2" << endl;
    }
    if (questioninput == D){
      happiness += 2;
      cout << "You guys are a power couple, totally unstoppable, happiness +3" << endl;
    }
    cout << "Health: " << health << " / 10" << endl;
    cout << "Wealth: " << wealth <<" / 10" << endl;
    cout << "Happiness: " << happiness << " / 10" << endl;
    //__________________________________________________________________________//

    cout << "Question 7" << endl;
    cout << "wow, what a run it has been. It's about time you retire. You are considering the following options as your retirement plan."
    cout << "A. Invest in stocks" << endl;
    cout << "B. Buy a big house by the sea" << endl;
    cout << "C. Travel around the world" << endl;
    cout << "D. Donate most of your money to a charity organization"

    cin >> questioninput;

    if (questioninput == A){
      // mini game//
    }
    if (questioninput == B){
      // mkni game//
    }
    if (questioninput == C){
      // mini game//
    }
    if (questioninput == D){
      // mkni game//
    }
    cout << "END  OF JOURNEY" << endl;
    }
  }
}



int doctor(){
  int counter = 0;
  while (health >= 2 || wealth >= 2 || happiness >= 2){
    char questioninput;
    if (counter == 0){
      cout << "Question 1" << endl << "You find a patient who is in dire need of consultation but may not be able to pay the fees, what do you do?" << endl;
      cout << "     A.  Do nothing" << endl;
      cout << "     B.  Let them come in for the consultation for free" <<endl;
      cout << "     C.  Send them to another public clinic" <<endl;
      cout << "     D.  Give them the consulation and any assistance they need" << endl;
      cin >> questioninput ;

      if (questioninput == "A"){
        happiness -= 2;
        cout << "Your Happiness decreased by 2!" << endl;
      }
      if (questioninput == "B"){
        happiness += 1;
        cout << "Your Happiness increased by 1!" << endl;
      }
      if (questioninput == "C"){
        happiness -= 1;
        cout << "Your Happiness decreased by 1!" << endl;
      }
      if (questioninput == "D"){
        happiness += 2;
        cout << "Your Health increased by 2!" << endl;
      }
      cout << "Health = " << health << endl;
      cout << "Wealth = " << wealth << endl;
      cout << "Happiness = " << happiness << endl;
      counter += 1;
    }
    if (counter == 1){
      cout << "Question 2" << endl << "You realize one of your patients only visits you to so that they can get access to drugs and abuse them, what do you do?" << endl;
      cout << "     A.  Continue giving them the consulation but no drugs" << endl;
      cout << "     B.  Give them the drugs but at higher price" <<endl;
      cout << "     C.  Talk to them about it" <<endl;
      cout << "     D.  Abuse the drugs along with them" << endl;
      cin >> questioninput ;

      if (questioninput == "A"){
        wealth -= 1;
        cout << "Oh no, they stopped consulting you" << endl;
        cout << "Your Wealth decreased by 1!" << endl;
      }
      if (questioninput == "B"){
        wealth += 1;
        cout << "Your Wealth increased by 1!" << endl;
      }
      if (questioninput == "C"){
        happiness += 1;
        cout << "Yay, they realized what they did was wrong and stopped" << endl;
        cout << "Your Happiness increased by 1!" << endl;
      }
      if (questioninput == "D"){
        health -= 2;
        cout << "Another fellow doctor sees you abusing the drugs" << endl;
        cout << "You're barred from the Medical Council" << endl; 
        cout << "You need to restart your career" << endl; 
        counter = -1;
      	health = 5;
      	wealth = 5;
      	happiness = 5;
      }
      cout << "Health = " << health << endl;
      cout << "Wealth = " << wealth << endl;
      cout << "Happiness = " << happiness << endl;
      counter += 1;
    }
    if (counter == 2){
      cout << "Question 3" << endl << "There is a patient who just arrived at the hospital and in critical condition and you just ended your shift and might be too tired to operate on the patient, what do you do?
" << endl;
      cout << "     A.  Operate on the patient by yourself" << endl;
      cout << "     B.  Go home, get some rest, then come back and opperate the next day" <<endl;
      cout << "     C.  Request some other doctor to operate and you are the assistant surgeon" << endl;
      cin >> questioninput ;

      if (questioninput == "A"){
        wealth += 1;
        cout << "Your Wealth increased by 1!" << endl;
        cout << "Oh no, the operation was a failure, you get fired" << endl;
        cout << "Restart your career" << endl;
        counter = -1;
        health = 5;
        wealth = 5;
        happiness = 5;
      }
      if (questioninput == "B"){
        health += 1;
        cout << "Your Health increased by 1!" << endl;
        cout << "Oh no, the patient died. You got fired" << endl;
        cout << "Restart your career" << endl;
        counter = -1;
        health = 5;
        wealth = 5;
        happiness = 5;
      }
      if (questioninput == "C"){
        happiness += 1;
        cout << "You improved your relationship with the other doctor"
        cout << "Your Happiness increased by 1!" << endl;
      }
      cout << "Health = " << health << endl;
      cout << "Wealth = " << wealth << endl;
      cout << "Happiness = " << happiness << endl;
      counter += 1;

      string choiceselection;
      cout << "POPQUIZ" << endl;
      if (miniquiz()){
        cout << "Congratulations, you can add a point to any one of your meters" << endl;
        cout << "Which meter would you like to add a point to ?" << endl;
        cout << "     A.  Health" << endl;
        cout << "     B.  Wealth" <<endl;
        cout << "     C.  Happiness" <<endl;
        cin >> choiceselection ;
        if (choiceselection == "A"){
          health += 1;
          cout << "Your health increased by 1!" << endl;
      	}
      	if (choiceselection == "B"){
          wealth += 1;
          cout << "Your Wealth increased by 1!" << endl;
      	}
      	if (choiceselection == "C"){
          happiness += 1;
          cout << "Your Happiness increased by 1!" << endl;
      	}
      	cout << "Health = " << health << endl;
      	cout << "Wealth = " << wealth << endl;
      	cout << "Happiness = " << happiness << endl;
      }
      else{
        "Too bad, you can't increase one of your meters, better luck next time."
      }
    }
    if (counter == 3){
      cout << "Question 4" << endl << "You are in a dillema, there are 3 people applying for 1 vacancy for the position of nurse, what do you do?." << endl;
      cout << "     A.  A nurse who is great at surgeries but cannot speak english" << endl;
      cout << "     B.  A nurse who is decently alright at everything but may not listen to instructions" <<endl;
      cout << "     C.  A nurse who gets the job done ASAP but execution is poor" <<endl;
      cout << "     D.  You dont hire any because they aren't competent enough" <<endl;
      cin >> questioninput ;

      if (questioninput == "A"){
        happiness -= 1;
        cout << "You spend too much of your time translating things to her"
        cout << "Your happiness decreased by 1!" << endl;
      }
      if (questioninput == "B"){
        health -= 1;
        cout << "The nurse has left you annoyed" << endl;
        cout << "Your health decreased by 1!" << endl;
      }
      if (questioninput == "C"){
        health -= 1;
        cout << "Your Health decreased by 1!" << endl;
      }
      if (questioninput == "D"){
        wealth += 1;
        cout << "You took the right decision and now you can earn more" << endl;
        cout << "Your Wealth increased by 1!" << endl;
      }
      cout << "Health = " << health << endl;
      cout << "Wealth = " << wealth << endl;
      cout << "Happiness = " << happpiness << endl;
      counter += 1;
    }
    if (counter == 4){
      cout << "Question 5" << endl << "You have the day off from the hospital, and finally have some free time, what do you do?" << endl;
      cout << "     A.  Take the day off and sleepthrough the day" << endl;
      cout << "     B.  Go golfing with your friends" <<endl;
      cout << "     C.  Spend time with your family" <<endl;
      cout << "     D.  Go back to the hospital to work" << endl;
      cin >> questioninput ;

      if (questioninput == "A"){
        happiness -= 1;
        cout << "Your family gets mad at you for not spending time with them" << endl;
        cout << "Your Happiness decreased by 1!" << endl;
      }
      if (questioninput == "B"){
        happiness -= 2;
        cout << "Your family gets mad at you for not spending time with them" << endl;
        cout << "Your Happiness decreased by 2!" << endl;
      }
      if (questioninput == "C"){
        happiness += 1;
        cout << "You had a great day with your family" << endl;
        cout << "Your Happiness increased by 1!" << endl;
      }
      if (questioninput == "D"){
        happiness -= 2;
        cout << "Your family gets mad at you for not spending time with them" << endl;
        cout << "Your Happiness decreased by 2!" << endl;
      }
      cout << "Health = " << health << endl;
      cout << "Wealth = " << wealth << endl;
      cout << "Happiness = " << happiness << endl;
      counter += 1;
    }
    if (counter == 5){
      cout << "Question 6" << endl << "You're on the way back home, and someone has a traumatic pneumothorax on the train station , what do you do?" << endl;
      cout << "     A.  You operate on the chest" << endl;
      cout << "     B.  You operate on the abdomen" <<endl;
      cout << "     C.  You operate on the skull" <<endl;
      cout << "     D.  You have no idea what that is, and just call 911" << endl;
      cin >> questioninput ;

      if (questioninput == "A"){
        wealth += 2;
        cout << "Good job you operated successfully" << endl;
        cout << "Your hospital find out and give your reward" << endl;
        cout << "Your Wealth increased by 2!" << endl;
      }
      if (questioninput == "B"){
        happiness -= 1;
        cout << "Oh no you are operating the wrong part." << endl;
        cout << "Luckily there's another doctor nearby to help you." << endl;
        cout << "Your Happiness decreased by 1!" << endl;
      }
      if (questioninput == "C"){
        happiness -= 1;
        cout << "Oh no you are operating the wrong part." << endl;
        cout << "Luckily there's another doctor nearby to help you." << endl;
        cout << "Your Happiness decreased by 1!" << endl;
      }
      if (questioninput == "D"){
        happiness -= 1;
        cout << "Oh no, how do you not know this." << endl;
        cout << "At least you did the most logical thing" << endl;
        cout << "Your Happiness decreased by 1!" << endl;
      }
      cout << "Health = " << health << endl;
      cout << "Wealth = " << wealth << endl;
      cout << "Happiness = " << happiness << endl;
      counter += 1;


      string choiceselection;
      cout << "POPQUIZ" << endl;
      if (miniquiz()){
        cout << "Congratulations, you can add a point to any one of your meters" << endl;
        cout << "Which meter would you like to add a point to ?" << endl;
        cout << "     A.  Health" << endl;
        cout << "     B.  Wealth" <<endl;
        cout << "     C.  Happiness" <<endl;
        cin >> choiceselection ;
        if (choiceselection == "A"){
          health += 1;
          cout << "Your health increased by 1!" << endl;
      	}
      	if (choiceselection == "B"){
          wealth += 1;
          cout << "Your Wealth increased by 1!" << endl;
      	}
      	if (choiceselection == "C"){
          happiness += 1;
          cout << "Your Happiness increased by 1!" << endl;
      	}
      	cout << "Health = " << health << endl;
      	cout << "Wealth = " << wealth << endl;
      	cout << "Happiness = " << happiness << endl;
      }
      else{
        "Too bad, you can't increase one of your meters, better luck next time."
      }
    }
    if (counter == 6){
      cout << "Question 7" << endl << "You have recieved a better offer at another hospital, so your current employer has decided to match that job position, you now have to choose." << endl;
      cout << "     A.  Stay at the old hospital with a higher position but the same salary " << endl;
      cout << "     B.  Go to the other hospital which also gives the higher salary" <<endl;
      cin >> questioninput ;

      if (questioninput == "A"){
        happiness += 1;
        cout << "You decided to stay and realized that you can't leave this amazing hospital" << endl;
        cout << "Your Happiness increased by 1!" << endl;
      }
      if (questioninput == "B"){
        wealth += 1;
        cout << "Your Wealth increased by 1!" << endl;
      }
      cout << "Health = " << health << endl;
      cout << "Wealth = " << wealth << endl;
      cout << "Happiness = " << happiness << endl;
      cout << "End of Journey, thank you for playing" << endl;
    }
  }
  if (health < 3 || wealth < 3 || happiness < 3){
    cout << "Oh no one or more of your meters are below 3" << endl;
    cout << "You will have to restart your career" << endl;
    counter = 0;
    health = 5;
    wealth = 5;
    happiness = 5;
  }
}



int new(){
  string name;
  char pickcareer;
  Int counter=0;

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
    Gamedeveloper(counter)
  }
  if (pickcareer == "B"){
    teacher(counter)
  }
  if (pickcareer == "C"){
    actor(counter)
  }
  if (pickcareer == "D"){
    doctor(counter)
  }
}

int existing(name, health, wealth, happiness, career){
  cout << "Hey, ” << name <<  "welcome back !" << endl;
  cout << "Below were your HWH meters" << endl;
  cout << "Health = " << health << " / 10" << endl;
  cout << "Wealth = " << health << " / 10" << endl;
  cout << "Happiness = " << health << " / 10" << endl;
  cout << “Let’s take you back to the career of” << career;
  if (career == "gamedeveloper"){
      Gamedeveloper(counter)
  }
  if (career == "teacher"){
     teacher(counter)
  }
  if (career == "doctor"){
    doctor(counter)
  }
  if (career == "actor" ){
     actor(counter)
  }
}

int main(){
	string name;
	int a, b, c, counter;
	string career;
	ifstream fin;
	fin.open(“save_file”);
	if (fin){
		getline(in, name, '\n');
		getline(in, a, '\n');
		getline(in, b, '\n');
		getline(in, c, '\n');
		getline(in, career, ‘\n’);
		getline(in, counter, ‘\n’);
		existing(name, a, b,c, career, counter)
	}
	else{
		new()
	}
}
