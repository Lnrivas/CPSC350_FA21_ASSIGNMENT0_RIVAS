/*
 * Name: Luis Rivas
 * ID: 2365948
 * email: lrivas@chapman.edu
 * CPSC-350-03
 * Assignment 0 - HelloWorld
 * This is the main file, where our main method lives
*/
#include "HelloWorld.h"

int main(int argc, char** argv) {
  HelloWorld *hw = new HelloWorld(); // pointer to HelloWorld object on the heap

  hw->printHelloWorld(); // method to print "Hello World!"

  delete hw; // calls destructor to free up hw from memory

  return 0;
}
