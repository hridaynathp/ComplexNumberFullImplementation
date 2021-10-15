#include <iostream>
#include <complex.h>

using namespace complexnumber;
using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    complex c1(2,5);
    c1.display();

    complex c2 = c1; // Copy constructor gets called

    complex c3;
    c3 = c2;         // Assignment operator gets called

    cout<<c1<<endl;
    cout<<c2<<endl;
    cout<<c3<<endl;

    cout<<".....Addition of complex+real......"<<endl;
    cout<<c1+c2<<endl;
    cout<<".....Addition of complex+real......"<<endl;
    cout<<c1+10<<endl;
    cout<<".....Addition of real+complex......"<<endl;
    cout<<3+c1<<endl;

    cout<<".....Addition of Mix cases......"<<endl;
    cout<<c1+5+c2+3+10+c1<<endl;

    return 0;
}
