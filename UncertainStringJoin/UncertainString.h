#ifndef UNCERTAIN_STR
#define UNCERTAIN_STR
#include "pch.h"

// Objects of class UncertainString represent character-level uncertain strings (UStrings)
class UncertainString
{
public:
	// Construction/Destruction
	UncertainString();						// Default Constructor
	UncertainString(std::string raw_input); // Create UString by parsing input string

	// segment(int x, int q): returns substring of UString from index ((x-1)q + 1) to xq, inclusive
	UncertainString segment(int x, int q);

	// instantiate( ): returns list of all string, probability pairs represented by UString
	std::vector<std::pair<std::string, float>> instantiate();

private:
	std::vector<std::vector<std::pair<char, float>>> ustring; // Pointer to character array
};

#endif //UNCERTAIN_STR