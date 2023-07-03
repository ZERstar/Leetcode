//{ Driver Code Starts
// C program for insertion sort
#include <stdio.h>
#include <math.h>

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{

     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int a[], int n)
    {
        //code here
        for(int i=1;i<n;i++){
            int current = a[i];
            int prev = i - 1;
            while(prev >= 0 and a[prev] > current){
                a[prev + 1] = a[prev];
                prev = prev - 1;
            }
            a[prev + 1]=current;
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;

    scanf("%d",&T);

    while(T--){

    scanf("%d",&n);

    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.insertionSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}

// } Driver Code Ends