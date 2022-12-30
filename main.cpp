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
        cout << "Current Health: " << health << endl;
        cout << "Attack Power: " << damage << endl;
    }    
    
    void printDamage() {
        cout << name << " has " << damage << " points " << endl;
    }

    void updateHealth(int attack)
    {
        cout << name << "'s health has been dropped from " << health;
        health = (health < attack) ? 0 : health - attack;
        cout << " to " << health << endl;
    }

    void printHealth() {
        cout << name << " has " << health << " health points" << endl;
    }

    void callCard(){
        cout << setw(10) << name << " has been summoned\n";
    }

    virtual void winMsg()
    {
        cout << name << " is the winner!\n";
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
    }

    void winMsg()
    {
        Card :: winMsg();
        cout << "Nothing warms an Explosive Monster's cold and undead heart like blowing up his opponents!\n";
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
    }

    void winMsg()
    {
        Card :: winMsg();
        cout << "Nothing warms an Explosive Monster's cold and undead heart like blowing up his opponents!\n";
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
    }

    void winMsg()
    {
        Card :: winMsg();
        cout << "Nothing warms an Explosive Monster's cold and undead heart like blowing up his opponents!\n";
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
    }

    void winMsg()
    {
        Card :: winMsg();
        cout << "Nothing warms an Explosive Monster's cold and undead heart like blowing up his opponents!\n";
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
    }

    void winMsg()
    {
        Card :: winMsg();
        cout << "Nothing warms an Explosive Monster's cold and undead heart like blowing up his opponents!\n";
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
    }

    void winMsg()
    {
        Card :: winMsg();
        cout << "Nothing makes a sharpshooting hunter happier than single-mindedly taking down their target!\n";
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
    }

    void winMsg()
    {
        Card :: winMsg();
        cout << "Nothing makes a sharpshooting hunter happier than single-mindedly taking down their target!\n";
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
    }

    void winMsg()
    {
        Card :: winMsg();
        cout << "Nothing makes a sharpshooting hunter happier than single-mindedly taking down their target!\n";
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
    }

    void winMsg()
    {
        Card :: winMsg();
        cout << "Nothing makes a sharpshooting hunter happier than single-mindedly taking down their target!\n";
    }

    ~Avatar()
    {
        cout << name << " has been Hunted!\n";
    }
};

//hunter #5
class Ventura: public Card {
public:
    Ventura()
    {
        name="Ventura";
        type = "Hunter";
        damage = 369;
        health = 196;
    }

    void winMsg()
    {
        Card :: winMsg();
        cout << "Nothing makes a sharpshooting hunter happier than single-mindedly taking down their target!\n";
    }

    ~Ventura()
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
    }

    void winMsg()
    {
        Card :: winMsg();
        cout << "You cannot take down the BIG GUY\n";
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
    }

    void winMsg()
    {
        Card :: winMsg();
        cout << "You cannot take down the BIG GUY\n";
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
    }

    void winMsg()
    {
        Card :: winMsg();
        cout << "You cannot take down the BIG GUY\n";
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
    }

    void winMsg()
    {
        Card :: winMsg();
        cout << "You cannot take down the BIG GUY\n";
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
    }

    void winMsg()
    {
        Card :: winMsg();
        cout << "You cannot take down the BIG GUY\n";
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
    }

    void winMsg()
    {
        Card :: winMsg();
        cout << "Release a horde of fearless warriors and enjoy  the mayhem!\n";
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
    }

    void winMsg()
    {
        Card :: winMsg();
        cout << "Release a horde of fearless warriors and enjoy  the mayhem!\n";
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
    }

    void winMsg()
    {
        Card :: winMsg();
        cout << "Release a horde of fearless warriors and enjoy  the mayhem!\n";
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
    }

    void winMsg()
    {
        Card :: winMsg();
        cout << "Release a horde of fearless warriors and enjoy  the mayhem!\n";
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
    }
    
    void winMsg()
    {
        Card :: winMsg();
        cout << "Release a horde of fearless warriors and enjoy  the mayhem!\n";
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
    bool pickedCards[20]{0};

    Player(int m = 5) {
        maxNCards = m;
        cards = new Card[m];
    }    

    void setName()
    {
        string n;
        cout << "Enter your name: "; getline(cin, n); cout << "\n";
        system("clear");
    }

    void getName()
    {
        cout << name << endl;
    }

    void pickCards(Player user) {
        int i = 0, num = 0;
        while(i < maxNCards)
        {
            cout << "Pick card number: ";
            cin >> num;
            if(user.pickedCards[num])
            {
                cout << "You've already picked this monster, please pick another one!\n";
                continue;
            }
            if(num > 0 && num < 21)
            {
                switch (num)
                {
                    case 1:
                    {
                        user.pickedCards[1] = 1;
                        Card *bomba = new Bomba();
                        user.cards[i] = *bomba;
                        break;
                    }
                    case 2:
                    {
                        user.pickedCards[2] = 1;
                        Card *nuker = new Nuker();
                        user.cards[i] = *nuker;
                        break;
                    }
                    case 3:
                    {
                        user.pickedCards[3] = 1;
                        Card *detonator = new Detonator();
                        user.cards[i] = *detonator;
                        break;
                    }
                    case 4:
                    {
                        user.pickedCards[4] = 1;
                        Card *pop = new Pop();
                        user.cards[i] = *pop;
                        break;
                    }
                    case 5:
                    {
                        user.pickedCards[5] = 1;
                        Card *eradicator = new Eradicator();
                        user.cards[i] = *eradicator;
                        break;
                    }   
                    case 6:
                    {
                        user.pickedCards[6] = 1;
                        Card *yogi = new Yogi();
                        user.cards[i] = *yogi;
                        break;
                    }
                    case 7:
                    {
                        user.pickedCards[7] = 1;
                        Card *gogo = new GoGo();
                        user.cards[i] = *gogo;
                        break;
                    }
                    case 8:
                    {
                        user.pickedCards[8] = 1;
                        Card *leo = new Leo(); 
                        user.cards[i] = *leo;
                        break;
                    }
                    case 9:
                    {
                        user.pickedCards[9] = 1;
                        Card *avatar = new Avatar();
                        user.cards[i] = *avatar;
                        break;
                    }
                    case 10:
                    {
                        user.pickedCards[10] = 1;
                        Card *ventura = new Ventura();
                        user.cards[i] = *ventura;
                        break;
                    }
                    case 11:
                    {
                        user.pickedCards[11] = 1;
                        Card *golem = new Golem();
                        user.cards[i] = *golem;
                        break;
                    }
                    case 12:
                    {
                        user.pickedCards[12] = 1;
                        Card *yeti = new Yeti();
                        user.cards[i] = *yeti;
                        break;
                    }
                    case 13:
                    {
                        user.pickedCards[13] = 1;
                        Card *grimm = new Grimm();
                        user.cards[i] = *grimm;
                        break;
                    }
                    case 14:
                    {
                        user.pickedCards[14] = 1;
                        Card *pekka = new PEKKA();
                        user.cards[i] = *pekka;
                        break;
                    }
                    case 15:
                    {
                        user.pickedCards[15] = 1;
                        Card *colossal = new Colossal;
                        user.cards[i] = *colossal;
                        break;
                    }
                    case 16:
                    {
                        user.pickedCards[16] = 1;
                        Card *ethan = new Ethan;
                        user.cards[i] = *ethan;
                        break;
                    }
                    case 17:
                    {
                        user.pickedCards[17] = 1;
                        Card *harold = new Harold;
                        user.cards[i] = *harold;
                        break;
                    }
                    case 18:
                    {
                        user.pickedCards[18] = 1;
                        Card *kane = new Kane;
                        user.cards[i] = *kane;
                        break;
                    }
                    case 19:
                    {
                        user.pickedCards[19] = 1;
                        Card *lewis = new Lewis;
                        user.cards[i] = *lewis;
                        break;
                    }
                    case 20:
                    {
                        user.pickedCards[20] = 1;
                        Card *liam = new Liam;
                        user.cards[i] = *liam;
                        break;
                    }
                }
                i++;
            }
            else { cout << "You are out of boundaries! Choose again.\n"; }
        }
        system("clear");
    }

    void pickRandomCards(Player user) {
        int i = 0, num = 0;
        while(i < maxNCards)
        {
            num = rand()%20+1;
            if(user.pickedCards[num])
            {
                continue;
            }
            if(num > 0 && num < 21)
            {
                switch (num)
                {
                    case 1:
                    {
                        Card *bomba = new Bomba();
                        user.cards[i] = *bomba;
                        break;
                    }
                    case 2:
                    {
                        Card *nuker = new Nuker();
                        user.cards[i] = *nuker;
                        break;
                    }
                    case 3:
                    {
                        Card *detonator = new Detonator();
                        user.cards[i] = *detonator;
                        break;
                    }
                    case 4:
                    {
                        Card *pop = new Pop();
                        user.cards[i] = *pop;
                        break;
                    }
                    case 5:
                    {
                        Card *eradicator = new Eradicator();
                        user.cards[i] = *eradicator;
                        break;
                    }   
                    case 6:
                    {
                        Card *yogi = new Yogi();
                        user.cards[i] = *yogi;
                        break;
                    }
                    case 7:
                    {
                        Card *gogo = new GoGo();
                        user.cards[i] = *gogo;
                        break;
                    }
                    case 8:
                    {
                        Card *leo = new Leo(); 
                        user.cards[i] = *leo;
                        break;
                    }
                    case 9:
                    {
                        Card *avatar = new Avatar();
                        user.cards[i] = *avatar;
                        break;
                    }
                    case 10:
                    {
                        Card *ventura = new Ventura();
                        user.cards[i] = *ventura;
                        break;
                    }
                    case 11:
                    {
                        Card *golem = new Golem();
                        user.cards[i] = *golem;
                        break;
                    }
                    case 12:
                    {
                        Card *yeti = new Yeti();
                        user.cards[i] = *yeti;
                        break;
                    }
                    case 13:
                    {
                        Card *grimm = new Grimm();
                        user.cards[i] = *grimm;
                        break;
                    }
                    case 14:
                    {
                        Card *pekka = new PEKKA();
                        user.cards[i] = *pekka;
                        break;
                    }
                    case 15:
                    {
                        Card *colossal = new Colossal;
                        user.cards[i] = *colossal;
                        break;
                    }
                    case 16:
                    {
                        Card *ethan = new Ethan;
                        user.cards[i] = *ethan;
                        break;
                    }
                    case 17:
                    {
                        Card *harold = new Harold;
                        user.cards[i] = *harold;
                        break;
                    }
                    case 18:
                    {
                        Card *kane = new Kane;
                        user.cards[i] = *kane;
                        break;
                    }
                    case 19:
                    {
                        Card *lewis = new Lewis;
                        user.cards[i] = *lewis;
                        break;
                    }
                    case 20:
                    {
                        Card *liam = new Liam;
                        user.cards[i] = *liam;
                        break;
                    }
                }
                i++;
            }
            else { cout << "You are out of boundaries! Choose again.\n"; }
        }
        system("clear");
    }

    void printPlayerCards(string p) {
        cout << endl << p << " Cards:" << endl;
        for (int i = 0; i < maxNCards; i++) {
            cout << "Card " << i+1 << endl; 
            cards[i].getStats();
        }
    }
    
    
    // Card getCard() {

    // };

    private:
    int maxNCards;
    Card* cards;
};

class Game {
public:
    void console() {
        Player player, computer;
        player.setName();

        displayCards();

        player.pickCards(player);
        computer.pickRandomCards(computer);

        player.printPlayerCards(player.name);
        computer.printPlayerCards("computer");
    }

    void displayCards()
    {
        cout << "Available Cards:\n (1) Bomba, (2) Nuker, (3) Detonator, (4) Pop, (5) Eradicator "
            << "(6) Yogi, (7) GoGo, (8) Leo, (9) Avatar, (10) Ventura\n (11) Golem, (12) Yeti, (13) Grimm "
            << "(14) PEKKA, (15) Colossal, (16) Ethan, (17) Harold, (18) Kane, (19) Lewis, (20) Liam\n\n"
            << "Choose 5 cards\n"
            << "--------------\n";
    }
 /* private:
    Card cards[20] = {Bomba(), Nuker(), Detonator(), Pop(), Eradicator(), Yogi(), GoGo(), Leo(), Avatar(), Ventura(), 
                    Golem(), Yeti(), Grimm(), PEKKA(), Colossal(), Ethan(), Harold(), Kane(), Lewis(), Liam()}; */
};

int main()
{   
    Game game;

    game.console();
    
    // user1.setName();
    // game.displayCards();
    // user1.pickCards(user1);


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
// end of main


