#include "StringLibrary.h"
#include <algorithm>

extern "C" string concatAndReverseSecondString(string s1, string s2)
{
	reverse(s2.begin(), s2.end());
	return s1 + s2;
}