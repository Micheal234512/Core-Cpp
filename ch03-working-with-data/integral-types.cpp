/*
#include <limits>
#include <iostream>
using namespace std;

int main(void)
{
    int sum = std::numeric_limits<int>::max() - 2;
    int cnt = 0;

    cout << "Integer overflow in c++: " << endl;
    cout << "Incrementing from " << sum << endl;

    while (cnt < 5)
    {
        sum = sum + 1;
        cnt = cnt + 1;
        cout << cnt << "   " << sum << endl;
    }

    cout << "Thank you for worrying about integer limits" << endl;
    return 0;
}


// Demotsrtion of unsigned int type

#include <iostream>
#include <limits>
using namespace std;

int main(void)
{

    int unsigned num = numeric_limits<int>::max() - 2;
    int cnt = 0;
    cout << "Integer overflow in C++:" << endl;
    cout << "Incrementing froom " << num << endl;
    while (cnt < 5)
    {
  num = num + 1;
        cnt = cnt + 1;
    cout << cnt << "    " << num << endl;

    }
    cout << "Thank you for worring about integerl limits" << endl;
    return 0;
}
*/

#include <iostream>
using namespace std;
int main()
{
 float fahr, celsius;
 cout << "Please enter the value is Celsius: ";
 cin >> celsius;
 fahr = 1.8 * celsius + 32; // conversions ?
 cout << "Value in Fahrenheit is " << fahr << endl;
 return 0;
}
