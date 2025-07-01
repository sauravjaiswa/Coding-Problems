class Solution {
    void selectionSort(int[] arr) {
        // code here
        int n = arr.length;
        var minIdx = -1;
        
        for(int i = 0; i < n - 1; i++){
            minIdx = i;
            for(int j = i + 1; j < n; j++){
                if(arr[j] < arr[minIdx]){
                    int temp = arr[minIdx];
                    arr[minIdx] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
}