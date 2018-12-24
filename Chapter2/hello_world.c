#include <stdio.h>


int add_togrther(int x ,int y){
	int result = x + y;
	return result;
}



int main() {
  puts("Hello, world!");
  int added =add_togrther(10,25);
  printf("Sum = %d\n", added);

  return 0;
}


