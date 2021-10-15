#ifndef COMPLEX_H
#define COMPLEX_H

#include<iostream>
using namespace std;

namespace complexnumber{
class complex
{
    private:
        double real;
        double imaginary;

    public:
        complex(); // Default constructor
        complex(double real, double imaginary); // Parameterized constructor

        // Copy Constructor
        complex(const complex&);

        // Assignment opearator
        complex& operator=(const complex&);

        // Getter function for real component of complex number
        double getReal() const;

        // Getter function for imaginary component of complex number
        double getImaginary() const;

        // Setter function for real component of complex number
        void setReal(double);

        // Setter function for imaginary component of complex number
        void setImaginary(double);

        // Display function
        void display();


        //=======Left shift bit operator======//

        /* This can be implemented as friend function or standalon function
           Here we will implement standalone function */
        friend ostream &operator<<(ostream&, const complex&);


        //=======Plus + operator overloading======//

        // Adds two complex numbers -> complex+complex
        friend complex operator+(const complex &first, const complex &second);
        // Adds complex and real number --> complex+real
        friend complex operator+(const complex &first, const double real);
        // Adds real and complex number --> real+complex
        friend complex operator+(const double real, const complex &second);
        
        //=======Comparing complex numbers======//

        // Overloading == operator
        bool operator==(const complex&) const;;

        // Overloading != operator
        bool operator!=(const complex&) const;
    
        // Destructor
        virtual ~complex();
};

}

#endif // COMPLEX_H
