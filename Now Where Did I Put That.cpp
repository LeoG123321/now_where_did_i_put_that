/*
    Leonardo Gonzalez   1/18/2024

    Now Where Did I Put That?

    Write two functions - one which finds a character in a string and another which finds a substring in a string.
    The output of these functions should be the index where the character is found or where the substring begins.

*/

#include <iostream>
using namespace std;

int find(char letter);     //Finds character in text
int find(string subString);   //Finds a string in text

string text{ "The quick brown fox" };   //Sample Text

int main()
{

    char cSearch;
    string sSearch;
    int index;

    cout << "Enter a Character to be found in this text." << endl;  //Prompts user for a character
    cout << text << endl;
    cin >> cSearch;
    index = find(cSearch);
    if (index == -1) {      //Tells User that character isn't found
        cout << "Character is not found in text." << endl;
    }
    else {              //Tells the user what position the character is
        cout << "Character found at Index " << index << endl;
    }
    
    cout << "\nEnter a String to be found in this text." << endl;       //Prompts user for a string
    cout << text << endl;   
    cin >> sSearch;
    index = find(sSearch);
    if (index == -1) {          //Tells User that the String isn't found
        cout << "String is not found in text." << endl;
    } else {                    //Tells User what position the string starts
        cout << "String found at starting Index " << index << endl;
    }
    return 0;
}

int find(char letter) {     //Finds a character in the sample text
     
    for (int i = 0; i < text.size(); i++) {
        if (text[i] == letter) {
            return i;       //Returns index of character
        }
    }
    return -1;      //The character was not found, returns -1
}

int find(string subString) {    //Finds a String in the sample text

    for (int i = 0; i < text.size() - subString.size() + 1; i++) {
        if (text.substr(i, subString.size()) == subString) {
            return i;       //Returns starting index of string
        }
    }
    return -1;      //String was not found, returns -1
}