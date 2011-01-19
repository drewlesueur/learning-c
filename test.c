/* Hello World program */
#include<stdio.h>

#define func(stuff) int f_##stuff(val) { printf(#stuff);} f_##stuff(200)

#define print(line) printf()




int func1() {
  printf("you called func1\n");
}

  
main() {
  //testgoto:
  //  printf("this is a goto");
  //  goto end_of_function;
    
  printf("Hello World\n");
  //goto testgoto;
  
  //end_of_function:
  
  func1();
  func("you are testing this");
}





