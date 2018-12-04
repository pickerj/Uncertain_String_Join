#include "pch.h"
#include "UncertainString.h"

// Default constructor - create ustring "NULLB{(i, .50),(y,.50)}E
UncertainString::UncertainString()
{
	std::vector<std::pair<char, float>> tmp_vector;
	tmp_vector.push_back(std::make_pair<char, float>('N', 1.00));
	ustring.push_back(tmp_vector);

	tmp_vector[0] = std::make_pair<char, float>('U', 1.00);
	ustring.push_back(tmp_vector);

	tmp_vector[0] = std::make_pair<char, float>('U', 1.00);
	ustring.push_back(tmp_vector);

	tmp_vector[0] = std::make_pair<char, float>('I', 0.5);
	tmp_vector.push_back(std::make_pair<char, float>('Y', 0.5));
	ustring.push_back(tmp_vector);
	tmp_vector.clear();

	tmp_vector.push_back(std::make_pair<char, float>('T', 1.00));
	ustring.push_back(tmp_vector);

	tmp_vector[0] = std::make_pair<char, float>('E', 1.00);
	ustring.push_back(tmp_vector);
	
}

// Create UString by parsing input string
UncertainString::UncertainString(std::string raw_input)
{
	for (int i = 0; i < raw_input.size(); i++)
	{
		if (raw_input[i] == '{')
		{
			i += 1; // Move to first '(' character
			while (raw_input[i] != '}')
			{
				std::string tmp_str = raw_input.substr(i, 6); // ex: (c,.50)
				float tmp_float = 0;
				char tmp_char = 0;
				sscanf_s(tmp_str.c_str(), "(%c,%f", &tmp_char, 1, &tmp_float);

			}
		}
	}
}


// segment(int x, int q): returns substring of UString from index ((x-1)q + 1) to xq, inclusive
UncertainString UncertainString::segment(int x, int q)
{
	return UncertainString::UncertainString();
}

// instantiate( ): returns list of all string, probability pairs represented by UString
std::vector<std::pair<std::string, float>> UncertainString::instantiate()
{
	std::vector < std::pair<std::string, float>> tmp_result;
	tmp_result.push_back(std::make_pair<std::string, float>(std::string("NULLBYTE"), 1.00));
	
	return tmp_result;
}