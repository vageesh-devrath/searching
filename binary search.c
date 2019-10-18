#include <stdio.h>
 
void sort(int *a,int n)
{
int c,x, temp,flag=1;
 temp = 0;
 while(flag == 1)
 {flag = 0;
 for (c = 1; c < n; c++)
      {
	  if (a[temp]>=a[c])
       {
	   x = a [c];
       a[c] = a [temp];
       a[temp] = x;
       temp++;
       flag == 1;
  }
      else
       temp++;
      
  }
     
	 for (c = 0; c < n; c++)
      printf("%d\n",a[c]);
}

}

int main()

{
   int c, first, last, middle, n, search, array[100];
 
   printf("Enter number of elements\n");
   scanf("%d",&n);
 
   printf("Enter %d integers\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%d",&array[c]);
 
   printf("Enter value to find\n");
   scanf("%d", &search);
   
   sort(array,n);
 
   first = 0;
   last = n - 1;
   middle = (first+last)/2;
 
   while (first <= last) {
      if (array[middle] < search)
         first = middle + 1;    
      else if (array[middle] == search) {
         printf("%d found at location %d.\n", search, middle+1);
         break;
      }
      else
         last = middle - 1;
 
      middle = (first + last)/2;
   }
   if (first > last)
      printf("Not found! %d isn't present in the list.\n", search);
 
   return 0;  
}
