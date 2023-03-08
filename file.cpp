#include <stdio.h>

int main() {
   char filename[50];
   char input_string[100];
   FILE *fp;

   printf("Enter the file name to open: ");
   scanf("%s", filename);

   fp = fopen(filename, "a"); // open the file in append mode

   if (fp == NULL) {
      printf("Error: Could not open file %s", filename);
      return 1;
   }

   printf("Enter string to append: ");
   scanf(" %[^\n]", input_string);

   fprintf(fp, "%s\n", input_string); // write the input string to the file

   fclose(fp); // close the file

   return 0;
}
