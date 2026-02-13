#include<stdio.h>
int main()
{
  int n;
  int n1=0;
  int n2=1;
  int n3 ;
  int i;
  
  printf("enter the terms :  ");
  scanf("%d",&n);
  
  for(i=0 ; i<n ; i++)
  
  {
     printf("%d", n1);
     n3 = n1 + n2 ;
     
     n1 = n2;
     n2 = n3;
  }
  
  printf("\n");
  return 0 ;
}
