// Puts and Gets in C.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"

int main()
{
	char catsName[50];
	char catsFood[25];
	char sentence[78] = "";
	puts("What's the cats dumb name ");
	gets_s(catsName);
	//puts is like the printf function(but puts comes with a \n), while gets is like the scanf function
	puts("What does he eat? ");
	gets_s(catsFood);
	strcat_s(sentence, catsName);
	strcat_s(sentence, " loves to eat ");
	strcat_s(sentence, catsFood);
	puts(sentence);
	//so this is like a simpler form of scanf and printf(no &, no peraminters, over all a pretty slick program)
    return 0;
}

