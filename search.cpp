// linear search function

   int linear_search(int arr[], int N, int x) // int arr[] = a array ;  int N = size of the array ; int x = searching value
{
    int i;
    for (i = 0; i < N; i++)
        if (arr[i] == x)
            return i;      // return the index of the expecting value
    return -1;
}
// time complexity O(n);



//Binary Search function

int Binary_search(int A[] , int n , int x)  // int A[] = a array ; int n = size of the array ; int x = expecting value
{
    int left , right ,  mid ;
    left = 0;
    right = n-1;
    while(left<=right){
        mid = (left + right/2);
        if(A[mid] == x)
            return mid ;              // return the index of the expecting value
        else if(A[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

// time complexity O(log n) ;
