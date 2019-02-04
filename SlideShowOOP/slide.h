#ifndef SLIDE_H
#define SLIDE_H
#include <iostream>
using namespace std;

class Slide
{
public:
    //all slides have one function which prints that slide's selected ascii art
    virtual void printSlide() = 0; //virtual printSlide function that will be inhereted by all subclass slides
};

#endif // SLIDE_H
