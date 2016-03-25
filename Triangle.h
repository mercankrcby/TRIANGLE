//NAME - SURNAME : MERCAN KARACABEY
//NO : 131044034
//FORMATION DATE : 31.10.2015
//Aim : Triangle
//- Angels
//- Sides
//- Right Angel
//- Calculate the area
//- Calculate the perimeter
#ifndef TRIANGLE_H
#define	TRIANGLE_H

class Triangle {
public:
  Triangle(); //parametresi yok
  Triangle(int side_1);
  Triangle(int side_1, int side_2);
  Triangle(int side_1, int side_2, int side_3);
  int isTriangle(int side_1, int side_2, int side_3);
  void input();
  void output()const;
  void set(int Side_1, int Side_2, int Side_3);
  int get_side_1()const;
  int get_side_2()const;
  int get_side_3()const;
  double first_angel()const;
  double second_angel()const;
  double third_angel()const;
  bool is_right_angel()const;
  int calculate_the_area()const;
  int calculate_the_perimeter()const;

private:
  int a_side;
  int b_side;
  int c_side;

};

const double PI = 3.14;
//class definition


//function prototype
void testFunction1(Triangle test1);
void testFunction2(Triangle &test2);
//constructor definition

#endif	/* TRIANGLE_H */

