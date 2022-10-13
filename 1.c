#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {

  printf("ARGC = %d\nARGV = %s\n\n", argc, argv[0]);
  if (argc != 4) { // если количество аргументов не равно 4
    printf("Error!!! Wrong number of arguments (expected 3 after call program)\n");
    return -1;
  } else {
    printf("arg1 = %s arg2 = %s arg3= %s \n\n",argv[1], argv[2], argv[3]);
    // первый аргумент = а, второй агрумент = б, третий = с
    double a = atof(argv[1]);
    double b = atof(argv[2]);
    double c = atof(argv[3]);
    
    // check divide by zero
    if( a == 0){
      printf("We can't divide by zero!\n");
      return -1;
    }

    double det = b * b - 4 * a * c;
    // defines the conditions for real and different roots of the quadratic equation
    if (det > 0) {
      double root1 = (-b + sqrt(det)) / (2 * a);
      double root2 = (-b - sqrt(det)) / (2 * a);
      printf("\n Value of root1 = %.2f and value of root2 = %.2f", root1, root2);
    }
    // elseif condition defines both roots ( real and equal root) are equal in the quadratic equation
    else if (det == 0) {
      double root1 = -b / (2 * a); // both roots are equal;
      printf("\n Value of root = %.2f", root1);
    } else {
      printf("Roots are imaginary, i can't do that");
      return -1;
    }
  }
  return 0;
}