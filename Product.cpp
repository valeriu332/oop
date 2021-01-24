#include "Product.h"
using namespace std;

Product::~Product() {}

bool Product::checkQuantity(int requestedQuantity)
{
	throw("undefined");
}

Product::Product(const string &category, int id, const string &name, int quantity)
{
	this->category=category;
	this->id=id;
	this->name=name;
	this->quantity=quantity;
}

Product::Product(const Product &p)
{
	category=p.category;
	name=p.name;
	id=p.id;
	quantity=p.quantity;
}

Product::Product()
{
}

void Product::decreaseQuantity(int requestedQuantity)
{
	throw("undefined");
}

void Product::increaseQuantity(int requestedQuantity)
{
	throw("undefined");
}

void Product::setCategory(const string &category)
{
	this->category=category;

}

void Product::setId(int id)
{
	this->id=id;

}

void Product::setQuantity(int quantity)
{
	this->quantity=quantity;
}

void Product::setName(const string &name)
{
      this->name=name;

}

string &Product::getCategory()
{
	return category;

}

int Product::getQuantity()
{
	return quantity;
}

int Product::getId()
{
	return id;
}

string &Product::getName()
{
	return name;
}

const Product &Product::operator=(const Product &a)
{
  this->id=a.id;
    this->category=a.category;
    this->name=a.name;
    this->quantity=a.quantity;
    return *this;
}

json Product::toJSON()
{
	return json(*this);
}
