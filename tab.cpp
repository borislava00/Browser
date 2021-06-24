#include "Tab.h"
#include <ctime>

void Tab::CopyFrom(const Tab& other)
{
	url = new char[strlen(other.url) + 1];
	strcpy(url, other.url);

}
void Tab::Free()
{
	delete[] url;
}
Tab::Tab() : url(url), next(next), prev(prev), time(time){}
Tab::Tab(const char* url)
{
	this->url = new char[strlen(url) + 1];
	strcpy(this->url, url);
	next = nullptr;
	prev = nullptr;
	time = 0;
}

Tab::Tab(const Tab& other)
{
	CopyFrom(other);
}

Tab& Tab::operator=(const Tab& other)
{
	if (this != &other)
	{
		Free();
		CopyFrom(other);
	}
	return *this;
}

Tab::~Tab()
{
	Free();
}

size_t Tab::getTime()
{
	return std::time(0);
}

void Tab::setUrl(const char* url)
{
	delete[] this->url;
	this->url = new char[strlen(url) + 1];
	strcpy(this->url, url);
}