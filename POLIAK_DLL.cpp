#include "pch.h"
#include "POLIAK_DLL.h"
#include "framework.h"

double Fun141(int arg1, int arg2)
{
    return static_cast<double>(arg1 + arg2);
}

int WINAPI Fun142(int arg1, int arg2, int arg3)
{
    return arg1 * arg2 * arg3;
}

void Fun143(double in, double* out)
{
    if (out)
    {
        *out = in / 2.0;
    }
}

#pragma data_seg("ASHARE")
POLIAKDLL int g_nDllCallsCount = 0;
#pragma data_seg()
#pragma comment(linker, "/SECTION:ASHARE,RWS")

POLIAKDLL int g_nFnCallsCount = 0;


