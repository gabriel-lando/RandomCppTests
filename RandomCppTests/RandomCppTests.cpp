// Creator: Gabriel Lando
//
// This project contains a collection of random C++ tests that I've written
// to test out various features of the language.  I've tried to keep the
// tests as small and self-contained as possible, so that they can be
// easily understood and run individually.

#include "PublicCastSample.h"

int main()
{
    // Sample using a public_cast to access a private member of a class
    // without using a getter function.
    // Obs.: It should never be used as it breaks encapsulation.
    pcs::PublicCastSample(100);
}
