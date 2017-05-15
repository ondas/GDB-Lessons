#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
  volatile int modified;
  char buffer[20];

  modified = 0;
  gets(buffer);

  if(modified != 0) {
      printf("Access granted\n");
  } else {
      printf("Nope\n");
  }
}
