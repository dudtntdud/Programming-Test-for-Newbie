#pragma once
#include <iostream>
#include <mysql.h>
#include "User.h"

using namespace System;
using namespace System::Data;
using namespace System::Windows::Forms;
using namespace MySql::Data::MySqlClient;

ref class UserDao
{
public:

	User^ get(String^ id);
	void getAll(DataGridView^ datagridView);
	String^ add(User^ user); // 학번/사번 반환
	void update(User^ user);
	void remove(String^ id);
};

