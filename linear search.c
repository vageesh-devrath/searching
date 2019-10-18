#include<stdio.h>
#include<stdlib.h>
int main()
{
    int array[50], search, i, n,flag; 
    printf("Enter number of elements in array\n");
    scanf("%d", &n); 
    printf("Enter %d integer(s)\n", n); 
    for (i= 0;i<n;i++)
    scanf("%d", &array[i]); 
    printf("Enter a number to search\n");
    scanf("%d", &search);
    for (i=0;i<n;i++)
    {
        if (array[i] == search)   
        {
          printf("%d is present at location %d.\n", search, i+1);
          break;
          flag=1;
        }
    }
    if (flag == 0)
    printf("%d isn't present in the array.\n", search);     
    return 0;
}
