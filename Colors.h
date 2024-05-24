#pragma once
#include <stdio.h>

class Colors
{
public:

	virtual void Initialize(); //Set the name and mood and call it.

	virtual ~Colors(); //delete color.

	virtual void Mood(); //Which mood does it personify

protected:

	const char* name;
	const char* mood;

};

