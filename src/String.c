#include <stdio.h>


size_t my_strlen(const char *s)

char *my_strcpy(char *t, char *s)
{
     char *p = t;

     while (*t++ = *s++);

   return p;
}

{
   const char *p = s;

   while (*p)
      ++p;

   return (p - s);
}

int main(void)
{
   int i;
   char *s[] = 
   {
      "Git tutorials",
      "Tutorials Point"
   };

   for (i = 0; i < 2; ++i)
      
   printf("string lenght of %s = %lu\n", s[i], my_strlen(s[i]));


   return 0;
}
