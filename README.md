**Vida									|
Proposal - Group 189.**	|	
______________________
________________________________________________________________________________________________________________________________________
**Team Members.**

**Sahabudeen Asimudeen - 3035577997**

Asim is majoring in Information Systems and Computer Science. He takes great interest in the field of software development.


**Ningoo Siddhant Darpan - 3035577973**

Siddhant is majoring in Information Systems and Computer Science. He finds coding interesting and would like to broaden his horizons and apply business concepts in it. 

________________________________________________________________________________________________________________________________________
Vida

**Concept and rules.**

This game simulates a person’s travel through his or her life, from college to retirement, with jobs, marriage and possible children along the way. In life, we often find it difficult to strike a balance between health, wealth and happiness.The player will start off his life journey starting by choosing a career. In this game, we prompt users to make a series of decisions related to their career, each decision affects the health, wealth and happiness meters (HWH meters). As the player’s life goes on, he/she may encounter some quizzes that might be benficial to them or theymight not. The player will start off with 5 points in each meter, where the objective of the game is to make decisions that will keep all 3 meters roughly balanced until retirement. Addition and deduction of points will happen corresponding to player made decisions. If either one of the three meters falls under a certain point, they would fall into difficult times (e.g. bankruptcy, divorce, mid-life crisis, unemployment, etc) .

________________________________________________________________________________________________________________________________________
**List of features & functions:**

***1. Mini-game redirector*** 

-	For certain decisions made, the user would have to win a mini-game to complete the desired action. For example, if the user
	chooses to make a risky investment, he/she will have to play the mini-game to make the investment. If the player wins, he/she 
	will gain wealth points. However, if the player loses he/she will lose wealth points, as a way to illustrate the deterrent of
	the risk. 


***2. Health, Wealth & Happiness (HWH) meter counter***

-	This function will add and subtract points from respective meters based on player decisions.

-	If either one of the meters fall under 5 points, this function will redirect the player to one of the respective functions.


***3. Save game function***

-	The game would be dealing with each level recognized with a number. Once the player enters the command to save the game, the 
	players game progress (eg. Game Level, HWH meters, career, etc.) would be saved in a text file saved in the 
	working directory of the game file.

-	Once the game is relaunched, the game would detect for any saved game files in the directory, and the player can choose if they 
	want to continue with that game or a new one.

***4. Separation of different game parts*** 

-	The main game file is seperate from the saved version of the file, so that if needed the player can choose to start a new 		instead of and existing one and vice versa.

***5. Dynamic Memory Management***
-	Implementation of dynamic arrays when needed. 
________________________________________________________________________________________________________________________________________
**Non-Standard C++ Libraries***
-	#include <cstdlib> //for calling srand(), rand()
-	#include <ctime> // for calling time()
-	#include <unistd.h> // for calling sleep()
-	#include <windows.h> // for calling sleep()

________________________________________________________________________________________________________________________________________
**Compilation and Execution instruction**

