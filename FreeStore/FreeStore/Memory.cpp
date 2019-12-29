#include "Person.h"

int main() 
{
	Person Dusty("Dusty", "Jackson", 777);
	Dusty.AddResource();
	Dusty.SetFirstName("Johnny");
	Dusty.AddResource();
	Person Johnny = Dusty;
	return 0;
}