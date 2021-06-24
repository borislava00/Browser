#include <iostream>

class Tab
{

public:
	char* url;
	Tab* next;
	Tab* prev;
	size_t time;

	void CopyFrom(const Tab& other);
	void Free();


	Tab();
	Tab(const char* url);
	Tab(const Tab& other);
	Tab& operator=(const Tab& other);
	~Tab();

	size_t getTime();
	void setUrl(const char* url);
};
