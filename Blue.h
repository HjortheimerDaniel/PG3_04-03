#pragma once
#include "Colors.h"

class Blue: public Colors //get all the functions in the Colors class and make them available here
{
public:
	
	void Initialize() override; //Override the Initialize in the Colors class with information in this class.

	~Blue(); //delete color.

	void Mood() override; //Override the mood
};

