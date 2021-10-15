#include "complex.h"

using namespace complexnumber;
using namespace std;

namespace complexnumber{

// Default constructor
complex::complex():real(0), imaginary(0)
{
    //ctor
}

// Parameterized constructor
complex::complex(double real, double imaginary):real(real), imaginary(imaginary)
{
    //ctor
}

// Copy Constructor
complex::complex(const complex& other)
{
    cout<<"copy constructor"<<endl;
    cout<<other.real<<endl;
    real = other.real;
    imaginary = other.imaginary;
}

// Assignment opearator
complex& complex::operator=(const complex& other)
{
    cout<<" = operator"<<endl;
    real = other.real;
    imaginary = other.imaginary;
    return *this;
}

// Display function
void complex::display()
{
    std::cout<<real<<"+"<<imaginary<<"i"<<std::endl;
}

// Getter function for real component of complex number
double complex::getReal() const
{
    return this->real;
}

// Getter function for imaginary component of complex number
double complex::getImaginary() const
{
    return imaginary;
}

// Setter function for real component of complex number
void complex::setReal(double real)
{
    this->real = real;
}

// Setter function for imaginary component of complex number
void complex::setImaginary(double imaginary)
{
    this->imaginary = imaginary;
}

// Left bit shift operator overloading
ostream &operator<<(ostream &out, const complex& c)
{
    out<<c.getReal()<<"+"<<c.getImaginary()<<"i";
    return out;
}


//=======Plus + operator overloading======//

// Adds two complex numbers -> complex+complex
complex operator+(const complex &first, const complex &second)
{
    complex c;
    c.setReal(first.getReal()+second.getReal());
    c.setImaginary(first.getImaginary()+second.getImaginary());
    return c;
}

// Adds complex and real number --> complex+rea
complex operator+(const complex &first, const double real)
{
    complex c;
    c.setReal(first.getReal()+real);
    c.setImaginary(first.getImaginary());
    return c;
}

// Adds real and complex number --> real+complex
complex operator+(const double real, const complex &second)
{
    complex c;
    c.setReal(real + second.getReal());
    c.setImaginary(second.getImaginary());
    return c;
}
    //=======Comparing complex numbers======//

// Overloading == operator
bool complex::operator==(const complex& other) const
{
    return (real==other.real) && (imaginary==other.imaginary);
}

// Overloading != operator
    bool complex::operator!=(const complex& other) const{
    return !(*this == other);
}
    
//Destructor
complex::~complex()
{
    //dtor
}

}
