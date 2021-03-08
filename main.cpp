//------------------------------
//  DO NOT MODIFY NEXT LINE
//------------------------------
#include "catch.hpp"
//------------------------------

// Put the assignment code here

class Quaternion {
  double q1;
  double q2;
  double q3;
  double q4;

  public: Quaternion (double a, double b, double c, double d) :
  q1{a},
  q2{b},
  q3{c},
  q4{d}
  {}

  bool operator==(const Quaternion &rhs)const{ 
    return (q1 == rhs.q1) && (q2 == rhs.q2) && ( q3 == rhs.q3) && (q4 == rhs.q4);
  };

  Quaternion operator+(const Quaternion &rhs) {
    Quaternion res{q1+rhs.q1,q2+rhs.q2,q3+rhs.q3,q4+rhs.q4};
    return res;
  };

  Quaternion operator-(const Quaternion &rhs) {
    Quaternion res{q1-rhs.q1,q2-rhs.q2,q3-rhs.q3,q4-rhs.q4};
    return res;
  };

  Quaternion operator*(double rhs){
    Quaternion res{q1*rhs,q2*rhs,q3*rhs,q4*rhs};
    return res;
  };
 
 friend Quaternion operator*(double lhs, const Quaternion &rhs);
};

Quaternion operator*(double lhs, const Quaternion &rhs){Quaternion res{lhs*rhs.q1,lhs*rhs.q2,lhs*rhs.q3,lhs*rhs.q4};
return res;
}
//------------------------------
//   DO NOT MODIFY TEST CASES
//------------------------------
TEST_CASE( "Assignment" ) {
    SECTION( "q1" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        REQUIRE( q == p );
        REQUIRE( q.operator==(p) );
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
        Quaternion w{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( q == w );
        REQUIRE( (q * 2.0) == r );
        REQUIRE ( q == w );

        REQUIRE( (2.0 * q) == r);

    }
}
//------------------------------
