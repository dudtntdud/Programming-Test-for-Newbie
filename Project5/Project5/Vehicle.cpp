#include "Vehicle.h"

String ^ Vehicle::getCarnum()
{
	return this->car_num;
}

void Vehicle::setCarnum(String^ car_num)
{
	this->car_num = car_num;
}
