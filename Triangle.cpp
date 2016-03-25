//NAME - SURNAME : MERCAN KARACABEY
//NO : 131044034
//FORMATION DATE : 31.10.2015
//Aim : Triangle
//- Angels
//- Sides
//- Right Angel
//- Calculate the area
//- Calculate the perimeter

#include "Triangle.h"
#include<iostream>
#include<cmath>
#include<cstdlib>

using namespace std;


Triangle::Triangle() : a_side(1.00), b_side(1.00), c_side(1.00) {
}

Triangle::Triangle(int side_1) : a_side(side_1), b_side(1.00), c_side(1.00) {
}

Triangle::Triangle(int side_1, int side_2) : a_side(side_1), b_side(side_2), c_side(1.00) {
}

Triangle::Triangle(int side_1, int side_2, int side_3) : a_side(side_1), b_side(side_2), c_side(side_3) {
}

void Triangle::input() {
  int Side_1, Side_2, Side_3;
  cout << "Please,Enter the side of triangle: ";
  cin >> Side_1
          >> Side_2
          >> Side_3;

  set(Side_1, Side_2, Side_3);
}
//for print to screen

void Triangle::output()const {
  cout << "Entries are true ->" << endl;
  cout << "Entries : " << endl;
  cout << "A :" << get_side_1() << endl
          << "B :" << get_side_2() << endl
          << "C :" << get_side_3() << endl;

}
//this set function controls ,entrying values satisfy triangle's rule

void Triangle::set(int Side_1, int Side_2, int Side_3) {
  if (Side_1 <= 0 || Side_2 <= 0 || Side_3 <= 0) {

    cout << "You entered illegal value !";
    exit(1);
  }

  if ((abs(Side_1 - Side_2) >= Side_3 && Side_1 + Side_2 < Side_3) &&
          (abs(Side_1 - Side_3) >= Side_2 && Side_1 + Side_3 < Side_2)
          && (abs(Side_2 - Side_3) >= Side_1 && Side_2 + Side_3 > Side_1))
 {
    cout << "This value doesn't show a triangle !";
    exit(1);
  } else {
    a_side = Side_1;
    b_side = Side_2;
    c_side = Side_3;
  }

}
//get functions

int Triangle::get_side_1()const {
  return a_side;
}

int Triangle::get_side_2()const {
  return b_side;
}

int Triangle::get_side_3()const {
  return c_side;
}
//This Function found first angel

double Triangle::first_angel()const {
  //area=1/2 * first_side *second_side *sin(ThirdAngel) => 
  int for_first_area;
  double sin_1;
  double side_1_angel;
  for_first_area = calculate_the_area();
  sin_1 = static_cast<double> (for_first_area * 2) / (get_side_2() * get_side_3());
  //arcsin converts normal angel 
  //asin function in math library
  side_1_angel = (asin(sin_1)*180) / PI;
  return side_1_angel;
}
//This Function found second angel

double Triangle::second_angel()const {
  //area=1/2 * first_side *second_side *sin(ThirdAngel) => 
  int for_second_area;
  double sin_2;
  double side_2_angel;
  for_second_area = calculate_the_area();
  sin_2 = static_cast<double> (for_second_area * 2) / (get_side_1() * get_side_3());
  //arcsin converts normal angel 
  //asin function in math library
  side_2_angel = (asin(sin_2)*180) / PI;
  return side_2_angel;
}
//This Function found third angel

double Triangle::third_angel()const {
  //area=1/2 * first_side *second_side *sin(ThirdAngel) => 
  int for_third_area;
  double sin_3;
  double side_3_angel;
  for_third_area = calculate_the_area();
  sin_3 = static_cast<double> (for_third_area * 2) / (get_side_1() * get_side_2());
  //arcsin converts normal angel 
  //asin function in math library
  side_3_angel = (asin(sin_3)*180) / PI;
  return side_3_angel;
}
//This function found triangle is right angel or not

bool Triangle::is_right_angel()const {
  if (get_side_3() * get_side_3() == ((get_side_1() * get_side_1())+(get_side_2() * get_side_2())))
    return true;
  else if (get_side_2() * get_side_2() == ((get_side_1() * get_side_1())+(get_side_3() * get_side_3())))
    return true;
  else if (get_side_1() * get_side_1() == ((get_side_2() * get_side_2())+(get_side_3() * get_side_3())))
    return true;
  else
    return false;
}
//This function calculate the triangle's area

int Triangle::calculate_the_area()const {
  //for calculate the area, I am using u rule
  //u=perimeter/2 => area = (in base) u-first_side ^2 + u-second_side^2 + u-third_side^2
  int u;
  u = (get_side_1() + get_side_2() + get_side_3()) / 2;
  int area;
  area = sqrt(u * (u - get_side_1())*(u - get_side_2())*(u - get_side_3()));
  return area;
}
//This function calculate the triangle's perimeter

int Triangle::calculate_the_perimeter()const {
  // perimeter is total sides
  return (get_side_1() + get_side_2() + get_side_3());
}
//call by value 

void testFunction1(Triangle test1) {
  cout << "Informations of triangle" << endl;
  cout << "Sides values :" << "A: " << test1.get_side_1() << "  B: " << test1.get_side_2() << "  C: " << test1.get_side_3() << endl;
  cout << "In turn in order , angel's value : " << endl
          << "Angel A: " << test1.first_angel() << endl <<
          "Angel B: " << test1.second_angel() << endl <<
          "Angel C: " << test1.third_angel() << endl;

  if (test1.is_right_angel() == true)
    cout << "According to angels,This Triangle is right angel" << endl;
  else
    cout << "According to angels,This Triangle isn't right angel" << endl;


  cout << "Area : " << test1.calculate_the_area() << endl;
  cout << "Perimeter: " << test1.calculate_the_perimeter();

}
//call by reference

void testFunction2(Triangle &test2) {

  test2.input();
  cout << "Informations new of triangle" << endl;
  cout << "Sides values :" << "A: " << test2.get_side_1() << "  B: " << test2.get_side_2() << "  C: " << test2.get_side_3() << endl;
  cout << "In turn in order , angel's value : " << endl
          << "Angel A: " << test2.first_angel() << endl <<
          "Angel B: " << test2.second_angel() << endl <<
          "Angel C: " << test2.third_angel() << endl;

  if (test2.is_right_angel() == true)
    cout << "According to angels,This Triangle is right angel" << endl;
  else
    cout << "According to angels,This Triangle isn't right angel" << endl;


  cout << "Area : " << test2.calculate_the_area() << endl;
  cout << "Perimeter: " << test2.calculate_the_perimeter();

}
