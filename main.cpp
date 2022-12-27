#include <bits/stdc++.h>
using namespace std;

class Card
{
public: 
    string name="", type="";
    int damage, health;
    
    void getStats()
    {   
        cout << "His name is " << name << endl;
        cout << "His type is " << type << endl;
        cout << "Current Health: " << health << "\n";
        cout << "Attack Power: " << damage << "\n";
    }    
    
    void printDamage() {
        cout << name << " has " << damage << " points " << endl;
    }

    void updateHealth(int attack)
    {
        cout << name << "'s health has been dropped from " << health;
        health = (health < attack) ? 0 : health - attack;
        cout << " to " << health << "\n";
    }

    void printHealth() {
        cout << name << " has " << health << " health points" << endl;
    }
};

// Explosive Type (High damage, medium health) --------------------------------------------------
// Explosive #1
class Bomba: public Card {
public:
    Bomba()
    {
        name="Bomba";
        type = "Explosive";
        damage = 200;
        health = 425;
        cout << setw(10) << name << " has been summoned\n";
    }

    ~Bomba()
    {
        cout << name << " has been destroyed\n";
    }
};

// Explosive #2
class Nuker: public Card {
public:
    Nuker()
    {
        name="Nuker";
        type = "Explosive";
        damage = 350;
        health = 225;
        cout << setw(10) << name << " has been summoned\n";
    }

    ~Nuker()
    {
        cout << name << " has been destroyed\n";
    }
};

// Explosive #3
class Detonator: public Card {
public:
    Detonator()
    {
        name="Detonator";
        type = "Explosive";
        damage = 450;
        health = 100;
        cout << setw(10) << name << " has been summoned\n";
    }

    ~Detonator()
    {
        cout << name << " has been destroyed\n";
    }
};

// Explosive #4
class Pop: public Card {
public:
    Pop()
    {
        name="Pop";
        type = "Explosive";
        damage = 275;
        health = 325;
        cout << setw(10) << name << " has been summoned\n";
    }

    ~Pop()
    {
        cout << name << " has been destroyed\n";
    }
};

// Explosive #5
class Eradicator: public Card {
public:
    Eradicator()
    {
        name="Eradicator";
        type = "Explosive";
        damage = 300;
        health = 300;
        cout << setw(10) << name << " has been summoned\n";
    }

    ~Eradicator()
    {
        cout << name << " has been destroyed\n";
    }
};
// Explosive Monsters ~END~ -------------------------------------------------------------------------


// Hunter Type (High damage, low health)

// Giants Type (low damage, high health)

// Warrior Type (medium damage, medium health)

int main()
{
    // cout << "You summoned a monster: \n";
    // Bomba * us = new Bomba;
    // cout << "Enemy has summoned a monster: \n";
    // Bomba * monster2 = new Bomba;
    // cout << "Enemy has decided to attack!\n";
    // cout << us->name << " has been attacked by opposing " << monster2->name << "\n";
    // us->setHealth(monster2->power);
    // if(us->defense <= 0) delete us;


    // --------------------------------

    int round = 0, score = 0;

    // assign cards for players (randomly)
    

    while(round < 5) {     
        // each round both players pick a card

        // calculate the winning card

        // remove the cards from player's deck 

        // update the score
        

        round++;
    }

    // announce the winner (highest score)

}   
