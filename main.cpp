#include <bits/stdc++.h>
using namespace std;

// This block of code is used to define that if you are using windows then the system will clear the terminal using cls,
// otherwise it will use clear to clear the terminal
#if defined(_WIN64) || defined(_WIN32) || defined(__CYGWIN__)
    #define osClearCommand "cls"
#else
    #define osClearCommand "clear"
#endif

void displayCards();

class Card
{
// base class.
public: 
    string name="", type="";
    int damage, health;
    bool played = false;
    
    // A function that prints out the monster's stats.
    void getStats()
    {   
        cout << "His name is " << name << endl;
        cout << "His type is " << type << endl;
        cout << "Current Health: " << health << endl;
        cout << "Attack Power: " << damage << endl << endl;
    }    
    
    // A function that prints the damage of the monster.
    void printDamage() {
        cout << name << " has " << damage << " points " << endl;
    }

    // A function that updates the monster's health.
    void updateHealth(int attack)
    {
        cout << name << "'s health has been dropped from " << health;
        health = (health < attack) ? 0 : health - attack;
        cout << " to " << health << endl;
    }

    // A function that prints out the monster's health.
    void printHealth() {
        cout << name << " has " << health << " health points" << endl;
    }

    // A function that prints out the summoning of the monster.
    void callCard(){
        cout << setw(10) << name << " has been summoned\n";
    }

    // A function that prints out the winner.
    virtual void winMsg()
    {
        cout << name << " is the winner!\n";
    }
};

// Explosive Type (High damage 250-350 , medium health 300-450) --------------------------------------------------
// Explosive #1
class Bomba: public Card {
// A monster derived class.
public:

    // Monster's constructor that sets out initially his attributes.
    Bomba()
    {
        name="Bomba";
        type = "Explosive";
        damage = 250;
        health = 425;
    }

    // A special message for the monster if he won.
    void winMsg()
    {
        Card :: winMsg();
        cout << "Nothing warms an Explosive Monster's cold and undead heart like blowing up his opponents!\n";
    }

    // Destructor message if he got destroyed.
    ~Bomba()
    {
        cout << name << " has Exploded!\n";
    }
};

// Explosive #2
class Nuker: public Card {
// A monster derived class.
public:

    // Monster's constructor that sets out initially his attributes.
    Nuker()
    {
        name="Nuker";
        type = "Explosive";
        damage = 350;
        health = 350;
    }

    // A special message for the monster if he won.
    void winMsg()
    {
        Card :: winMsg();
        cout << "Nothing warms an Explosive Monster's cold and undead heart like blowing up his opponents!\n";
    }

    // Destructor message if he got destroyed.
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
        damage = 350;
        health = 300;
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
        health = 375;
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
        health = 410;
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
    int score = 0;

    // Constructor initalizes private members:
    Player(int m = 5) {
        maxNCards = m;
        cards = new Card[m];
    }    

    // Set the user's name:
    void setName()
    {
        system(osClearCommand);
        string n;
        cout << "Welcome to YaHooba!\n";
        cout << "Enter your name: "; getline(cin, n); cout << "\n";
        name = n;
    }

    // Get the user's name:
    void getName()
    {
        cout << name << endl;
    }

    // The user gets to pick his cards:
    void pickCards(Player user) {
        int i = 0, num = 0, temp = 0;
        while(i < maxNCards)
        {
            int garbage = 0;
            cout << "Pick card number: ";
            cin >> num;
            if(num > 0 && num < 21)
            {
                if(user.pickedCards[num])
                {
                    cout << "You've already picked this monster, please pick another one!\n";
                    continue;
                }
                else
                {
                    cout << "(1) View card details.\n";
                    cout << "(2) Confirm card choice.\n";
                    while(1)
                    {
                        cout << "Enter your choice: ";
                        cin >> temp;
                        if(temp == 1 || temp == 2) {
                            switchFunction(num,user,i,temp);
                            cout << "Next? (1): ";
                            while(garbage != 1) cin >> garbage;
                            system(osClearCommand);
                            displayCards();
                            if (temp == 2) i++;
                            break;
                        }
                        cout << "Please choose correctly.\n\n";
                    }
                }
            }
            else { cout << "You are out of boundaries! Choose again.\n"; }
        }
    }

    // Random cards for AI:
    void pickRandomCards(Player user) {
        int i = 0, num = 0;
        while(i < maxNCards)
        {
            num = rand()%20+1;
            if(num > 0 && num < 21)
            {
                if(user.pickedCards[num])
                {   
                    continue;
                }
                switchFunction(num,user,i,2);
                i++;
            }
        }
    }

    void switchFunction(int num, Player& user, int i, int temp)
    {
        switch (num)
        {
            case 1:
            {
                Card *bomba = new Bomba();
                if(temp == 1) 
                {
                    bomba->getStats();
                    delete bomba;
                    break;
                }
                user.pickedCards[1] = 1;
                user.cards[i] = *bomba;
                break;
            }
            case 2:
            {
                Card *nuker = new Nuker();
                if(temp == 1) 
                {
                    nuker->getStats();
                    delete nuker;
                    break;
                }
                user.pickedCards[2] = 1;
                user.cards[i] = *nuker;
                break;
            }
            case 3:
            {
                Card *detonator = new Detonator();
                if(temp == 1) 
                {
                    detonator->getStats();
                    delete detonator;
                    break;
                }
                user.pickedCards[3] = 1;
                user.cards[i] = *detonator;
                break;
            }
            case 4:
            {
                Card *pop = new Pop();
                if(temp == 1) 
                {
                    pop->getStats();
                    delete pop;
                    break;
                }
                user.pickedCards[4] = 1;
                user.cards[i] = *pop;
                break;
            }
            case 5:
            {
                Card *eradicator = new Eradicator();
                if(temp == 1) 
                {
                    eradicator->getStats();
                    delete eradicator;
                    break;
                }
                user.pickedCards[5] = 1;
                user.cards[i] = *eradicator;
                break;
            }   
            case 6:
            {
                Card *yogi = new Yogi();
                if(temp == 1) 
                {
                    yogi->getStats();
                    delete yogi;
                    break;
                }
                user.pickedCards[6] = 1;
                user.cards[i] = *yogi;
                break;
            }
            case 7:
            {
                Card *gogo = new GoGo();
                if(temp == 1) 
                {
                    gogo->getStats();
                    delete gogo;
                    break;
                }
                user.pickedCards[7] = 1;
                user.cards[i] = *gogo;
                break;
            }
            case 8:
            {
                Card *leo = new Leo(); 
                if(temp == 1) 
                {
                    leo->getStats();
                    delete leo;
                    break;
                }
                user.pickedCards[8] = 1;
                user.cards[i] = *leo;
                break;
            }
            case 9:
            {
                 Card *avatar = new Avatar();
                 if(temp == 1) 
                {
                    avatar->getStats();
                    delete avatar;
                    break;
                }
                 user.pickedCards[9] = 1;
                 user.cards[i] = *avatar;
                 break;
            }
            case 10:
            {
                Card *ventura = new Ventura();
                if(temp == 1) 
                {
                    ventura->getStats();
                    delete ventura;
                    break;
                }
                user.pickedCards[10] = 1;
                user.cards[i] = *ventura;
                break;
            }
            case 11:
            {
                Card *golem = new Golem();
                if(temp == 1) 
                {
                    golem->getStats();
                    delete golem;
                    break;
                }
                user.pickedCards[11] = 1;
                user.cards[i] = *golem;
                break;
            }
            case 12:
            {
                Card *yeti = new Yeti();
                if(temp == 1) 
                {
                    yeti->getStats();
                    delete yeti;
                    break;
                }
                user.pickedCards[12] = 1;
                user.cards[i] = *yeti;
                break;
            }
            case 13:
            {
                Card *grimm = new Grimm();
                if(temp == 1) 
                {
                    grimm->getStats();
                    delete grimm;
                    break;
                }
                user.pickedCards[13] = 1;
                user.cards[i] = *grimm;
                break;
            }
            case 14:
            {
                Card *pekka = new PEKKA();
                if(temp == 1) 
                {
                    pekka->getStats();
                    delete pekka;
                    break;
                }
                user.pickedCards[14] = 1;
                user.cards[i] = *pekka;
                break;
            }
            case 15:
            {
                Card *colossal = new Colossal;
                if(temp == 1) 
                {
                    colossal->getStats();
                    delete colossal;
                    break;
                }
                user.pickedCards[15] = 1;
                user.cards[i] = *colossal;
                break;
            }
            case 16:
            {
                Card *ethan = new Ethan;
                if(temp == 1) 
                {
                    ethan->getStats();
                    delete ethan;
                    break;
                }
                user.pickedCards[16] = 1;
                user.cards[i] = *ethan;
                break;
            }
            case 17:
            {
                Card *harold = new Harold;
                if(temp == 1) 
                {
                    harold->getStats();
                    delete harold;
                    break;
                }
                user.pickedCards[17] = 1;
                user.cards[i] = *harold;
                break;
            }
            case 18:
            {
                Card *kane = new Kane;
                if(temp == 1) 
                {
                    kane->getStats();
                    delete kane;
                    break;
                }
                user.pickedCards[18] = 1;
                user.cards[i] = *kane;
                break;
            }
            case 19:
            {
                Card *lewis = new Lewis;
                if(temp == 1) 
                {
                    lewis->getStats();
                    delete lewis;
                    break;
                }
                user.pickedCards[19] = 1;
                user.cards[i] = *lewis;
                break;
            }
            case 20:
            {
                Card *liam = new Liam;
                if(temp == 1) 
                {
                    liam->getStats();
                    delete liam;
                    break;
                }
                user.pickedCards[20] = 1;
                user.cards[i] = *liam;
                break;
            }
        }        
    }
    // The choice for the player to play whichever card:
    Card* play() {
        int n,temp;
        Card *c;
        printPlayerCards();
        
        do
        {
            cout << "Pick a card from the deck to fight with: ", cin >> n;
            if(n < 1 || n > 5) continue;
            temp = n-1;
            c = &cards[temp];
        } while ( n < 1 || n > 5 || c->played );
        
        c->played = true;
        
        return c; 
    }

    // The random choice for the AI:
    Card* playRandom() {
        int n = 0;
        Card *c;
        
        do
        {
            n = rand()%maxNCards;
            c = &cards[n];
        } while (c->played);

        c->played = true;
        return &cards[n];
    }

    // A function that prints the players cards:
    void printPlayerCards() {
        cout << endl << "Your Cards:" << endl;
        for (int i = 0; i < maxNCards; i++) {
            if (cards[i].played == false) {
                cout << "Card " << i+1 << endl; 
                cards[i].getStats();
            }
        }
    }

    private:
    int maxNCards;
    Card* cards;
};

class Game {
// A class that contains the game's logic.
public:
    // Application of the built methods.
    void run() {
        int nRounds = 5;
        Player player(nRounds), computer(nRounds);
        player.setName();

        displayCards();

        player.pickCards(player);
        computer.pickRandomCards(computer);

        continueGame();
        
        while (nRounds--)
        {
            system(osClearCommand);

            Card *playerCard = player.play();
            Card *computerCard = computer.playRandom();

            system(osClearCommand);

            cout << "Your Card: " << endl;
            playerCard->getStats();
            cout << "Opponent's Card:" << endl;
            computerCard->getStats();
            
            int result = calculateWinner(playerCard, computerCard);
            player.score += (result == 1);
            computer.score += (result == -1);

            continueGame();
        }

        announceTheWinner(&player, &computer);
    }
    private:

    // A function that prints out the game's winner.
    void announceTheWinner(Player *player, Player *computer) {

        system(osClearCommand);

        if (player->score > computer->score)
            cout << "Congratulations to you, " << player->name << " , you've won the game. \n" << endl;
        else if (player->score == computer->score) 
            cout << "The game has ended in a draw. \n" << endl;
        else 
            cout << "Sorry, " << player->name << " , the opponent has won the game. \n" << endl;;

    }

    // A function that calculates the winner of the by checking the last survivor of the duel.
    int calculateWinner(Card* playerCard, Card* computerCard) {
        int winner = 0;

        while(true) {
            playerCard->updateHealth(computerCard->damage);
            computerCard->updateHealth(playerCard->damage);
            if (playerCard->health == 0 && computerCard->health == 0) {
                winner = 0;
                break;
            }
            else if (playerCard->health == 0) {
                winner = -1;
                break;
            }
            else if (computerCard->health == 0) {
                winner = 1;
                break;
            }
        }

        if (winner == 1) 
                cout << "You won the round" << endl;
            else if (winner == -1)
                cout << "The opponent won the round" << endl;
            else
                cout << "The round ended in a draw" << endl;

        return winner;
    }

    // A function that asks the user if he wants to play the game.
    void continueGame() {
        cout << endl << "Enter Y to continue: ";
        char ch;
        cin >> ch;
        if (ch != 'y' && ch != 'Y') exit(0);
    }
};

int main()
{   
    Game game;

    game.run();
} 
// end of main

// A function that displays the game's cards.
void displayCards()
{
    system(osClearCommand);
    cout << "Available Cards:\n (1) Bomba, (2) Nuker, (3) Detonator, (4) Pop, (5) Eradicator "
        << "(6) Yogi, (7) GoGo, (8) Leo, (9) Avatar, (10) Ventura\n (11) Golem, (12) Yeti, (13) Grimm "
        << "(14) PEKKA, (15) Colossal, (16) Ethan, (17) Harold, (18) Kane, (19) Lewis, (20) Liam\n\n"
        << "Choose 5 cards\n"
        << "--------------\n";
}