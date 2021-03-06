//------------------------------
//  DO NOT MODIFY NEXT LINE
//------------------------------
#include "catch.hpp"
//------------------------------

// Put the assignment code here

class Quaternion {
  private:
  double q1;
  double q2;
  double q3;
  double q4;

  public: Quaternion (double a, double b, double c, double d){
  q1 = a;
  q2 = b;
  q3 = c;
  q4 = d;
  Quaternion bool;
  Quaternion operator+;
  Quaternion operator-;
  Quaternion operator*;
  }
};
bool Quaternion operator == (const Quaternion &obj){
  if (q1==obj.q1);
  if (q2==obj.q2);
  if (q3==obj.q3);
  if (q4==obj.q4);
  Return true;
  else
  Return false; 
}
Quaternion operator + (Quaternion const &obj){
  Quaternion evalfun; 
  evalfun.q1 = q1 + obj.q1; 
  evalfun.q2 = q2 + obj.q2;
  evalfun.q3 = q3 + obj.q3;
  evalfun.q4 = q4 + obj.q4;
Return evalfun;
}
Quaternion operator - (Quaternion const &obj){
  Quaternion evalfun; 
  evalfun.q1 = q1 - obj.q1; 
  evalfun.q2 = q2 - obj.q2;
  evalfun.q3 = q3 - obj.q3;
  evalfun.q4 = q4 - obj.q4;
Return evalfun;
}
Quaternion operator * (Quaternion const &obj){
  Quaternion evalfun; 
  evalfun.q1 = q1 * obj.q1; 
  evalfun.q2 = q2 * obj.q2;
  evalfun.q3 = q3 * obj.q3;
  evalfun.q4 = q4 * obj.q4;
Return evalfun;
}
}
//------------------------------
//   DO NOT MODIFY TEST CASES
//------------------------------
TEST_CASE( "Assignment" ) {
    SECTION( "q1" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        REQUIRE( q == p );
    }
    SECTION( "q2" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q + p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{0.0, 0.0, 0.0, 0.0};
        REQUIRE( (q - p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q * 2.0) == r );
    }
}
//------------------------------
