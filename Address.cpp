#include "Address.h"

using namespace std;

Address::Address()
{

}

Address::Address(const Address &address)
{
	locality=address.locality;
	street=address.street;
	block=address.block;
	number=address.number;
	apartment=address.apartment;
	county=address.county;
}

Address::Address(const string &jud, const string &loc, const string &str, int nr, const string &bl, int ap)
{
	county=jud;
	locality=loc;
	number=nr;
	street=str;
	block=bl;
	apartment=ap;
}

const Address &Address::operator=(const Address &adr)
{
	this->locality=adr.locality;
	this->block=adr.block;
	this->county=adr.county;
	this->apartment=adr.apartment;
	this->street=adr.street;
	this->number=adr.number;
	return *this;
}

void Address::setStrada(const string &str)
{
	street=str;
}

void Address::setNumber(int nr)
{
	number=nr;
}

void Address::setBlock(const string &bl)
{
	block=bl;

}

void Address::setApartment(int ap)
{
	apartment=ap;

}

void Address::setCounty(const string &jud)
{
	county=jud;

}

void Address::setLocality(const string &loc)
{
	locality=loc;
}

string &Address::getStreet()
{
	return street;
}

int Address::getNumber()
{
	return number;

}
string &Address::getBlock()
{
	return block;
}

int Address::getApartment()
{
	return apartment;
}

string &Address::getCounty()
{
	return county;

}

string &Address::getLocality()
{
	return locality;
}

bool Address::operator==(const Address &address)
{
	if(locality==address.locality && number==address.number && block==address.block && apartment==address.apartment && street==address.street && county==address.county)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Address::operator!=(const Address &address)
{
	if(locality!=address.locality || number!=address.number || block!=address.block || apartment!=address.apartment || street!=address.street || county!=address.county)
    {
        return true;
    }
    else
    {
        return false;
    }
}

ostream &operator<<(ostream &os, const Address &a)
{
	os<<a.county;
	os<<a.locality;
	os<<a.number;
	os<<a.block;
	os<<a.apartment;
	os<<a.street;
	return os;
}

json Address::toJSON()
{
	return json(*this);
}
