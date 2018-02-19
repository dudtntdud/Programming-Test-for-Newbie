#pragma once
#include <iostream>

using namespace System;
using namespace std;

ref class User
{
	
private:
	String^ name;
	String^ id;
	String^ password;
	String^ telnum;
	String^ auth;

public:
	String^ getName();
	String^ getId();
	String^ getPassword();
	String^ getTelnum();
	String^ getAuth();
	void setName(String^ name);
	void setId(String^ id);
	void setPassword(String^ password);
	void setTelnum(String^ telnum);
	void setAuth(String^ auth);
	
};

