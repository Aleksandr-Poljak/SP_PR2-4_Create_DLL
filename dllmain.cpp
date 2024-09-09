// dllmain.cpp : Определяет точку входа для приложения DLL.
#include "pch.h"
#include "POLIAK_DLL.h"

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    {
        TCHAR message[200], name[250];
        lstrcpy(message, TEXT("Project Poliak A.A. \nLibrary is loading\n"));
        GetModuleFileName(hModule, name, 250);
        lstrcat(message, name);
        MessageBox(nullptr, message, TEXT("DllMain. Loading Dll. PROCESS_ATTACH"), MB_OK);

        g_nDllCallsCount++;
    }
    return TRUE;
    case DLL_THREAD_ATTACH:
    {
        TCHAR message[200], name[250];
        lstrcpy(message, TEXT("Project Poliak A.A. \nLibrary is loading\n"));
        GetModuleFileName(hModule, name, 250);
        lstrcat(message, name);
        MessageBox(nullptr, message, TEXT("DllMain. Loading Dll. THREAD_ATTACH"), MB_OK);
    }
    return TRUE;
    case DLL_THREAD_DETACH:
    {
        TCHAR message[200], name[250];
        lstrcpy(message,
            TEXT("Project Poliak A.A. \nLibrary is unloading\n"));
        GetModuleFileName(hModule, name, 250);
        lstrcat(message, name);
        MessageBox(nullptr, message, TEXT("DllMain. Unloading Dll. THREAD_DETACH"), MB_OK);
    }
    break;
    case DLL_PROCESS_DETACH:
    {
        TCHAR message[200], name[250];
        lstrcpy(message,
            TEXT("Project Poliak A.A. \nLibrary is unloading\n"));
        GetModuleFileName(hModule, name, 250);
        lstrcat(message, name);
        MessageBox(nullptr, message, TEXT("DllMain. Unloading Dll PROCESS_DETACH"), MB_OK);
    }
    break;
    }
    return TRUE;
}

