#include<iostream>
#include "Tab.h"

class Browser : public Tab
{
	
	Tab* head;
	Tab* tail;
	Tab* current;
	size_t count;

	void Free();
	void CopyFrom(const Browser& other);


public:
	Browser();
	Browser(const Browser& other);
	Browser operator=(const Browser& other);
	~Browser();

	void insert(const char* url);
	void go(const char* url);

	void remove();

	void back();
	void forward();

	void print();

};
