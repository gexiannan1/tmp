#include <stdio.h>
#include <string.h>
#include <iostream>

char *hexStringToByteArray(char* hex )
{
  int hb;
  int len = strlen(hex);
  for(int i  = 0 ; i < len ; i++)
  {
    if(hex[i] >= 'A' && hex[i] <= 'F')
    {
      hb = hex[i] - 'A' + 10;
     printf("int is %d \n", hb);
    }


    /*if(hex[i+1] >= 'a' && hex[i+1] <= 'f')
    {
      lb = hex[i+1] - 'a' + 10;
    }*/
  }
  return hex;
}

struct opt
{
  const char *sz ;
  const char *sb ;
  int a ;
  int b;
  char arr[100];
};

int main()
{
  char* pHex = hexStringToByteArray("ABCG");
  printf ("***%s\n",pHex);



  opt stopt = {0};
  for(int i = 0; i < 100 ; i++)
  {
    printf("%d \n",stopt.arr[i]);
  }
  return 0;
}
