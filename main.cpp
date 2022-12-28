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

// Explosive Type (High damage 250-350 , medium health 300-450) --------------------------------------------------
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


// hunter Type (High damage 300-400, low health 180-200) --------------------------------------------------

// hunter #1
class Yogi: public Card {
public:
    Yogi()
    {
        name="Yogi";
        type = "Hunter";
        damage = 350;
        health = 189;
        cout << setw(10) << name << " has been summoned\n";
    }

    ~Yogi()
    {
        cout << name << " has been destroyed\n";
    }
};

// hunter #2

class GoGo: public Card {
public:
    GoGo()
    {
        name="GoGo";
        type = "Hunter";
        damage = 400;
        health = 200;
        cout << setw(10) << name << " has been summoned\n";
    }

    ~GoGo()
    {
        cout << name << " has been destroyed\n";
    }
};

//hunter #3
class Leo: public Card {
public:
    Leo()
    {
        name="Leo";
        type = "Hunter";
        damage = 390;
        health = 193;
        cout << setw(10) << name << " has been summoned\n";
    }

    ~Leo()
    {
        cout << name << " has been destroyed\n";
    }
};

//hunter #4
class Avatar: public Card {
public:
    Avatar()
    {
        name="Avatar";
        type = "Hunter";
        damage = 380;
        health = 190;
        cout << setw(10) << name << " has been summoned\n";
    }

    ~Avatar()
    {
        cout << name << " has been destroyed\n";
    }
};

//hunter #5
class Vendora: public Card {
public:
    Vendora()
    {
        name="Vendora";
        type = "Hunter";
        damage = 369;
        health = 196;
        cout << setw(10) << name << " has been summoned\n";
    }

    ~Vendora()
    {
        cout << name << " has been destroyed\n";
    }
};


// hunter  Monsters ~END~ -------------------------------------------------------------------------

// Giants Type (low damage 50-75, high health 1000-1500) --------------------------------------------------

//Giant #1
class Golem: public Card {
public:

    Golem()
    {
        name="Golem";
        type = "Giant";
        damage = 50;
        health = 1500;
        cout << setw(10) << name << " has been summoned\n";
    }

    ~Golem()
    {
        cout << name << " has been destroyed\n";
    }
};

//Giant #2
class Yeti: public Card {
public:

    Yeti()
    {
        name="Yeti";
        type = "Giant";
        damage = 55;
        health = 1400;
        cout << setw(10) << name << " has been summoned\n";
    }

    ~Yeti()
    {
        cout << name << " has been destroyed\n";
    }
};

//Giant #3
class Grimm: public Card {
public:

    Grimm()
    {
        name="Grimm";
        type = "Giant";
        damage = 60;
        health = 1300;
        cout << setw(10) << name << " has been summoned\n";
    }

    ~Grimm()
    {
        cout << name << " has been destroyed\n";
    }
};

//Giant #4
class PEKKA: public Card {
public:

    PEKKA()
    {
        name="PEKKA";
        type = "Giant";
        damage = 65;
        health = 1200;
        cout << setw(10) << name << " has been summoned\n";
    }

    ~PEKKA()
    {
        cout << name << " has been destroyed\n";
    }
};

//Giant #5
class Colossal: public Card {
public:

    Colossal()
    {
        name="Colossal";
        type = "Giant";
        damage = 75;
        health = 1000;
        cout << setw(10) << name << " has been summoned\n";
    }

    ~Colossal()
    {
        cout << name << " has been destroyed\n";
    }
};

// Giant  Monsters ~END~ -------------------------------------------------------------------------

// Warrior Type (medium damage 185-200, medium health 300-500)
// Warrior 1
class Ethan: public Card {
public:
    Ethan()
    {
        name="Ethan";
        type = "Warrior";
        damage = 185;
        health = 450;
        cout << setw(10) << name << " has been summoned\n";
    }

    ~Ethan()
    {
        cout << name << " has been destroyed\n";
    }
};

//Warrior 2 
class Harold: public Card {
public:
    Harold()
    {
        name="Harold";
        type = "Warrior";
        damage = 192;
        health = 400;
        cout << setw(10) << name << " has been summoned\n";
    }

    ~Harold()
    {
        cout << name << " has been destroyed\n";
    }
};

//Warrior 3
class Kane: public Card {
public:
    Kane()
    {
        name="Kane";
        type = "Warrior";
        damage = 200;
        health = 300;
        cout << setw(10) << name << " has been summoned\n";
    }

    ~Kane()
    {
        cout << name << " has been destroyed\n";
    }
};

// Warrior 4
class Lewis: public Card {
public:
    Lewis()
    {
        name="Lewis";
        type = "Warrior";
        damage = 190;
        health = 350;
        cout << setw(10) << name << " has been summoned\n";
    }

    ~Lewis()
    {
        cout << name << " has been destroyed\n";
    }
};

// Warrior 5
class Liam: public Card {
public:
    Liam()
    {
        name="Liam";
        type = "Warrior";
        damage = 200;
        health = 320;
        cout << setw(10) << name << " has been summoned\n";
    }

    ~Liam()
    {
        cout << name << " has been destroyed\n";
    }
};

// Warriors ~END~ -------------------------------------------------------------------------

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
