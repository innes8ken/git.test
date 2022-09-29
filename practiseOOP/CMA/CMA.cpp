#include <iostream>
#include <string.h>

using namespace std;

int main(int n, char* argz[]){
 
 string option = argz[1];

    if ((n != 2) || ((option!="F") && (option!="B")))  
        { 
            cout << "ERROR: Wrong arguments as input. PLease input 'F' OR 'B' after executable" << endl; 
            cout << "Number of input arguments = :" << n -1 << endl;
        
        }

    if (option == "F")
    {
        cout << "The learning paradigm is set to Forward error prop"<< endl;
    }

    if (option == "B") 
    {
        cout << "The learning paradigm is set to Backward error prop"<< endl;
    }

    return 0;
}

