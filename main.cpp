//NAME - SURNAME : MERCAN KARACABEY
//NO : 131044034
//FORMATION DATE : 31.10.2015
//Aim : Triangle
//- Angels
//- Sides
//- Right Angel
//- Calculate the area
//- Calculate the perimeter
#include<iostream>
#include<cmath>
#include<cstdlib>
#include "Triangle.h"

using namespace std;



int main() {

  //Triangle cons1(5);
  //Triangle cons2(3,4);
  //Triangle cons3(3,4,5);

  Triangle value;
  value.input();
  value.output();

  testFunction1(value);
  testFunction2(value);

  return 0;
}
//this function takes value from user

