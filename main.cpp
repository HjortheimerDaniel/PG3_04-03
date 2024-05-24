#include <stdio.h>
#include "Colors.h"
#include "Red.h"
#include "Blue.h"
#include "White.h"


int main() {

	Colors* colors[3];

	colors[0] = new Red;
	colors[1] = new Blue;
	colors[2] = new White;

	for (int i = 0; i < 3; i++)
	{
		colors[i]->Initialize();
	}

	printf("\n");

	for (int i = 0; i < 3; i++)
	{
		colors[i]->Mood();
	}


	for (int i = 0; i < 3; i++)
	{
		delete colors[i];
	}

	return 0; }