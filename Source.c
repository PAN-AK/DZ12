#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");
    char c;
    short int si;
    unsigned short int usi;
    int i;
    unsigned char uc;
    wchar_t wc;
    long long int lli;
    size_t sz;
    float f;
    double d;
    signed int si2;

    printf("char: %d байт (sizeof: %zu)\n", (char*)&c + 1 - (char*)&c, sizeof(c));
    printf("short int: %d байт (sizeof: %zu)\n", (char*)&si + 2 - (char*)&si, sizeof(si));
    printf("unsigned short int: %d байт (sizeof: %zu)\n", (char*)&usi + 2 - (char*)&usi, sizeof(usi));
    printf("int: %d байт (sizeof: %zu)\n", (char*)&i + 4 - (char*)&i, sizeof(i));
    printf("unsigned char: %d байт (sizeof: %zu)\n", (char*)&uc + 1 - (char*)&uc, sizeof(uc));
    printf("wchar_t: %d байт (sizeof: %zu)\n", (char*)&wc + 4 - (char*)&wc, sizeof(wc));
    printf("long long int: %d байт (sizeof: %zu)\n", (char*)&lli + 8 - (char*)&lli, sizeof(lli));
    printf("size_t: %d байт (sizeof: %zu)\n", (char*)&sz + 8 - (char*)&sz, sizeof(sz));
    printf("float: %d байт (sizeof: %zu)\n", (char*)&f + 4 - (char*)&f, sizeof(f));
    printf("double: %d байт (sizeof: %zu)\n", (char*)&d + 8 - (char*)&d, sizeof(d));
    printf("signed int: %d байт (sizeof: %zu)\n", (char*)&si2 + 4 - (char*)&si2, sizeof(si2));

    return 0;
}