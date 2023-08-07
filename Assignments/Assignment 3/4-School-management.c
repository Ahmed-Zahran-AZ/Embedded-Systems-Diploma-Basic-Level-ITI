
#include <stdio.h>

int
main ()
{
  int passed = 0, failed = 0, max, min, sum;

  int class_1[10] = { 60, 70, 40, 53, 84, 90, 95, 99, 100, 96 };
  int class_2[10] = { 65, 60, 65, 40, 54, 30, 99, 100, 100, 93 };
  int class_3[10] = { 63, 72, 57, 70, 85, 32, 92, 95, 100, 99 };
//Minimum

  min = class_1[0];
  if (class_2[0] <= class_1[0])
    {
      min = class_2[0];
    }
  if (class_3[0] <= min)
    {
      min = class_3[0];
    }
//Maxium
  max = class_1[0];
  if (class_2[0] >= class_1[0])
    {
      max = class_2[0];
    }
  if (class_3[0] >= max)
    {
      max = class_3[0];
    }
/********* Main loop **********************/

  for (int i = 0; i < 10; i++)
    {
	/*************************************/
      //failed and passed
      if (class_1[i] < 50)
	{
	  failed++;
	}
      if (class_2[i] < 50)
	{
	  failed++;
	}
      if (class_3[i] < 50)
	{
	  failed++;
	}
	/*************************************/
      //minimum:
      if (class_1[i] <= min)
	{
	  min = class_1[i];
	}
      if (class_2[i] <= min)
	{
	  min = class_2[i];
	}
      if (class_3[i] <= min)
	{
	  min = class_3[i];
	}
     /***********************************/
      //maximum:
      if (class_1[i] >= max)
	{
	  max = class_1[i];
	}
      if (class_2[i] >= max)
	{
	  max = class_2[i];
	}
      if (class_3[i] >= max)
	{
	  max = class_3[i];
	}
	/*************************************/
      //Sum of grades
      sum += class_1[i] + class_2[i] + class_3[i];
    }
    
    
  printf ("Number of passed students = %d students\n", 30 - failed);
  printf ("Number of failed students = %d students\n", failed);
  printf ("Highest grade = %d\n", max);
  printf ("Lowest grade = %d\n", min);
  printf ("Average grade = %.2lf\n", sum / 30.0);



  return 0;
}
