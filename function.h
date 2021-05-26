#pragma once
#include<iostream>
#include<cmath>
using namespace std;
class function
{
	double A, B, C;
public:
	function();
	function(double a, double b, double c);
	function(const function& ob);
	~function();
};

