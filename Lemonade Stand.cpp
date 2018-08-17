// Lemonade Stand.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "Lemonade.h"
#include <string>
#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	int days = 1;
	float profit = 0;
	Lemonade stand1;
	while (days <= 30) {
		stand1.setup();
		stand1.run();
		profit += stand1.results();
		days++;
	}


    return 0;
}

