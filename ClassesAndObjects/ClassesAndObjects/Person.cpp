#include "Person.h"
#include <iostream>
using std::cout;
using std::endl;

Person::Person(std::string first, std::string last, 
	int arbitrary) : firstname(first), lastname(last),
	arbitrarynumber(arbitrary)
{
	cout << "Constructing " << getName() << endl;
}

Person::Person() : arbitrarynumber(0)
{
	cout << "Constructing " << firstname << " " << lastname << endl;
}

Person::~Person() {
	
	cout << "DEconstructing " << getName() << endl;
	
}

std::string Person::getName() {
	return firstname + " " + lastname;
}