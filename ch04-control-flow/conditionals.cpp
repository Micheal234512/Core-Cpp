/*
#include <iostream>
using namespace std;
#define ABSOLUTE_ZERO -273
int main ()
{
 int cels; 
 cout << "\nEnter temperature in Celsius: ";
 cin >> cels;
 cout << "\nYou entered the value " << cels << endl;
 if (cels < ABSOLUTE_ZERO)
 cout <<"\nThe value " <<cels <<" is invalid\n"
 <<"It is below absolute zero\n"; // one statement
 cout << "Thank you for using this program" << endl;
 return 0;
}

// A conditional statement with compound branches
#include <iostream>
using namespace std;
const int ABSOLUTE_ZERO = -273;
int main ()
{
    int cels;
    cout << "\nEnter temperature in celsius: ";
    cin >> cels;
    cout << "\nYou enteretd the value " << cels << endl;
    if (cels < ABSOLUTE_ZERO)
    {
        cout <<"\nThe value " <<cels << " is invalid\n";
        cout << "It is below aboslute zero\n";                // a block
    }
    else
    {
        cout <<cels<< "is a valid temperature\n";            //  a block
        cout << "ou entered a proceed with caculation\n";
    }
        cout << "Thank you for using this program" << endl;
        return 0;
}

// Checking values for inequality(correct version)
#include <iostream>
using namespace std;
int main()
{

    int num;
    cout << "\nPlease enter a non-zero integer ";
    cin >> num;
    if (num != 0)                                       // now thios is correct
    {
        cout <<"\nYou followed the instruction correctly";
            cout <<"\nThe inverse of this value is " << 1.0/num;
            cout <<"\nThe square of this value is " << num * num; }
    else
        cout <<"\nYou did not follow the instructions";
    cout << "\nThank you for using this program" <<endl;
}

// Nested conditional statement
#include <iostream>
using namespace std;

int main()
{

    const double DISCOUNT = 0.1, SMALL_ORDER = 20;
    const double SERVICE_CHARGE = 2.0;
    double orderAMT, totalAmt;
    int preferred;
    cout <<"\nPlease enter the order amount: ";
    cin >> orderAMT;
    cout << "Enter 1 if preferred customer, 0 otherwise: ";
    cin >> preferred;
    if (orderAMT > SMALL_ORDER)
    {
        if (preferred == 1)
        {
            cout << "Discount earned " << orderAMT * DISCOUNT << endl;
            totalAmt = orderAMT * (1 - DISCOUNT);
        }
        else
            totalAmt = orderAMT;
    }
    else
    {
        if (preferred == 0)
            totalAmt = orderAMT + SERVICE_CHARGE;
        else
            totalAmt = orderAMT;
    }
    cout << "Total amount: " << totalAmt << endl;
    return 0;

}
*/

// Am optimized nestedconditional statement

#include <iostream>
using namespace std;


int main()
{

    const double DISCOUNT = 0.1, SMALL_ORDER = 20;
    const double SERVICE_CHARGE = 20;
    double orderAmt, totalAmt;
    int preferred;
    cout << "\nPlease enter the order amount: ";
    cin >> orderAmt;
    cout << "Enter 1 if preferred customer, 0 otherwise: ";
    cin >> preferred;
    totalAmt = orderAmt;                           // do it the second way
    if (orderAmt > SMALL_ORDER)                    // change totalAmt if not a small order
    {
        if (preferred == 1)
        {
            cout << "Discount earned " << orderAmt * DISCOUNT << endl;
            totalAmt = orderAmt * (1 - DISCOUNT);
        }
    }
    else                                            // this is the optical illusion
    {
        if (preferred == 0)                         // for small order, check customers status
            totalAmt = orderAmt + SERVICE_CHARGE;
    }
    cout << "Total amount: " << totalAmt << endl;
    return 0;
}