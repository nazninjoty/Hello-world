#include<iostream>
using namespace std;
enun suitz {clubs,diamonds,heats,spades};
conts int jack = 11;
conts int queen = 12;
conts int king = 13;
conts int ace =14;

class card
{
private:
    int number;
    suit suit;
public:
    card ()
    {}
    card (int n, Suit s) : number (n),suit(s)
    {}
    void display();
    bool isEqual(card);
};
void card :: display();
{
    if (number>=2 && number <=10)
        cout << number <<"of";
    else
        switch(number)
}
