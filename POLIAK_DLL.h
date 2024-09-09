#include "framework.h"
#include "pch.h"

#ifndef POLIAKDLL_EXPORTS
#define POLIAKDLL __declspec(dllexport)
#else
#define POLIAKDLL __declspec(dllimport)
#endif


POLIAKDLL double Fun141(int arg1, int arg2);
POLIAKDLL int WINAPI Fun142(int arg1, int arg2, int arg3);
POLIAKDLL void Fun143(double in, double* out);

extern POLIAKDLL int g_nDllCallsCount;
extern POLIAKDLL int g_nFnCallsCount;


