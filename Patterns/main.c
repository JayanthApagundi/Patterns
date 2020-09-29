#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   printf("Enter value of n \n");
   scanf("%d", &n);

   printf("--------------------\n");
   //Generate's square
   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < n; j++)
         printf("* ");
      printf("\n");
   }
   printf("--------------------\n");

   //Generate's square form numbers
   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < n; j++)
         printf("%d ", j);
      printf("\n");
   }
   printf("--------------------\n");

   //Generate's inverted right angled triangle
   for (int i = 0; i < n; i++)
   {
      for (int j = i; j < n; j++)
         printf("* ");
      printf("\n");
   }
   printf("--------------------\n");

   //Generate's inverted right angled triangle with numbers
   for (int i = 1; i <= n; ++i)
   {
      for (int j = i; j <= n; ++j)
         printf("%d ", i);
      printf("\n");
   }
   printf("--------------------\n");

   //Generate's right angled triangle
   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j <= i; j++)
         printf("* ");
      printf("\n");
   }
   printf("--------------------\n");

   //Generate's right angled triangle with numbers
   for (int i = 1; i <= n; i++)
   {
      for (int j = 1; j <= i; j++)
         printf("%d ", j);
      printf("\n");
   }
   printf("--------------------\n");

   //Generates triangle attached to right side
   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < i; j++)
         printf("* ");
      printf("\n");
   }
   for (int i = 0; i < n; i++)
   {
      for (int j = i; j < n; j++)
         printf("* ");
      printf("\n");
   }
   printf("--------------------\n");

   //Generates triangle attached to right side with numbers
   for (int i = 1; i < n; i++)
   {
      for (int j = 1; j < i; j++)
         printf("%d ", j);
      printf("\n");
   }
   for (int i = 1; i < n; i++)
   {
      for (int j = i; j < n; j++)
         printf("%d ", j);
      printf("\n");
   }
   printf("----------------------\n");

   // Generates traingle attached to the bottom
   for (int i = 1; i <= n; i++)
   {
      for (int space = 1; space <= n - i; space++)
      {
         printf("   ");
      }
      for (int j = 1; j <= i * 2 - 1; j++)
      {
         printf(" * ");
      }

      printf("\n");
   }
    printf("----------------------\n");

   // Generates a upper traingle top
   for (int i = n; i >= 1; i--)
   {
      for (int space = n - i; space >= 1; space--)
      {
         printf("   ");
      }

      for (int j = i * 2 - 1; j >= 1; j--)
      {
         printf(" * ");
      }

      printf("\n");
   }
}
