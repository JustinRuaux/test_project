/*
 * vector.hpp
 *
 *  Created on: 1 oct. 2019
 *      Author: justinruaux
 */

#ifndef VECTOR_HPP_
#define VECTOR_HPP_

#include <iostream>
#include <cmath>


class Vector {

	friend Vector operator+ (Vector const &v1, Vector const &v2);
	friend Vector operator- (Vector const &v1, Vector const &v2);
	friend Vector operator* (int const scalar, Vector const &v2);
	friend Vector operator* (Vector const &v2, int const scalar);
	friend Vector operator/ (Vector const &v2, int const scalar);
	//friend std::ostream &operator<< (std::ostream &os, Vector const &v);
	//friend std::istream &operator>> (std::istream &is, Vector const &v);


	public:
		//Constructors

		Vector(double x = 0.0, double y = 0.0);
		Vector(Vector const &other);

		void negate();
		double dotProduct(Vector const &v1);
		double length();


		bool operator== (Vector const &v);
		bool operator!= (Vector const &v);

	private:
		double m_x;
		double m_y;
};



#endif /* VECTOR_HPP_ */
