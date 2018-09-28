Jordon Cotton
s188044
Introduction to C++
Prog101

#Requirements Documentation
I. Description of problem

  Name: Battle Arena Game 
  
  Problem statement: 
    For this project I have made a game that will take in two characters including there health and power. 
  Using these three things it will print to the screen the heros fighting(causing damage) then giving you a winner at the end
  There are 6 files the Game.h, Stack.h, Hero.h, Game.cpp, Hero.cpp, Main.cpp, Stack.cpp.  Seperating the files will allow to work
  easily and will be able to maneuver through each file. 
  
  Problem Specification: 
    The first hero from team 1 attacks a randomly selected member from team 2 
  The strength of the attack is a random value between the minimum and maximum attack value.
  A message similar to the following is displayed: 
  “Iron Man attacks Captain America with Unibeam and inflicts 18 damage”
  (replacing the hero and attack names with the appropriate values).
  The health of the defending hero is decreased by the appropriate amount.
  The first hero from team 2 attacks a randomly selected member from team 1 
  Attack strength and output message are handled in the same way.
  The remaining heroes from each team then alternate. I.e., hero 2 from team 1, then hero 2 from team 2, then hero 3 from team 1, and so on. 
  If any hero dies during an attack, a message to this effect is written to the console.
  When all heroes have finished attacking, each team array is sorted. Heroes are arranged in the array in descending order according to health.
  If all heroes in a team have died, a ‘Game Over’ message is written to the console. This message will say which team has won.
  The game is paused until the user presses ‘enter’.
  If the game is not over, the loop begins again.
  
  II. Input Information
    Input Items:
      Name:
        Hero::Hero(const char* Name), Hero(const char*), 
      void TakeDamage(int), void Hero::TakeDamage(int amount).
      
      Description:
          Hero::Hero(const char* Name)- This function will take in a arguement of a constructor so that it will constantly print out 
         the name of the heros as they fight.
          Hero(const char*)- This is also for the same function above but will be placed in the class hero (holds all the functions,
           health and names of the heros.
          void TakeDamage(int)- This will be placed in the class hero also and will allow the hero to takedamage taking in a return
           type of int for the heros health and power.
          void Hero::TakeDamage(int amount)- This will be the same as the function about but will take in the amount for the 
          heros damage.
          
  
