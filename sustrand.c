#include <stdio.h>
char *substring(size_t start, size_t stop, const char *src, char *dst, size_t size)
{
   int count = stop - start;
   if ( count >= --size )
   {
      count = size;
   }
   sprintf(dst, "%.*s", count, src + start);
   return dst;
}

int main()
{
   static const char text[] = "The quick brown fox jumps over the lazy dog.";
   char a[9];
   printf("substring = \"%s\"\n", substring(0, 9, text, a, sizeof a));
   return 0;
}

/* my output///salida:
substring = "quick bro"
substring = "quic"
*/
