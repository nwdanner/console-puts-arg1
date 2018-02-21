#include <stdio.h>

typedef void VSTRFUNC(char* str);
typedef VSTRFUNC* LPVSTRFN;

void puts2(char* str) { puts(str); }

int main(int argc, char** argv) {
   LPVSTRFN pfn = puts2;

   if (argc > 1)
      pfn(argv[1]);
   else
      pfn("Hello world!");

   return 0;
}
