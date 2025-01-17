#include <iostream>
#include <fstream>
#include <iomanip>
#include <list>
#include "Goat.h"
using namespace std;

const int SZ_NAMES = 200, SZ_COLORS = 25, MAX_AGE = 20;

int select_goat(list<Goat> trip);
void delete_goat(list<Goat> &trip);
void add_goat(list<Goat> &trip, string [], string []);
void display_trip(list<Goat> trip);
int main_menu();

int main() {
    srand(time(0));

    list<Goat> trip {};

    // read & populate arrays for names and colors
    ifstream fin("names.txt");
    string names[SZ_NAMES];
    int i = 0;
    while (fin >> names[i++]);
    fin.close();
    ifstream fin1("colors.txt");
    string colors[SZ_COLORS];
    i = 0;
    while (fin1 >> colors[i++]);
    fin1.close();

    while (true)
    {
        if (main_menu() == 1)
            add_goat(trip);
    }

    return 0;
}

int select_goat(list<Goat> trip)
{

}
void delete_goat(list<Goat> &trip)
{

}
void add_goat(list<Goat> &trip, string [], string [])
{

}
void display_trip(list<Goat> trip)
{

}
int main_menu()
{
    int choice;

    while (true)
    {
        cout << "\n*** GOAT MANAGER 3001 ***\n";
        cout << "[1] Add a goat\n";
        cout << "[2] Delete a goat\n";
        cout << "[3] List goats\n";
        cout << "[4] Quit\n";
        cout << "Choice --> \n";

        try
        {
            string buf;
            cin >> buf;
            cin.ignore(1000, 10);
            choice = stoi(buf);

            return choice;
        }
        catch (invalid_argument&)
        {
            cout << "ERROR: You did not enter an integer\n";
        }
    }
}

