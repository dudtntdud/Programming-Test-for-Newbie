#include "User.h"

void User::setName(String^ name) {
	this->name = name;
}

void User::setId(String^ id) {
	this->id = id;
}

void User::setPassword(String^ password) {
	this->password = password;
}

void User::setTelnum(String^ telnum) {
	this->telnum = telnum;
}

void User::setAuth(String^ auth) {
	this->auth = auth;
}


String^ User::getName() {
	return User::name;
}

String^ User::getId() {
	return User::id;
}

String^ User::getPassword() {
	return User::password;
}

String^ User::getTelnum() {
	return User::telnum;
}

String^ User::getAuth() {
	return User::auth;
}