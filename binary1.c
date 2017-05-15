#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    if(argc==2) {
		  printf("Checking password: %s\n", argv[1]);
		  if(strcmp(argv[1], "P4SSW0RD")==0) {
			  printf("Access granted!\n");
		  } else {
			  printf("Incorrect password!\n");
		  }
	  } else {
		printf("Usage: <key>\n");
	}
	return 0;
}
