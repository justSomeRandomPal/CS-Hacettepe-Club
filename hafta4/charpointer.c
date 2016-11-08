#include <stdio.h>
#include <stdlib.h>

void aStrCpy(char ** destPtr, char * source);


int main(int argc, char const *argv[]) {


 char * source = (char*)calloc(100,sizeof(char));

 source[0]='a';

 source[1]='b';

 source[2]='c';

 char * dest ;


 aStrCpy(&dest,source);

 printf("%s\n",dest );

dest[2]='m';

 printf("%s\n",dest );






  return 0;
}
/* If you do not allocate source and try to modify destination's characters by hand,
 you'll get an error since source and dest will be constants and read only  */
void aStrCpy(char ** destPtr, char * source)
{

  (*destPtr)=source;



}
