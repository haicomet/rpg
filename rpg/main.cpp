//
//  main.cpp
//  rpg
//
//  Created by Hailia Sommerville on 4/13/25.
//

#include <iostream>
using namespace std;
int main() {
    char ch;
    do {
        (void)system("clear");
        cout << "\n\n--------Menu-----------";
        cout << "\n\t 1. Create New Character";
        cout << "\n\t 2. Load Existing Character";
        cout << "\n\t 3. Delete Character";
        cout << "\n\t 4. Exit";
        cout << "\n\n Enter your choice (1-4): ";
        cin >> ch;
        (void)system("clear");
        switch (ch) {
            case '1':
                break;
            case '2':
                break;
            case '3':
                break;
            case '4': cout << "byee!";
                exit(0);
                
        }
    } while (ch!=4);
    
    

    return 0;
}
