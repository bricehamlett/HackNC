
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;



int arr[10] = {0};

void env1 ();

void env2 ();

void env3 ();

void env4 ();

void env5 ();

void randomize(bool& alive); 
// Randomize Door 1 Output (1-5 options)



char choice;
bool alive = true;
int survived = 0;


int main()
{
    srand(time(0));
    int goal = rand() % 11 + 5; 

    string name;
    int number;

    cout << "Welcome to the Escape The Dungeon Game!\n";
    cout << "What is your name weary traveler?: ";
    cin >> name;

    cout << name << ", you are trapped in a dark dungeon. You must survive through " << goal 
    << " doors in order to escape! There are 2 doors in front of you." 
    << " Do you want to enter door 1 or 2? ";
    cin >> number;
    

    while (alive == true && survived < goal)
    {
        randomize(alive);
        survived++;
    }

    return 0;
}

void randomize(bool& alive)
{
    int num = rand() % 5 + 1;
    if (arr[num - 1] >= 0)
    {
        switch (num)
        {
            case 1:
                env1();
                break;

            case 2:
                env2();
                break;

            case 3:
                env3();
                break;

            case 4:
                env4();
                break;

            case 5:
                env5();
                break;
    
        }
        arr[num - 1]++;
    } 
    else
    survived--;
    
}

// Door Option 1
void env1()
{
    cout << "\nYou open the door and walk into a room with a volcanic pool of lava. "
    << "There is a lava monster. You must choose to run (R) or fight (F). ";

    cin >> choice;
        
    if (choice == 'R' || choice == 'r')
    {
        cout<< "You tried to outrun the lava monster and he splashed your back with lava. You burn to death.";
        alive = false;
    }
    else if (choice == 'F' || choice == 'f')
    {
        cout<< "\nYou grab a sharp rock from beside the lava pool and chuck it at the lava monster. You successfully hit it right in the eye, blinding and injuring it." 
        << "This gives you time to run past it, and you come to a new room.";
        
    }
    

}

// Door Option 2
void env2 ()
{
    
    
    cout << "\nYou open the door to find a pitch black room. You suddenly feel a breath hit the back of your neck. You freeze in a panic, you realize you only have two options."
    << "turn and fight or run away. You must choose to run (R) or fight (F)";
    cin >> choice;
    
    if (choice == 'F' || choice == 'f')
    {
        cout << "You turn around to fight and you feel a knife go through your chest. You die.";
        alive = false;
    }
    if (choice == 'R' || choice == 'r')
    {
        cout << "\nYou decide to run straight ahead of you, hoping you don't run into a wall. You manage to find a light switch. You flip it and the light turns on."
        << "revealing that there is nothing in the room.";
    }
    
    
}   

// Door Option 3
void env3 ()
{
    cout << "\nYou open the door to reveal a strange sight. Before you is another person. The room reminds you of the same one that you woke up in"
        << "\n You get a bad premonition as the doors behind you close and the voice reappears. 'Welcome to the Escape The Dungeon Game'"
        << "\nThe voice finally acknowledges you, 'oh I see another player has entered, very well then you all must fight, the winner advances to the next room";

    cout << "\nWhen you fight you have the choice of either a sword (S) or a gun (G) and your opponent will recieve the other ";
    
    cin >> choice;

    if (choice == 'S' || choice == 's')
    {
        cout << "You chose the sword, good for you however the gun had no bullets, now you must kill them anyways";

    }
    else if (choice == 'g' || choice == 'G')
    {
        cout << "'\nSmart decision you would live ... however the gun has no bullets"
            << " Your morality has gotten you killed";
        alive = false;
    }
}

// Door Option 4
void env4 ()
{
    cout << " ";
}

// Door Option 5
void env5 ()
{
    cout << " ";
}