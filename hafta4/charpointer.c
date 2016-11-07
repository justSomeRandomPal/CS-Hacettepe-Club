#include <stdio.h>
#include <stdlib.h>

void aStrCpy(char ** destPtr, char * source);


int main(int argc, char const *argv[]) {


 char * source="Serkan Korkut";
 char * dest = (char*)calloc(100,sizeof(char));


 aStrCpy(&dest,source);

 printf("%s\n",dest );


  return 0;
}

void aStrCpy(char ** destPtr, char * source)
{

  (*destPtr)=source;



}
