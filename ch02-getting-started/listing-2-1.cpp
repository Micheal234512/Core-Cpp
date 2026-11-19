/*
#include <iostream>                                             //Preprocesssor directive
#include <cmath>                                                // preprocessor directive
using namespace std;                                            // compiler directive
const double PI = 3.1415926;                                    //definition of a constant
int main(void)                                                  //Function return integer
{
    double X = PI, y = 1, z;                                    // definition of variables
    cout << "Welcome to the C++ world!" << endl;                 // Function call
    z = y + 1;                                                    // assignment statement
    y = pow (X,z);                                                // Function call
    cout << "In that world, pi sqaure is " << y << endl;
    cout << "have a nice day!" << endl;                           // return statement
    return 0;                                                      // end of the function statement
}

// An interactive program with input and output statement
#include <iostream>
using namespace std;
int main(void)
{
    int a, b, c;                                    // definition of variable 
    cout << "Type two integers, press enter ";
    cin >> a >> b;                                  // two function call:  extraction
    cout<< "Their sum id " << c << endl;
    return 0;
}


// program with nested statement block

 #include <iostream>
 #include <iomanip>
 using namespace std;
 int main(void)
 {
    int num = 8, square;                                      // num is initialized before loop
    cout << "Number their squares" << endl << endl;
    while (num < 12)                                         // number is useed as loop variable
    {
    square = num * num;                                       // mumber is used in
        cout << " " << num << "        " << square << endl; 
        num = num + 1;                                            // it is modified at loop end
    }                                                          // no ';' at end of the block
    cout << endl << "have a nice day. " << endl;   
    
    return 0;
 }

// first program with two server function
#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.1415926;

void displayInitialGreeting()                                       // function header
{
    cout << "Welcome to the C++ world!" << endl;                   // it's body
}

void displayResults(double y)                                     // function header
{
    cout << "In that world, pi square is " << y << endl;
    cout << "Have a nice day!" << endl;                          // it's body
}

int main(void){
    double x=PI, y=1, z;
    displayInitialGreeting();                                  // function call
    z = y + 1;
    y = pow(x, z);
    displayResults(y);                                        // another function call
    return 0;
}
*/

#include <iostream>
using namespace std;

class TimeOfDay
{
private:
    int hours = 0;
    int minutes = 0;

public:
    void setTime(int h, int m)
    {
        hours = h;
        minutes = m;
    }

    void displayMilitaryTime() const
    {
        cout << hours << ':' << (minutes < 10 ? "0" : "") << minutes;
    }

    void displayTime() const
    {
        cout << hours << ':' << (minutes < 10 ? "0" : "") << minutes;
    }
};

int main(void)
{
    TimeOfDay time1, time2;                              // class instances
    int hours = 19, minutes = 15;                        // integer variables
    time1.setTime(7,35);
    time2.setTime(hours, minutes);
    cout << "first time: ";
    time1.displayMilitaryTime();
    cout << endl << "First time: ";
    time1.displayTime();
    cout << endl << "Second time:";
    time2.displayTime();
    return 0;

}