#include "ShoppingCart.h"

ShoppingCart::ShoppingCart()
{
	this->payMethod = "-";
}

ShoppingCart::ShoppingCart(const string &payMethod)
{
	this->payMethod=payMethod;
}

string &ShoppingCart::getPayMethod()
{
	return payMethod;
}

void ShoppingCart::setPayMethod(const string &payMethod)
{
	this->payMethod=payMethod;
}

void ShoppingCart::addProduct(int id, int quantity)
{
	shoppingCart[id]=quantity;
}

void ShoppingCart::raiseQuantity(int id, int quantity)
{
shoppingCart[id]=shoppingCart[id]+quantity;
}

void ShoppingCart::lowerQuantity(int id, int quantity)
{
    if(shoppingCart[id]>quantity)
	shoppingCart[id]=shoppingCart[id]-quantity;
	else
        return;
}

int ShoppingCart::getQuantity(int productID)
{
	map<int, int>::iterator i;
	i=shoppingCart.find(productID);
	if(i!=shoppingCart.end())
	return shoppingCart[productID];
	else
        return -1;
}

void ShoppingCart::deleteProduct(int productID)
{
	map<int, int>::iterator i;
	i=shoppingCart.find(productID);
	if(i!=shoppingCart.end())
    shoppingCart.erase(productID);
    else
        return;
}

map<int, int> &ShoppingCart::getShoppingCart()
{
	return shoppingCart;
}

void ShoppingCart::displayShoppingCart()
{
	throw("undefined");
}

json ShoppingCart::toJSON()
{
  return json(*this);
}
