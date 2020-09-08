#include "haszontalanClass.hpp"
#include <iostream>

using namespace std;

haszontalanClass::haszontalanClass(int a)
{
    dbl_a = a*2;
}

haszontalanClass::~haszontalanClass()
{
}

void haszontalanClass::repr(){
    cout << "Ennek a haszontalan classnak az értáke: " << dbl_a;
}