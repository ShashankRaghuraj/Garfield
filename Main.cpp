//Shashank Raghuraj
//Debugging Strategies, Shortcuts, and Friend Functions
//score: 11/10
#include <iostream>
#include "Garfield.h"
#include<string>
using namespace std;
string criminalActivity(Garfield &g);
int counter = -1;
int main() {
  Garfield g = Garfield(15,16);
  Garfield g1 = Garfield(27, 28);
  bool flag = true;
  do
  {
    int choice;
    cout << "What would you like to do: \n1) Test speak \n2) Test criminalActivity \n3) Test Lasagna\n4) Test operator+\n5) Test daysLeft\n6) Test looseWeight(I made this method)\n7) Display Stats \n0) Exit\n>>";
    cin >> choice;
    if(choice == 1)
    {
      cout << g.Speak("MONDAY") << endl;
      cout << g.Speak("TUESDAY") << endl;
      cout << g.Speak("WEDNESDAY") << endl;
      cout << g.Speak("THURSDAY") << endl;
      cout << g.Speak("FRIDAY") << endl;
      cout << g.Speak("SATURDAY") << endl;
      cout << g.Speak("SUNDAY") << endl;

      cout << g.Speak("Saturday") << endl;
    }
    else if(choice == 2)
    {
      cout << criminalActivity(g) <<  "\t hunger: "<< g.getHunger() << endl;
      cout << criminalActivity(g) <<  "\t hunger: "<< g.getHunger() << endl;
      cout << criminalActivity(g) <<  "\t hunger: "<< g.getHunger() << endl;
      cout << criminalActivity(g) <<  "\t hunger: "<< g.getHunger() << endl;
      cout << criminalActivity(g) <<  "\t hunger: "<< g.getHunger() << endl;
      cout << criminalActivity(g) <<  "\t hunger: "<< g.getHunger() << endl;
      cout << criminalActivity(g) <<  "\t hunger: "<< g.getHunger() << endl;
    }
    else if(choice == 3)
    {
      g.lasagna();
      g.display();
    }
    else if(choice == 4)
    {
      g.operator+(g1);
      g.display();
    }
    else if(choice == 5)
    {
      g.daysLeft();
    }
    else if(choice == 6)
    {
      g.looseWeight();
    }
    else if(choice == 7)
    {
      g.display();
    }
    else
    {
      flag = false;
    }
  }
  while(flag);
}

string criminalActivity(Garfield &g)		//make this a friend function!!
{
  counter++;
  if(counter == 6)
  {
    counter = 0;
  }
  string o1 = "garfield kicks odie off a table";
  string o2 = "garfield kills odie";
  string o3 = "garfield eats odie's children";
  string o4 = "garfield is tried for vehicular manslaughter";
  string o5 = "garfield commits high treason";
  string o6 = "garfield knows nothing about the mysterious circumstances concerning nermal's disappearance";

  string oops = "garfield is mad";

  //divide hunger by 2 and modulate it down by 1 AFTER the operation
  g.setHunger((g.hunger/2) -1);6


  //use a for loop to loop through each options continuously, so that o1 follows o6
  //i.e. for i = 0, return o1
  string phrases[6];
  phrases[0] = o1;
  phrases[1] = o2;
  phrases[2] = o3;
  phrases[3] = o4;
  phrases[4] = o5;
  phrases[5] = o6;
  return phrases[counter];
}
