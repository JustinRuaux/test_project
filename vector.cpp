/*
 * vector.cpp
 *
 *  Created on: 1 oct. 2019
 *      Author: justinruaux
 */

#include "vector.hpp"

Vector::Vector(double x , double y ) : m_x(x), m_y(y){};
Vector::Vector(Vector const &other) : m_x(other.m_x), m_y(other.m_y){};




Vector operator+ (Vector const &v1, Vector const &v2){
	Vector res( (v1.m_x + v2.m_x) , (v1.m_y + v2.m_y) );
	return res;
};

Vector operator- (Vector const &v1, Vector const &v2){
	Vector res( (v1.m_x - v2.m_x) , (v1.m_y - v2.m_y) );
	return res;
};

Vector operator* (int const scalar, Vector const &v2){
	Vector res( (v2.m_x * scalar) , (v2.m_y * scalar) );
	return res;
};

Vector operator* (Vector const &v2, int const scalar){
	Vector res( (v2.m_x * scalar) , (v2.m_y * scalar) );
	return res;
};

Vector operator/ (Vector const &v2, int const scalar){
	if(scalar == 0){
		std::cout << "Division par zéro." << std::endl;
		exit(-1);
	}

	Vector res( (v2.m_x / scalar) , (v2.m_y / scalar) );

	return res;
};


//friend std::ostream &operator<< (std::ostream &os, Vector const &v);
//friend void &operator>> (std::istream &is, Vector const &v);


bool Vector::operator==(Vector const &v){
	return ((m_x == v.m_x) && (m_y == v.m_y));
};


bool Vector::operator!= (Vector const &v){
	return ((m_x != v.m_x) && (m_y != v.m_y));
};





void Vector::negate(){
	m_x = m_x * (-1);
	m_y = m_y * (-1);
}

double Vector::dotProduct(Vector const &v1){
	return (v1.m_x * m_x) + (v1.m_y * m_y);
}

double Vector::length(){
	return sqrt(pow(m_x, 2) + pow(m_y, 2));
}

