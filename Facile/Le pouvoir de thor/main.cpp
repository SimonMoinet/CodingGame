#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/
int main()
{
    int lightX; // the X position of the light of power
    int lightY; // the Y position of the light of power
    int initialTX; // Thor's starting X position
    int initialTY; // Thor's starting Y position
    
    string direction;
    int posX;
    int posY;
    
    cin >> lightX >> lightY >> initialTX >> initialTY; cin.ignore();
    posX = initialTX;
    posY = initialTY;
    
    // game loop
    while (1) {
        int remainingTurns; // The remaining amount of turns Thor can move. Do not remove this line.
        cin >> remainingTurns; cin.ignore();
        
        direction  = "";

        if(posY < lightY) {
            direction += "S";
            posY++;
        } else if(posY > lightY) {
            direction += "N";
            posY--;
        }
        
        if(posX < lightX) {
            direction += "E";
            posX++;
        } else if(posX > lightX) {
            direction += "W";
            posX--;
        }        
        
        // To debug: cerr << "Debug messages..." << endl;

        cout << direction << endl; // A single line providing the move to be made: N NE E SE S SW W or NW
    }
}