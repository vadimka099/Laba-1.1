#pragma once
#include<iostream>
#include<math.h>
#include<string>


using namespace std;

struct calculate {
	double re1,re2, im1,im2;
	void sum(double a, double b,double c,double d);
	void raz(double a, double b, double c, double d);
	void umn(double a, double b, double c, double d);
	void del(double a, double b, double c, double d);
	
	int get_int(char n[], int size);
	int char_to_int(char c);
	int get_number_size(const char ch[]);

		




};
