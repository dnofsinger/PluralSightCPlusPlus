
//#include "Person.h"
#include "Tweeter.h"
#include "status.h"
#include <iostream>

int main()
{
	Person p1("Will", "Ferrell", 123);
	{
		Tweeter t1("ThatOne", "Dude", 456, "@ThatOneGuy");
		std::string name2 = t1.getName();
	}
	std::cout << "After Innermost block" << std::endl;
	std::string name = p1.getName();

	//int i = p1.arbitrarynumber;

	Status s = Pending;
	s = Approved;

	FileError fe = FileError::notfound;
	NetworkError ne = NetworkError::disconnected;
	ne = NetworkError::ok;


	return 0;
}