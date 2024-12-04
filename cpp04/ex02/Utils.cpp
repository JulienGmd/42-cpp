#include "Utils.h"
#include <sstream>

std::string Utils::itos(int i)
{
	std::stringstream ss;
	ss << i;
	return ss.str();
}
