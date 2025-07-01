class Solution {
    // Function to sort an array using quick sort algorithm.
    static void quickSort(int arr[], int low, int high) {
        // code here
        int n = arr.length;
        
        if(low < high){
            int pi = partition(arr, low, high);
            
            quickSort(arr, low, pi - 1);
            quickSort(arr, pi + 1, high);
        }
    }

    static int partition(int arr[], int low, int high) {
        // your code here
        int pivot = low;
        
        while(low < high){
            while(arr[low] < arr[pivot]){
                low++;
            }
            
            while(arr[high] > arr[pivot]){
                high--;
            }
            
            if(low < high){
                int temp = arr[low];
                arr[low] = arr[high];
                arr[high] = temp;
            }
        }
        
        int temp1 = arr[high];
        arr[high] = arr[pivot];
        arr[pivot] = temp1;
        
        return high;
    }
}