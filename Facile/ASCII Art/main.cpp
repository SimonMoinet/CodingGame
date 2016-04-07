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
    int largeur;
    cin >> largeur; cin.ignore();
    int hauteur;
    cin >> hauteur; cin.ignore();
    string texte;
    getline(cin, texte);

    vector<int> indices;
    transform(texte.begin(), texte.end(), texte.begin(), ::tolower);

    for(int i=0; i<texte.size(); i++) {
        int val_indice = texte.at(i) - 'a';

        if(val_indice >= 0 && val_indice < 26)
            indices.push_back(val_indice * largeur);
        else
            indices.push_back(26 * largeur);
    }

    for (int a=0; a<hauteur; a++)
    {
        string ROW;
        string temp;
        getline(cin, ROW);

        for(int i=0; i<indices.size(); i++) {
            for(int x=indices.at(i); x<(indices.at(i)+largeur); x++) {
                temp += ROW.at(x);
            }
        }

        cout << temp << endl;
    }
    
}