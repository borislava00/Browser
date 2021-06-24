using namespace std;
#include "browser.h"


void Browser::Free()
{
	Tab* iter = head;
	while (iter != nullptr)
	{
		Tab* toDelete = iter;
		iter = iter->next;
		delete toDelete;
	}
}

void Browser::CopyFrom(const Browser& other)
{
	Tab* otherHead = other.head;
	while (otherHead != nullptr)
	{
		insert(otherHead->url);
		otherHead = otherHead->next;
	}
}


Browser::Browser()
{
	count = 1;
	tail = head = current = new Tab("about:blanc");
	current->time = getTime();

}

Browser::Browser(const Browser& other)
{
	CopyFrom(other);
}
Browser Browser::operator=(const Browser& other)
{
	if (this != &other)
	{
		Free();
		CopyFrom(other);
	}
	return *this;
}

Browser::~Browser()
{
	Free();
}


void Browser::insert(const char* url)
{
	Tab* newTab = new Tab(url);
	if (current == head && current == tail)
	{
		head->next = newTab;
		newTab->prev = head;
		current = tail = newTab;
	}
	else if (current == tail)
	{

		tail->next = newTab;
		newTab->prev = tail;
		current = tail = newTab;
	}
	else 
	{
		newTab->prev = current;
		newTab->next=current->next;
		current->next=newTab;
		current = newTab;
	}
	
	current->time = getTime();
	count++;
}

void Browser::go(const char* url)
{
	current->setUrl(url);
	current->time = getTime();
}

void Browser::remove()
{

	if (current == head && current == tail)
	{
		go("about:blanc");
	}
	else if (current == head)
	{
		head = current->next;
		delete current;
		head->prev = nullptr;
		current = head;
		count--;
	}
	else if (current == tail)
	{
		tail = current->prev;
		delete current;
		tail->next = nullptr;
		current = tail;
		count--;
	}
	else
	{
		Tab* toRemove = current;
		toRemove->prev->next = current->next;
		current->next->prev = toRemove->prev;
		current = toRemove->next;
		delete toRemove;
		count--;
	}

}
	
void Browser::back()
{
	if (current == head)
		return;
	current = current->prev;
	
}

void Browser::forward()
{
	if (current == tail)
		return;
	current = current->next;
}

void Browser::print()
{
	Tab* iter = head;
	while (iter != nullptr)
	{ 
		if (iter == current ) 
		{
			std::cout << ">" << iter->url << " " << iter->time << "\n";
			iter = iter->next;
		}
		else
		{
			cout<<iter->url << " " << iter->time << "\n";
			iter = iter->next;
		}
	}


}
