int maxSubarraySum(int arr[], int n) {
    int max_sum=arr[0];
    int current_sum=arr[0];
    if(n==1){
        max_sum=arr[0];
    }
    for(int i =1;i<n;i++){
        if(arr[i]>arr[i]+current_sum){
            current_sum=arr[i];
        }else{
            current_sum=arr[i]+current_sum;
        }
        if(max_sum>current_sum){
          max_sum=max_sum;  
        }else{
            max_sum=current_sum;
        }
        
        
    }
    return max_sum;
  
    
    
    
}