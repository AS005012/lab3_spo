#pragma once
#ifdef STRINGLIBRARY_EXPORTS
#define STRINGLIBRARYAPI __declspec(dllexport)
#else
#define STRINGLIBRARYAPI __declspec(dllimport)
#endif

#include <String>

using namespace std;

extern "C" STRINGLIBRARYAPI string concatAndReverseSecondString(string s1, string s2);