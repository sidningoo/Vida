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

This game simulates a person’s travel through his or her life, from college to retirement, with jobs, marriage and possible children along the way. In life, we often find it difficult to strike a balance between health, wealth and happiness.The player will start off his life journey starting by choosing a career. In this game, we prompt users to make a series of life decisions, one decision leads to another, each decision affects the health, wealth and happiness meters (HWH meters). As the player’s life goes on, he/she may encounter some quizzes that will eventually lead them to their choice in picking a career, house, daily life decisions which eventually affects their meters. The player will start off with 5 points in each meter, where the maximum points is 10 points. The objective of the game is to make decisions that will keep all 3 meters roughly balanced until retirement. Addition and deduction of points will happen corresponding to player made decisions. If either one of the three meters falls under a certain point, they would fall into difficult times (e.g. bankruptcy, divorce, mid-life crisis, unemployment, etc) .

________________________________________________________________________________________________________________________________________
**List of features & functions:**

***1. Pop-up questions to make daily decisions***

-	This function will randomly throw questions to the player to choose between 2 activities at any point of the game. These 		questions ultimately affect their 

-	The questions are simple questions like “Go out with friends or with family?”


***2. Mini-game redirector*** 

-	For certain decisions made, the user would have to win a mini-game to complete the desired action. For example, if the user
	chooses to make a risky investment, he/she will have to play the mini-game to make the investment. If the player wins, he/she 
	will gain wealth points. However, if the player loses he/she will lose wealth points, as a way to illustrate the deterrent of
	the risk. 


***3. Health, Wealth & Happiness (HWH) meter counter***

-	This function will add and subtract points from respective meters based on player decisions.

-	If either one of the meters fall under 5 points, this function will redirect the player to one of the respective functions.


***4. Save game function***

>	The game would be dealing with each level recognized with a number. Once the player enters the command to save the game, the 
	players game progress (eg. Game Level, HWH meters, career, marital status, etc.) would be saved in a text file saved in the 
	working directory of the game file.

>	Once the game is relaunched, the game would detect for any saved game files in the directory, and the player can choose if they 
	want to continue with that game or a new one.

***5. Separation of different game parts*** 

-	We will implement the road map of the game - which contains the roadmap, random scenarios, etc- on one file. 

-	The mini-games will also be coded on to a seperate file which will be called in the roadmap file of the game.

-	The main file that would contain functions that will be accessible at any point during the game. These functions include:
	Checking your current life status in the game, going back to the game, Saving and Exiting, Accessing the HWH meters. It
	essentially works as a pause menu.

***6. Dynamic Memory Management***
-	Implement New and Delete functions to dynamically allocate memory. 

-	The game board would then be built into the main file.
________________________________________________________________________________________________________________________________________


