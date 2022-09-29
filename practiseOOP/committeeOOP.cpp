#include <iostream>
using namespace std;

// class icom {
//    virtual void askForBeer()=0;
// };

/**
 * @This is the Main class in program.
 * takes inputs through constructor 
 *
 * 
 */

class committeeMembers

{ /**
 * these are the stored varables in the class
 hello this is a change 

 */
    string Name;
    string Position;
    string sport;
    string sport2;
    int soundness;


public:

    committeeMembers(string a, string b, string c, int d)
    {
        Name = a;
        Position = b;
        sport = c;
        soundness = d;
    }
    /**
     * call function after class object to determine if beer is due 
     * 
     */
    void askForBeer(){
        if (soundness >= 7)
            cout<<"Aye mate, ofcorse ye can\n"<<endl;    
        else 
            cout<<"Ahh sorry dude, no monies :(\n"<<endl ;
    }
/**
 * @brief This fcn will print out all member info 
 * 
 */
    void showMember()
    {
        if (sport == "ski"){
            sport2 = "snowboard";
        
        }
        else if (sport =="snowboard")
        {
            sport2 = "ski";
        }
        
        cout << "Name - " << Name << endl;
        cout << "Is the " << Position << endl;
        cout << "They prefer to " << sport << " instead of " << sport2 << endl;
        cout << "They are " << soundness << " soundness points out of 10\n" << endl;
    }
};

int main()
{
    committeeMembers Bruno = committeeMembers("Bruno", "President", "ski", 6);
    Bruno.showMember();
    Bruno.askForBeer();
    committeeMembers Ronan = committeeMembers("Ronan", "Freestyle Captain", "ski", 8);
    Ronan.showMember();
    Ronan.askForBeer();
    committeeMembers Ed = committeeMembers("Ed", "Race Captain", "ski", 8);
    Ed.showMember();
    committeeMembers James = committeeMembers("James", "Treasurer", "ski", 8);
    James.showMember();
    committeeMembers Nico = committeeMembers("Nico", "Scottish Snow", "ski", 7);
    Nico.showMember();
    committeeMembers Scott = committeeMembers("Scott", "Technical", "Ski", 5);
    Scott.showMember();
    committeeMembers Innes = committeeMembers("Innes", "Snowboard Captain", "snowboard", 10); 
    Innes.showMember();
    committeeMembers Cleo = committeeMembers("Cleo", "Social Sec", "ski", 6);
    Cleo.showMember();

    
    return 0;
};
