#include "Resource.h"
#include <string>
using std::string;

int main()
{
	{
		Resource localResource("local");
		string localString = localResource.GetName();
	}
	Resource* pResource = new Resource("created with new");
	string newString = pResource->GetName();
	int j = 3;
	Resource* p2 = pResource;
	
	delete pResource;
	string string2 = p2->GetName();
	delete pResource;
	delete p2;

	//string string3 = pResource->GetName();

	return 0;
}