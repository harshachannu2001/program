#include <stdio.h>

int main(void) {
  int a[100],n,i,j,temp;
  printf("Enter the number of elements \n");
  scanf("%d",&n);
  printf("Enter the elements \n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);

  }
  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-1-i;j++)
    {
      if(a[j]>a[j+1]) //Swapping the Elements after checking if the previous element is greater than the latter one
      {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
  }
  printf("Sorted Array is \n");
  for(i=0;i<n;i++)
  {
    printf("%d \n",a[i]); //Printing
  }
  return 0;
} //End of Program
