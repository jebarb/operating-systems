#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <stdio.h>

 /*
 * Maxwell Daum and James Barbour
 * Honor Code: We did not give or recieve any unpermitted information on this assignment. 
 * All code (execpt for boilerplate) is our own.
 */

int main() {
  char *a = malloc(1024);
  *(a+10) = '\0';
  printf("%s\n", a);
  free(a);
  *(a+10) = '\0';
  write(1, a, 1024);

  return (errno);
}
