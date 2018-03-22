// arr represents our sorted array.
// to find the index of key.

int binarySearch(int arr[], int l, int r, int key)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;
 
        // If the element is present at the middle 
        // itself
        if (arr[mid] == key)  
            return mid;
 
        // If element is smaller than mid, then 
        // it can only be present in left subarray
        if (arr[mid] > ley) 
            return binarySearch(arr, l, mid-1, key);
 
        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid+1, r, key);
   }
 
   // We reach here when element is not 
   // present in array
   return -1;
}

binarySearch(arr,lower index,size_of_arr-1,int key)
