#include <stdio.h>
#include <ctype.h>

int function(){
  return 0;
}

void print_hello(){
  printf("hello\n");
//  fflush(stdout);
}

int main(int argc, char **argv)
{
  char c;
  int function_value=0;
  //int fgetc ( FILE * stream );
  //Returns the character currently pointed by the internal file position 
  //indicator of the specified stream. The internal file position indicator is 
  //then advanced to the next character
  c = fgetc(stdin);
  
  while(c != EOF){
    //int isalnum ( int c );
    //Checks whether c is either a decimal digit or an uppercase or lowercase letter.
    function_value++;
    if(isalnum(c)){
        printf("%c", c);
        function_value=function();
    }
    else
        c = fgetc(stdin);
  }

  return 1;
}
