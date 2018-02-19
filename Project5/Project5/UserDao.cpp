#include "UserDao.h"


User^ UserDao::get(String^ id){
	
	MySqlConnection^ connection = gcnew MySqlConnection("datasource=localhost;port=3306;Database=trafficdb;username=root;password=rkdehfdl0#");
	MySqlCommand^ command = gcnew MySqlCommand("SELECT * FROM USER WHERE userId = '" + id + "'" , connection);
	MySqlDataReader^ reader;
	User^ user = gcnew User();

	int count = 0;
	try {
		connection->Open();
		reader = command->ExecuteReader();

		while (reader->Read()) {
			count++;
		}


		if (count == 1) {
			
			user->setId(reader->GetString("userId"));
			user->setName(reader->GetString("userName"));
			user->setPassword(reader->GetString("userPasswd"));
			user->setTelnum(reader->GetString("userTel"));
			user->setAuth(reader->GetString("userAuth"));

		}
		else {
		}

	}
	catch (Exception^ e) {
		
	}

	return user;
	
}

void UserDao::getAll(DataGridView^ datagridView){
	MySqlConnection^ connection = gcnew MySqlConnection("datasource=localhost;port=3306;Database=trafficdb;username=root;password=rkdehfdl0#");
	MySqlCommand^ command = gcnew MySqlCommand("SELECT * FROM USER", connection);
	MySqlDataReader^ reader;
	User^ *user;


	MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
	sda->SelectCommand = command;
	DataTable^ dbdataset = gcnew DataTable();
	sda->Fill(dbdataset);
	BindingSource^ bSource = gcnew BindingSource();

	bSource->DataSource = dbdataset;
	datagridView->DataSource = bSource;
	sda->Update(dbdataset);
}

String^ UserDao::add(User^ user) {
	MySqlConnection^ connection = gcnew MySqlConnection("datasource=localhost;port=3306;Database=trafficdb;username=root;password=rkdehfdl0#");
	MySqlCommand^ command = gcnew MySqlCommand("INSERT INTO USER (userId, userPasswd, userName, userTel, userAuth) VALUES ('" + user->getId() +"','" + user->getPassword() + "','"
		+ user->getName() + "','" + user->getTelnum() + "','" + user->getAuth() + "')", connection);

	try {
		connection->Open();
		command->ExecuteNonQuery();
	}
	catch(MySql::Data::MySqlClient::MySqlException^ e){
		user->setId("");
	}
	return user->getId();
}

void UserDao::update(User^ user) {
	MySqlConnection^ connection = gcnew MySqlConnection("datasource=localhost;port=3306;Database=trafficdb;username=root;password=rkdehfdl0#");
	MySqlCommand^ command = gcnew MySqlCommand("UPDATE USER SET userName = '" + user->getName() + "', userTel = '" + user->getTelnum() + "', userAuth = '" + user->getAuth() + "' WHERE userId = '" + user->getId() + "'", connection);

	connection->Open();
	command->ExecuteNonQuery();
}

void UserDao::remove(String^ id) {
	MySqlConnection^ connection = gcnew MySqlConnection("datasource=localhost;port=3306;Database=trafficdb;username=root;password=rkdehfdl0#");
	MySqlCommand^ command = gcnew MySqlCommand("DELETE FROM USER WHERE userId = '" + id + "'",connection);

	connection->Open();
	command->ExecuteNonQuery();
}