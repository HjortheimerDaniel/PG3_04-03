#include "White.h"

void White::Initialize()
{
	name = "White";
	mood = "Pure";
	printf("This color is %s\n", name);
}

White::~White()
{
}

void White::Mood()
{
	printf("%s has a mood of being %s\n", name, mood);
}
