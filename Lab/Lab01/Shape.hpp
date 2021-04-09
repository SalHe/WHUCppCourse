#ifndef SHAPE_H
#define SHAPE_H
#pragma once
	
class Shape
{
	protected:
		Shape(){}
		
	public:
		~Shape(){}

		virtual double calcArea() const = 0;

};

class Rectangle: public Shape
{
	private:
		Rectangle(double w, double h): width(w), height(h), Shape(){

		}

		double width;
		double height;

	public:
		~Rectangle(){}

		virtual double calcArea() const {
			return width * height;
		}

		static Rectangle * createRectangle(double w, double h){
			return new Rectangle(w, h);
		}

		static Rectangle * createSquare(double w){
			return new Rectangle(w, w);
		}

};

#include <cmath>

class Circle: public Shape
{
	private:
		Circle(double r): radius(r), Shape(){

		}

		double radius;

	public:
		~Circle(){}

		virtual double calcArea() const {
			static const double PI = 3.14159265358979323846;
			return radius * radius * PI;
		}

		static Circle * createCircle(double r){
			return new Circle(r);
		}

};
#endif