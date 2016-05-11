#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;
#define SIZE 2*1024*1024
 char *g(char * s1, char *s2)
{
   char* p = strcat(s1 ,s2) ;
 printf("%s\n", p);
  return p;
}
int main()
{
  char str1[SIZE] =  "gexian";
 // memset(str,0x00,sizeof(str));
 char * str2= "nan";
   char *pG =  g(str1,str2);
   char *pTemp = str1;
    printf("%s\n", pG);

  return 0;
}
