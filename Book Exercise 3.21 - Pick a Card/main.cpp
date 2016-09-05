//
//  main.cpp
//  Book Exercise 3.21 - Pick a Card
//
//  Created by ax on 9/1/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {

    cout << "Pick A Card" << endl;
    
    // DATA AND INITIALIZATIONS
    int rank_gen = 0;
    int suit_gen = 0;
    string rank = "Rank";
    string suit = "Suit";
    srand(time(0)); // random seed
    
    // I
    
    // P
    rank_gen = (rand() % 13 +1);
    suit_gen = (rand() % 4 + 1);
    // Visual outpurs to check rand and suit gen functions
    // cout << "rank_gen: " << rank_gen << endl;
    // cout << "suit_gen: " << suit_gen << endl;
    
    switch (rank_gen) {
        case 1:
            rank = "Ace";
            break;
        case 2:
            rank = "2";
            break;
        case 3:
            rank = "3";
            break;
        case 4:
            rank = "4";
            break;
        case 5:
            rank = "5";
            break;
        case 6:
            rank = "6";
            break;
        case 7:
            rank = "7";
            break;
        case 8:
            rank = "8";
            break;
        case 9:
            rank = "9";
            break;
        case 10:
            rank = "10";
            break;
        case 11:
            rank = "Jack";
            break;
        case 12:
            rank = "Queen";
            break;
        case 13:
            rank = "King";
            break;
        default:
            rank = "Joker";
            break;
    }
    
    switch (suit_gen) {
        case 1:
            // Clubs
            suit = "\u2663";
            break;
        case 2:
            // Diamonds
            suit = "\u2666";
            break;
        case 3:
            // Hearts
            suit = "\u2665";
            break;
        case 4:
            // Spades
            suit = "\u2660";
            break;
        default:
            rank = "Wild";
            break;
    }
    
    // O
    cout << "The card is "<< rank << " of " << suit << endl;
    
    return 0;
}
