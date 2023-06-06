#include<stdio.h>
main()
{
  int i,j, c=1, n;
  printf ("enter number of terms\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf(" %d",c);
      c++;
    }
    printf("\n");
  }
}
