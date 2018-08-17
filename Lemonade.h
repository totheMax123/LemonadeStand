#pragma once
#ifndef MYCLASS_H
#define MYCLASS_H

class Lemonade
{
public:
	Lemonade();
	~Lemonade();
	void setup();
	void run();
	int results();
private:
	int cups, sugar, temp[30], events[15], random;
	float price, ads, total, expense;
};

#endif // !MYCLASS_H