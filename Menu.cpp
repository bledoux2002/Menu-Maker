//Menu.cpp - main file (class?) for menu creation in terminal
//Ben Ledoux, created 1/16/2024, 11:33 AM. last editted 1/16/2024 1:57 PM

#include <string>
#include <iostream>
#include <vector>
using namespace std;

//use struct for public, class for private
//create Menu struct?

main() {

    string menuDesc;
    int menuLen;

    //Create menu description
    cout << "Welcome to Menu-Maker, a terminal-based menu creation system.\nTo create a menu, please enter the text to be displayed:\n";
    getline(cin, menuDesc);

    //Define number of menu entries
    cout << "\nNow enter the number of entries to be listed under the description:\n";
    cin >> menuLen; //may have to convert from str or char[] to int
    vector<string> menuItems(menuLen);
    cin.sync();

    //Create entries for menu
    cout << "\nPlease enter the descriptions you would like to have displayed in each menu item.\n";
    for (int i = 0; i < menuLen; i++) {
        cout << "\n" << i + 1 << "\t| ";
        getline(cin, menuItems[i]);
    }
    
    //Display user-created menu 
    cout << "\n\nHere is your menu!\n\n" + menuDesc + "\n";
    for (int i = 0; i < menuLen; i++) {
        cout << i + 1 << "\t| " + menuItems[i] + "\n";
    }
}