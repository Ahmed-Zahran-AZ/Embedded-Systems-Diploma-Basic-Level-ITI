#include <stdio.h>

int my_strlen (char *str)
{

  int i = 0;

  for (; str[i] != '\0'; i++);
  return i-1;	//i-1 to remove the '\0'
}

void reverse(char* str,int length){
    for(int i = length-1;i>=0;i--){
        printf("%c",str[i]);
}
}

int main ()
{
  while (1)
    {
      char str[50];
      printf ("Enter the string: ");
      fgets (str, sizeof (str), stdin);
      printf("String length = %d\n",my_strlen (str));
      printf("The string reversed: ");
      reverse(str,my_strlen(str));
      printf("\n\n\n");
    }
}
