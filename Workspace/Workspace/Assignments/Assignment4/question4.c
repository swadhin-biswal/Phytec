// Pointer Program To Swap Two Numbers Without Using Third Variable
 #include<stdio.h>
int main() 
{
      float A, B, temp;
      printf("Enter first number: ");
      scanf("%f", &A);
      printf("Enter second number: ");
      scanf("%f", &B);
      // Value of A is assigned to temp
      temp = A;
      // Value of B is assigned to A
      A = B;
      // Value of temp (initial value of A) is assigned to B
      B = temp;
      printf("\nAfter swapping, A = %.2f\n", A);
      printf("After swapping, B = %.2f", B);
      return 0;
}
