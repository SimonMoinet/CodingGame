#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int road; // the length of the road before the gap.
    cin >> road; cin.ignore();
    int gap; // the length of the gap.
    cin >> gap; cin.ignore();
    int platform; // the length of the landing platform.
    cin >> platform; cin.ignore();

    // game loop
    while (1) {
        int speed; // the motorbike's speed.
        cin >> speed; cin.ignore();
        int coordX; // the position on the road of the motorbike.
        cin >> coordX; cin.ignore();

        cerr << coordX+speed << endl;
        cerr << road << endl;
        cerr << gap << endl;
        cerr << platform << endl;
        
        if(coordX > road || speed > gap+1) {
            cout << "SLOW" << endl;
        }
        else if(speed < gap+1) {
            cout << "SPEED" << endl;
        }
        else if(coordX+gap >= road) {
            cout << "JUMP" << endl;
        }
        else {
            cout << "WAIT" << endl;
        }
    }
}