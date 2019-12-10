/* ======================================================================================= */
/* ======================================================================================= */
// Class: CS-1C
// Creator: Joshua Yang
// Contact: joshuayang0324@gmail.com
// Professor: Kath
// Date: 1/24/2019
/* ======================================================================================= */
// Rules/Algorithm: Write a class that will represent a card
// in a standard deck of playing cards. You will need to represent both the suit as 
// the rank of each card.
/* ======================================================================================= */
// Work: 
// CS1C Spring 2019 TTH HW-1 50pts Due: Th 1/24/2019
// cs1c@cs1c-VirtualBox ~/cs1c/hw/01 $ script hw01.scr
// Script started, file is hw01.scr
// cs1c@cs1c-VirtualBox ~/cs1c/hw01 $ date
// ... 
// Cs1c@cs1c-VirtualBox ~/cs1c/hw/01 $ Is -1
// ... 
// Cs1c@cs1c-VirtualBox ~/cs1c/hw/01 $ make all
// ...
// Cs1c@cs1c-VirtualBox ~/cs1c/hw/01 $ Is -1
// ...
// Cs1c@cs1c-VirtualBox ~/cs1c/hw/01 $ ./hw01
// ...//print out parts a, d & g above
// cs1c@cs1c-VirtualBox ~/cs1c/hw/01 $ exit
// Script done, file is hw01.scr
// Cs1c@cs1c-VirtualBox ~/cs1c/hw/01 $ make tar
// ...
// Submit the tar package file hw01.tar by Thursday January 24, 2019.
/* ======================================================================================= */
/* ======================================================================================= */
// Code:

using namespace std;

#include <string>
#include <stdio.h>
#include<bits/stdc++.h>
#include "cardDeckClass.h"

void Deck::initialize(){
    string suit[4] = {"Clubs", "Diamonds", "Hearts", "Spades"};
    string rank[13] = {"A", "K", "Q", "J", "10", "9", "8", "7", "6", "5", "4", "3", "2"};

    int position = 0;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 13; j++){
            this->deck[position] = rank[j] + "-" + suit[i];
            position = position + 1;
        }
    }
}

void Deck::printDeck(){
    for(int i = 0; i < 52; i++){
         cout << deck[i] << "\n";
    }
}

void Deck::perfectShuffle(){
    string newdeck[52];
    int counter = 0;
    for(int i = 0; i < 26; i++){
        newdeck[counter] = deck[i];
        newdeck[counter + 1] = deck[i+26];
        counter = counter + 2;
    }
    for(int i = 0; i <52; i++){
        deck[i] = newdeck[i];
    }
}

int Deck::compare(Deck cardDeck2){
    string deck2[52] = cardDeck2.deck;
    for(int i = 0; i<52; i++){
        if(deck[i] != deck2[i]){
            return 0;
        }
    }
    return 1;
}

int main(){
    Deck deck1;
    deck1.initialize();
    cout << "\nInitial deck" << "\n";
    deck1.printDeck();
    deck1.perfectShuffle();
    cout << "\nDeck after first shuffle" << "\n";
    deck1.printDeck();
    Deck deck2;
    deck2.initialize();
    int comp = deck1.compare(deck2);
    int shuffles = 1;
    while(comp == 0){
        deck1.perfectShuffle();
        comp = deck1.compare(deck2);
        shuffles = shuffles + 1;
    }
    cout << "\nFinal deck" << "\n";
    deck1.printDeck();

    cout << "\nNumber of perfect shuffles to get original configuration = " << shuffles << "\n";
}
