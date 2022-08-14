//Shashank Raghuraj
//A class Meant to Replicate the Fat Cat himself: Garfield!
//However, Because Its a Monday, Garfield has traveled through space-time and messed up his own Code

#include<string>
#include <iostream>
using namespace std;

class Garfield
{
	private:
		double weight; 
		int age; 
	public:
    friend string criminalActivity();
		int hunger;
		bool alive;
		string day;

		Garfield(double w1, int a1 ) : weight(w1), age(a1)		// Constructor
		{
			hunger = 100;	
		}; 

		//A method that will allow Garfield to tell you his thoughts on any specific day. INPUT SHOULD ONLY BE IN CAPITAL. Garfield should tell you the correct day.
		string Speak(string day)
		{
			string returnme;
      //Thank you Tutorial Point :)
			switch(day.size()) 
			{
				case 6:				// Days of the week with 6 letters
					if(day == "MONDAY")
					{
          	returnme = "My Least Favorite day is here";
            return returnme;
          }
					if(day == "SUNDAY")
          {
						returnme = "One Day away from my least favorite day";
            return returnme;
          }
					if(day == "FRIDAY")
          {
            returnme = "The greatest day of the week. Friday";
            return returnme;
          } 
          

				case 7: 
          if(day == "TUESDAY")
          {
            returnme = "It's Tuesday";
            return returnme;
          }
          
				case 8: 
					if(day== "THURSDAY")
					{ 
            returnme = "Wow its a Thurdays";
            return returnme;
          }
          if(day == "SATURDAY")
          {
            returnme = "I hate Saturdays, because Odie exists";
					  return returnme;
          }
        
        case 9:

          if(day == "WEDNESDAY")
          {
            returnme = "Wednesday...";
            return returnme;
          }

				default:
					returnme = "ERROR: input is invalid";
          return returnme;
			}
			return returnme; //Determine the Length of the String to narrow down the options
		}

		bool lasagna()		//returns whether garfield accepts your lasagna offering
		{
			//if hunger > 100, refuse lasagna and return false
			if(hunger > 100)
			{
				return false;
			}

			//if hunger is between 50 and 100, lasagna adds 1 BEFORE the operation, then multiplies by hunger 1.5
			if(hunger >= 50 && hunger < 100)
			{
        hunger++;
				hunger*=1.5;
				return true;
			}

			//if hunger is between 0 and 50, lasagna multiplies hunger by 1.75, then adds 1 AFTER the operation
			if(hunger >= 0 && hunger < 50)
			{
				int temp = 1.75 * hunger++;
				hunger = temp;
				return true;
			}
      return false;
		}

    Garfield operator+(const Garfield& g) //a combination jutsu that allows two garfields to combine all their stats except for an average of their age
    {
        double weight = this -> weight + g.weight;

        int age = (this -> age + g.age)/2;

        Garfield fatCat = Garfield(weight, age);
        
        fatCat.setHunger(this -> hunger + g.hunger);
        
        return fatCat;
    }

		int daysLeft()		//a method that calculates how many days garfield will postpone the heat death of the universe based on his hunger level
		{
			//garfield's timer is found by modulating hunger by 10, then subtracting 1 AFTER the operation
			if(hunger > 20)
			{
				return (hunger--) % 10;
			}
			else
			{
				cout << "you have failed garfield \n";
        return 0;
			}
		}
    void looseWeight()
    {
      srand(time(0));
      int choice = rand() % 3 +1;
      if(choice == 1)
      {
        cout << "Garfeild went for a run and lost 10 lbs";
        this -> weight -= 10;
      }
      else if(choice == 2)
      {
        cout << "Garfeild hit da gym and lost 35 lbs";
        this -> weight -= 35;
        
      }
      else
      {
        cout << "Garfield didn't listen and didn't loose any weight";
      }
    }
    void display()
    {
      cout << "\n\nGarfield Age: " << this -> age;
      cout << "\nGarfield Weight: " << this -> weight;
      cout << "\nGarfield Hunger: " << this -> hunger;
      if(this -> daysLeft() == 0)
      {
         cout << "\nDays Left 0" << "\n\n";
      }
      else
      {
        cout << "\nDays Left " << daysLeft() << "\n\n";
      }
    }
    int getHunger()
    {
      return hunger;
    }
    void setHunger(int currentHunger)
    {
      hunger = currentHunger;
    }
};
