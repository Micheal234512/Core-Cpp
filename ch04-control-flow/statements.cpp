// A conditional statement

#include <iostream>
using namespace std;
int main()
{
    int cels;
    cout << "\nEnter temperature in celsius: ";
    cin >> cels;
    cout << "\nYou entered the value " << cels << endl;
    if (cels < -273)
       cout << "\nThe value " <<cels << " is invalid\n"  // no;
           <<" It is below absolute zero\n";
    else
       cout <<cels<<" is a valid temperature\n";
    cout << "Thank you for using the program" << endl;
    return 0;
}