#include <shlwapi.h>

int main()
{
    char url[256] = "http://google.com";
    char escapedUrl[256] = "";
    DWORD blub;
    UrlEscapeA(url, escapedUrl, &blub, 0);
    UrlUnescapeA(escapedUrl, url, &blub, 0);
    PathFileExistsA("C:\\test32.exe");
    return 0;
}