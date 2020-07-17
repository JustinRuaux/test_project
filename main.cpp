/*
 * main.cpp
 *
 *  Created on: 2 oct. 2019
 *      Author: justinruaux
 */

#include "vector.hpp"

#include <cmath>
#include <sstream>
#include <cassert>

#include <iostream>

double const pi { std::acos(-1.0) };

using namespace std;
int main()
{
  Vector zero { };
  Vector e1 { 1.0, 0.0 };
  Vector e2 { 0.0, 1.0 };
  Vector v1 { 3.0, 4.0 };

  // check comparison
  assert( e1 == e1 );
  assert( e1 != e2 );

  // check default constructor
  assert( (Vector { 0.0, 0.0 } == zero) );

  // check addition
  assert( (e1 + e2 == Vector { 1.0, 1.0 }) );

  // check multiplication and addition
  assert( 3.0 * e1 + e2 * 4.0 == v1 );
}


