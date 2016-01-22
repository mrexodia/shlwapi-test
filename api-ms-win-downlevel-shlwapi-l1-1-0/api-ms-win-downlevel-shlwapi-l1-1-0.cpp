#include <windows.h>

#define DECLSPEC_EXPORT __declspec(dllexport)

#define MY_LWSTDAPI          EXTERN_C DECLSPEC_EXPORT HRESULT STDAPICALLTYPE
#define MY_LWSTDAPI_(type)   EXTERN_C DECLSPEC_EXPORT type STDAPICALLTYPE
#define MY_LWSTDAPIV         EXTERN_C DECLSPEC_EXPORT HRESULT STDAPIVCALLTYPE
#define MY_LWSTDAPIV_(type)  EXTERN_C DECLSPEC_EXPORT type STDAPIVCALLTYPE

MY_LWSTDAPI_(BOOL) PathFileExistsA(_In_ LPCSTR pszPath)
{
    return FALSE;
}

MY_LWSTDAPI UrlUnescapeA(_Inout_ PSTR pszUrl, _Out_writes_to_opt_(*pcchUnescaped, *pcchUnescaped) PSTR pszUnescaped, _Inout_opt_ DWORD *pcchUnescaped, DWORD dwFlags)
{
    return 0;
}

BOOL WINAPI DllMain(
    _In_ HINSTANCE hinstDLL,
    _In_ DWORD     fdwReason,
    _In_ LPVOID    lpvReserved
    )
{
    return TRUE;
}