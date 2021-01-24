#include "ReturnedProduct.h"

ReturnedProduct::ReturnedProduct()
{

}

ReturnedProduct::ReturnedProduct(const string &categorie, int id, const string &producator, const string &nume, float pret, int garantieAni, const string &motiv, int cantitate)
	: NonFoodProduct(categorie, id, producator, nume, pret, garantieAni, cantitate)
{
	reason=motiv;
}

ReturnedProduct::ReturnedProduct(const ReturnedProduct &prodRet) : NonFoodProduct(prodRet)
{
	reason=prodRet.reason;
}


const ReturnedProduct &ReturnedProduct::operator=(const ReturnedProduct &a)
{
   this->id=a.id;
   this->category=a.category;
   this->name=a.name;
   this->quantity=a.quantity;
   this->reason=a.reason;
   this->price=a.price;
   this->producer=a.producer;
   this->yearsOfWarranty=a.yearsOfWarranty;
   return *this;
}

string &ReturnedProduct::getReason()
{
	return reason;
}

void ReturnedProduct::setReason(string &reason)
{
    this->reason=reason;
}

string ReturnedProduct::getProductType()
{
	return"returnat";
}

json ReturnedProduct::toJSON()
{
	return json(*this);
}

void ReturnedProduct::display()
{
	cout << "Product Returnat" << endl;
	cout << "Nume Product: " << this->name << endl;
	cout << "Producator: " << this->producer << endl;
	cout << "Categorie: " << this->category << endl;
	cout << "ID: " << this->id << endl;
	cout << "Cantitate: " << this->quantity << endl;
	cout << "Garantie: " << this->yearsOfWarranty << " ani" << endl;
	cout << "Pret: " << this->price << endl;
	cout << "Motiv : " << this->reason << endl
		 << endl;
}
