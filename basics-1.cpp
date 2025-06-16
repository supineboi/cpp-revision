#include <iostream>
using namespace std;

// ** Macros
#define myMacro 45

// ** Global variable **
int myGlobal; // hold 0

int main() {
    // ** Local variable **
    int myLocal; // hold garbage value

    // ** Constant variable **
    const int myConst = 4; // must assign

    // ** Static variable **
    static int myStatic; // will stay throughtout the lifetime of this program and hold 0

    cout << "Global variable value :: " << myGlobal <<  endl;
    cout << "Local variable value :: " << myLocal <<  endl;
    cout << "Constant variable value :: " << myConst <<  endl;
    cout << "Marco variable value :: " << myMacro << endl;
    cout << "Static variable value :: " << myStatic << endl;
    cout << "Size of :: " << sizeof myGlobal << endl; // give size of data type

    // ** Example Output **
    /*
            Global variable value :: 0
            Local variable value :: 32208
            Constant variable value :: 4
            Marco variable value :: 45
            Static variable value :: 0
            Size of :: 4
    */

    return 0;
}