#include "Red.h"


void Red::Initialize()
{
	name = "Red";
	mood = "Passionate";
	printf("This color is %s\n", name);
}

Red::~Red()
{
}

void Red::Mood()
{
	printf("%s has a mood of being %s\n", name, mood);

}
