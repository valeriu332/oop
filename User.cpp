#include "User.h"
using namespace std;

User::~User()
{

}

User::User()
{

}

User::User(const string &judetf, const string &localitatef, const string &stradaf, int nr_stradaf, const string &blocf, int apartamentf, const string &judetl, const string &localitatel, const string &stradal, int nr_stradal, const string &blocl, int apartamentl, int UserId, const string &lastName, const string &prenume, const string &email)
	: billingData(judetf, localitatef, stradaf, nr_stradaf, blocf, apartamentf),
	  deliveryData(judetl, localitatel, stradal, nr_stradal, blocl, apartamentl)
{
    this->lastName=lastName;
    firstName=prenume;
    this->email=email;
    UserID=UserId;

}

User::User(const User &u)
{
	billingData=u.billingData;
	deliveryData=u.deliveryData;
	lastName=u.lastName;
	firstName=u.firstName;
	UserID=u.UserID;
	email=u.email;
}

const User &User::operator=(const User &u)
{
     this->billingData=u.billingData;
     this->deliveryData=u.deliveryData;
     this->email=u.email;
     this->firstName=u.firstName;
     this->lastName=u.lastName;
     this->UserID=u.UserID;
     return *this;
}

void User::setLastName(const string &lastName)
{
     this->lastName=lastName;

}
void User::setFirstName(const string &firstName)
{
	this->firstName=firstName;

}
void User::setEmail(const string &email)
{
	this->email=email;
}
void User::setUserID(int userID)
{
	UserID=userID;
}
void User::setBillingData(const Address &billingData)
{
	this->billingData=billingData;

}
void User::setDeliveryData(const Address &deliveryData)
{
	this->deliveryData=deliveryData;
}

string &User::getLastName()
{
	return lastName;
}
string &User::getFirstName()
{
	return firstName;
}
string &User::getEmail()
{
	return email;
}
int User::getUserID() const
{
	return UserID;
}

Address &User::getBillingData()
{
   return billingData;
}
Address &User::getDeliveryData()
{
	return deliveryData;
}

json User::toJSON()
{
	return json(*this);
}
