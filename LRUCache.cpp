#include "LRUCache.h"
#include <algorithm>

using namespace std;

LRUCache::LRUCache(int capacity)
{
	this->capacity=capacity;
}

vector<int> LRUCache::processRequests(vector<int> requestsNo)
{
	vector<int>::iterator i=requestsNo.begin();
	vector<int>::iterator it=lru.begin();
	while(i!=requestsNo.end())
	{
		while(it!=lru.end())
			{if(!((*it)!=(*i)))
				lru.erase(it);
			it++;}
		it=lru.insert(lru.begin(),*i);
		if(!(lru.size()<=capacity))
		{
			lru.pop_back();
			lru.resize(capacity);
		}
	   i++;}
	return lru;
}

int LRUCache::getCapacity()
{
	return capacity;
}

int LRUCache::getSize()
{
	return size;
}

vector<int> LRUCache::getLRU()
{
	return lru;
}

int LRUCache::getLRUCapacity()
{
	return lru.size();
}

void LRUCache::setCapacity(int capacity)
{
	this->capacity=capacity;
}

void LRUCache::setLRU(vector<int> aux)
{
	lru=aux;
}
