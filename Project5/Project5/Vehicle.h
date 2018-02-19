#pragma once
#include<iostream>

using namespace System;
using namespace std;

ref class Vehicle
{
public:
	String^ getCarnum();
	void setCarnum(String^ car_num);

private:
	String^ car_num;
	
};

