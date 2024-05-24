#include "Blue.h"

void Blue::Initialize()
{
	name = "Blue";
	mood = "Cool";
	printf("This color is %s\n", name);
	
}

Blue::~Blue()
{
}

void Blue::Mood()
{
	printf("%s has a mood of being %s\n", name, mood);
}
