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

#include <string>
using namespace std;

class Deck{
    public:
    string deck[52];
    void initialize();
    void printDeck();
    void perfectShuffle();
    int compare(Deck cardDeck2);
};
