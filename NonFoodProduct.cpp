#include "NonFoodProduct.h"

NonFoodProduct::NonFoodProduct()
{

}

NonFoodProduct::NonFoodProduct(const string &category, int id, const string &producer, const string &name, float price, int yearsOfWarranty, int quantity) : Product(category, id, name, quantity)
{
	this->yearsOfWarranty=yearsOfWarranty;
	this->producer=producer;
	this->price=price;

}

NonFoodProduct::NonFoodProduct(const NonFoodProduct &pn) : Product(pn)
{
	price=pn.price;
	yearsOfWarranty=pn.yearsOfWarranty;
	producer=pn.producer;
}

void NonFoodProduct::setYearsOfWarranty(int garantieAni)
{
	yearsOfWarranty=garantieAni;
}

void NonFoodProduct::setPrice(float price)
{
	this->price=price;
}

void NonFoodProduct::setProducer(const string &producer)
{
	this->producer=producer;
}

int NonFoodProduct::getYearsOfWarranty()
{
	return yearsOfWarranty;

}

float NonFoodProduct::getPrice()
{
	return price;
}

string &NonFoodProduct::getProducer()
{
	return producer;
}

bool NonFoodProduct::operator==(const NonFoodProduct &obj) const
{
   if(quantity==obj.quantity && id==obj.id && producer==obj.producer && price==obj.price && yearsOfWarranty==obj.yearsOfWarranty && name==obj.name && category==obj.category)
   {
       return true;
   }
   else
    return false;
}

const NonFoodProduct &NonFoodProduct::operator=(const NonFoodProduct &a)
{
     this->id=a.id;
     this->category=a.category;
     this->quantity=a.quantity;
     this->name=a.name;
     this->yearsOfWarranty=a.yearsOfWarranty;
     this->price=a.price;
     this->producer=a.producer;
     return *this;
}

string NonFoodProduct::getProductType()
{
	return "nealimentar";
}

json NonFoodProduct::toJSON()
{
	return json(*this);
}

void NonFoodProduct::display()
{
	cout << "Product Nealimentar" << endl;
	cout << "Nume Product: " << this->name << endl;
	cout << "Producator: " << this->producer << endl;
	cout << "Categorie: " << this->category << endl;
	cout << "ID: " << this->id << endl;
	cout << "Cantitate: " << this->quantity << endl;
	cout << "Garantie: " << this->yearsOfWarranty << " ani" << endl;
	cout << "Pret: " << this->price << endl
		 << endl;
}
