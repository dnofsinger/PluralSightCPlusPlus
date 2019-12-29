#include "Person.h"
#include <iostream>
using std::cout;
using std::endl;

Person::Person(std::string first, std::string last,
	int arbitrary) : firstname(first), lastname(last),
	arbitrarynumber(arbitrary), pResource(nullptr)
{
	cout << "Constructing " << GetName() << endl;
}

Person::Person() : arbitrarynumber(0)
{
	cout << "Constructing " << firstname << " " << lastname << endl;
}

Person::~Person() {

	cout << "DEconstructing " << GetName() << endl;
	delete pResource;

}

std::string Person::GetName() const{
	return firstname + " " + lastname;
}

void Person::AddResource() {
	delete pResource;
	pResource = new Resource("Resource for " + GetName());
}

Person::Person(Person const & p) {

	pResource = new Resource(p.pResource->GetName());
	
}

Person& Person::operator=(const Person& p) {
	delete pResource;
	pResource = new Resource(p.pResource->GetName());
	return *this;
}