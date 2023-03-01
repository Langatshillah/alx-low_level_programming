#include <stdio.h>

int main(void){
int a[] = {4, 8, 98, 102};
int *p:;
p = &a[0];
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */

printf("a[2] = %d\n", *(p+2)); //added line


return (0);
}
