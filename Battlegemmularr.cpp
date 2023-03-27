#include<iostream>
using namespace std;
int main()
{
    // We put "1" to indicate there is a ship.
    bool ships[4][4] = {
        {0,0,0,1},
        {0,0,1,0},
        {0,1,0,0},
        {1,0,0,0},
    };
    int hits = 0;
    int noofturn = 0;

    while (hits < 4){
        int row,column;
        cout << "Selecting Coordinates\n";

        cout << "Choose a  Row Number Between 0 to 3:";
        cin >> row;

         cout << "Choose a  Column Number Between 0 to 3:";
        cin >> column;

    // Check if a ship exists in those coordinates
        if (ships[row][column]){
            ships[row][column] = 0;
        hits++;
        cout << "Hits!!" << (4-hits) <<" " << "lefts.\n\n";
        } else {
        cout << "Miss!!" << (4-hits) <<" " << "lefts.\n\n";
               }

       // Count how many turns the player has taken
      noofturn++;
    }
    cout << "Victory!!!\n";
    cout << "You Won" <<" " << noofturn <<" " << "turns";
    return 0;


}
