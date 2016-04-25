#include <stdio.h>

int main()
{
   int n;

<<<<<<< HEAD
   printf("*Enter an int: \n");
=======
   printf("Enter an int:   -\n");
>>>>>>> 2ba830dff02df143b439813ad26552810d06b218
   scanf("%d", &n);

   if (n%2 == 0)
<<<<<<< HEAD
      printf("Even\n");
   else
      printf("Odd\n");
=======
       printf("Even\n");
   else
       printf("Odd\n");
>>>>>>> e1c14426edace837d6af28964520f29bb119fad5

   return 0;
}
