// selection sort

void selection_sort( int A[] , int n)  // int A[] = a array ; int n = array size ; [return nothing]
{
    int i , j , index_min , temp ;
    for( i = 0 ; i < n-1 ; i++)
    {
        index_min = i ;
        for(j = i+1 ; j < n ; j++)
        {
            if( A[j] < A[index_min])
                index_min = j ;
        }
        if(index_min != i)
        {
            temp = A[i] ;
            A[i] = A [index_min] ;
            A[index_min] = temp ;
        }
    }
}

// time complexity of selection sort is O( n square ) ;



// Bubble sort function

void bubbleSort(int arr[], int n)  // int arr[] = a array ; int n = size of the array
{
    int i, j;
    for (i = 0; i < n ; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

// time complexity of bubble sort is O(n square ) ;


// insertion sort function

void insertion_sort( int A[] , int n) // int A[] = a array ; int n = size of the array ;
{
    int i , j , item ;
    for( i = 1 ; i < n ; i++ )
    {
        item = A[i] ;
        j = i - 1 ;
        while(j >= 0 && A[j] > item)
        {
            A[ j+1 ] = A[j] ;
            j = j - 1;
        }
        A[ J + 1] = item ;
    }
}

// time complexity of insertion_sort is O( n square );


// merge sort function

void Merge( int arr[] , int l, int mid , int r)
{
   int n1 = mid - l  + 1;
   int n2 = r - mid;
   int a[n1];
   int b[n2]; // temp arrays
    for(int i = 0; i < n1 ; i++)
    {
        a[i] = arr[l + i];
    }
    for(int i = 0; i  < n2 ; i++)
    {
        b[i] = arr[mid + 1 + i];
    }
    int i = 0;
    int j = 0;
    int k = l;
    while( i < n1 && j < n2)
    {
        if(a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else{
            arr[k] = b[j];
            k++;
            j++;
        }
    }
    while(i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
    while(j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
}

void merge_sort(int arr[] , int l , int r)  // int arr[] = a array ; int l = array first index ; int r = array last index ;
{
    if( l < r )
    {
        int mid = (l + r)/ 2;
        merge_sort( arr , l , mid);
        merge_sort(arr, mid+1, r);
        Merge(arr , l , mid , r);
    }
}

// time complexity of merge sort O( N logN);


// quick sort function

int Partition( int A[] , int low , int high)
{
    int pivot , i , j , t;
    pivot = A[high];
    for( i = low -1 , j = low ; j < high ; j++)
    {
        if( A[j] < pivot)
        {
            i  = i +1;
            t = A[j];
            A[j] = A[i];
            A[i] = t ;
        }
    }
    t = A[high];
    A[high] = A[i+1];
    A[i+1] = t;
}

void quick_sort(int A[]), int low, int high)
{
    if( low >= high )
        return ;
    int p ;
    p = Partition( A , low , high);

    quick_sort( A , low , p-1);
    quick_sort( A , p+1 , high);
}

// time complexity of quick sort is O(n*logn) ;
