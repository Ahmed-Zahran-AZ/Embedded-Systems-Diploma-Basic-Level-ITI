#include <stdio.h>

int
main ()
{
  int x = 10, y = 20, z = 30;
  int *p = &x, *q = &y, *r = &z;

  /***1***/
  printf ("x = %d\ny=%d\nz=%d\np=%p\nq=%p\nr=%p\n*p=%d\n*q=%d\n*r=%d\n\n", x,
	  y, z, p, q, r, *p, *q, *r);

  /***2***/
  printf ("Swapping pointers...\n");
  r = p;
  p = q;
  q = r;
  printf ("x = %d\ny=%d\nz=%d\np=%p\nq=%p\nr=%p\n*p=%d\n*q=%d\n*r=%d\n", x,
	  y, z, p, q, r, *p, *q, *r);


  return 0;
}
