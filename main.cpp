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
        cout <<  name << " has been summoned\n";
    }

    ~Bomba()
    {
        cout << name << " has Exploded!\n";
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
        cout <<  name << " has been summoned\n";
    }

    ~Nuker()
    {
        cout << name << " has Exploded!\n";
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
        cout <<  name << " has been summoned\n";
    }

    ~Detonator()
    {
        cout << name << " has Exploded!\n";
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
        cout <<  name << " has been summoned\n";
    }

    ~Pop()
    {
        cout << name << " has Exploded!\n";
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
        cout <<  name << " has been summoned\n";
    }

    ~Eradicator()
    {
        cout << name << " has Exploded!\n";
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
        cout <<  name << " has been summoned\n";
    }

    ~Yogi()
    {
        cout << name << " has been Hunted!\n";
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
        cout <<  name << " has been summoned\n";
    }

    ~GoGo()
    {
        cout << name << " has been Hunted!\n";
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
        cout <<  name << " has been summoned\n";
    }

    ~Leo()
    {
        cout << name << " has been Hunted!\n";
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
        cout <<  name << " has been summoned\n";
    }

    ~Avatar()
    {
        cout << name << " has been Hunted!\n";
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
        cout <<  name << " has been summoned\n";
    }

    ~Vendora()
    {
        cout << name << " has been Hunted!\n";
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
        cout <<  name << " has been summoned\n";
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
        cout <<  name << " has been summoned\n";
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
        cout <<  name << " has been summoned\n";
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
        cout <<  name << " has been summoned\n";
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
        cout <<  name << " has been summoned\n";
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
        cout <<  name << " has been summoned\n";
    }

    ~Ethan()
    {
        cout << name << " has been Killed!\n";
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
        cout <<  name << " has been summoned\n";
    }

    ~Harold()
    {
        cout << name << " has been Killed!\n";
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
        cout <<  name << " has been summoned\n";
    }

    ~Kane()
    {
        cout << name << " has been Killed!\n";
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
        cout <<  name << " has been summoned\n";
    }

    ~Lewis()
    {
        cout << name << " has been Killed!\n";
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
        cout <<  name << " has been summoned\n";
    }

    ~Liam()
    {
        cout << name << " has been Killed!\n";
    }
};

// Warriors ~END~ -------------------------------------------------------------------------


//Demo of Users class ~start~ ---------------------------------------------------------------------------
class Player
{
    public:


    string name;
    Card* p = new Card[5];
        

    void setName()
    {
        cout << "Enter your name: "; cin >> name; cout << "\n";
    }

    void getName()
    {
        cout << name << endl;
    }
};

void displayCards(); 

int main()
{   
    int num, i = 0;
    Player user1,user2;
    
    user1.setName();
    displayCards();
    while(i < 5 && cin >> num)
    {
        if(num > 0 && num < 21)
        {
            switch (num)
            {
                case 1:
                {
                    Card *bomba = new Bomba();
                    user1.p[i] = *bomba;
                    break;
                }
                case 2:
                {
                    Card *nuker = new Nuker();
                    user1.p[i] = *nuker;
                    break;
                }
                case 3:
                {
                    Card *detonator = new Detonator();
                    user1.p[i] = *detonator;
                    break;
                }
                case 4:
                {
                    Card *pop = new Pop();
                    user1.p[i] = *pop;
                    break;
                }
                case 5:
                {
                    Card *eradicator = new Eradicator();
                    user1.p[i] = *eradicator;
                    break;
                }   
                case 6:
                {
                    Card *yogi = new Yogi();
                    user1.p[i] = *yogi;
                    break;
                }
                case 7:
                {
                    Card *gogo = new GoGo();
                    user1.p[i] = *gogo;
                    break;
                }
                case 8:
                {
                    Card *leo = new Leo(); 
                    user1.p[i] = *leo;
                    break;
                }
                case 9:
                {
                    Card *avatar = new Avatar();
                    user1.p[i] = *avatar;
                    break;
                }
                case 10:
                {
                    Card *vendora = new Vendora();
                    user1.p[i] = *vendora;
                    break;
                }
                case 11:
                {
                    Card *golem = new Golem();
                    user1.p[i] = *golem;
                    break;
                }
                case 12:
                {
                    Card *yeti = new Yeti();
                    user1.p[i] = *yeti;
                    break;
                }
                case 13:
                {
                    Card *grimm = new Grimm();
                    user1.p[i] = *grimm;
                    break;
                }
                case 14:
                {
                    Card *pekka = new PEKKA();
                    user1.p[i] = *pekka;
                    break;
                }
                case 15:
                {
                    Card *colossal = new Colossal;
                    user1.p[i] = *colossal;
                    break;
                }
                case 16:
                {
                    Card *ethan = new Ethan;
                    user1.p[i] = *ethan;
                    break;
                }
                case 17:
                {
                    Card *harold = new Harold;
                    user1.p[i] = *harold;
                    break;
                }
                case 18:
                {
                    Card *kane = new Kane;
                    user1.p[i] = *kane;
                    break;
                }
                case 19:
                {
                    Card *lewis = new Lewis;
                    user1.p[i] = *lewis;
                    break;
                }
                case 20:
                {
                    Card *liam = new Liam;
                    user1.p[i] = *liam;
                    break;
                }
            }
            i++;
        }
        else { cout << "You are out of boundaries! Choose again.\n"; }
    }
}

void displayCards()
{
    cout << "Choose 5 Monsters:\n (1) Bomba, (2) Nuker, (3) Detonator, (4) Pop, (5) Eradicator ";
    cout << "(6) Yogi, (7) GoGo, (8) Leo, (9) Avatar, (10) Vendora\n (11) Golem, (12) Yeti, (13) Grimm ";
    cout << "(14) PEKKA, (15) Colossal, (16) Ethan, (17) Harold, (18) Kane, (19) Lewis, (20) Liam\n";
}