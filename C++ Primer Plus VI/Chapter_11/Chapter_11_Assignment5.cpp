#include "../stdafx.h"
#include "Chapter_11_Functions.h"

int Chapter_11_Assignment5()
{
	std::cout << "\n\aNothing to see here (YET). Move along.";
	std::cout << "\nPress any key to continue ...";
	_getch();
	return 0;
};

/*
5. Rewrite the Stonewt class (Listings 11.16 and 11.17) so that it has a state member
that governs whether the object is interpreted in stone form,integer pounds form,
or floating-point pounds form.Overload the << operator to replace the
show_stn() and show_lbs() methods.Overload the addition,subtraction,and
multiplication operators so that one can add,subtract,and multiply Stonewt values.
Test your class with a short program that uses all the class methods and friends.
*/