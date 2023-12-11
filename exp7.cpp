#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    string state;
    int population;
    char ans = 'y';
    int choice;
    map<string, int> m;
    map<string, int>::iterator i;

    do {
        cout << "\nMain Menu";
        cout << "\n 1.Insert a state and population pair ";
        cout << "\n 2.Display";
        cout << "\n 3.Search a state";
        cout << "\n Enter your choice:";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\n Enter the name of state";
                cin >> state;
                cout << "\n Enter the population (in Cr)";
                cin >> population;
                m.insert(pair<string, int>(state, population));
                break;
            case 2:
                cout << "State and Populations are: ";
                for (i = m.begin(); i != m.end(); i++)
                    cout << "[" << (*i).first << "," << (*i).second << "]";
                break;
            case 3:
                cout << "\n Enter the name of state for searching the population";
                cin >> state;
                if (m.count(state) != 0)
                    cout << "Population is " << m.find(state)->second << "Cr";
                else
                    cout << "State is not present in the list" << endl;
                break;
        }

        cout << "\n Do you want to continue? (y/n): ";
        cin >> ans;
    } while (ans == 'y' || ans == 'Y');

    return 0;
}
