# Searching
## Aim:-
        Perform different types of searching operations
### Theory:-
#### Algorithm:-
                 Algorithm on linear search
                 1)Start
                 2)int search(int arr[], int n, int x)
                 int i;
                 for (i = 0; i < n; i++) 
                 if (arr[i] == x) 
                 return i;
                 return -1;
                 int main(void) 
                 int arr[] = { 2, 3, 4, 10, 40 }; 
                 int x = 10; 
                 int n = sizeof(arr) / sizeof(arr[0]); 
                 int result = search(arr, n, x);
                 (result == -1)? cout<<"Element is not present in array" : cout<<"Element is present at index " <<result; 
                 3)End
                 Algortim for Binary search
                 1)Start
                 2)int binarySearch(int arr[], int l, int r, int x) 
                                 if (r >= l){
                                  int mid = l + (r - l) / 2;
                                  if (arr[mid] > x) 
                                   return binarySearch(arr, l, mid - 1, x); 
                                   return binarySearch(arr, mid + 1, r, x); }
                                    return -1;
                 3)int main(void){ 
                              int arr[] = { 2, 3, 4, 10, 40 }; 
                               int n = sizeof(arr) / sizeof(arr[0]); 
                               int x = 10; 
                                int result = binarySearch(arr, 0, n - 1, x); 
                                (result == -1) ? printf("Element is not present in array"): printf("Element is present at index%d",result); 
                   } 
 ##### Conclusion:-
                    From this program we learnt how to Do different types of searching in an array in this program we did linear and binary                     search.
