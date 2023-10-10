class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        int n=array1.size();
        int m=array2.size();
        
        int i=0,j=0,k=0;
        int ans[n+m];
        
        while(i<n && j<m){
            if(array1[i]<array2[j]){
                ans[k++]=array1[i++];
            }
            else{
                ans[k++]=array2[j++];
            }
        }
        while(i<n){
            ans[k++]=array1[i++];
        }
        while(j<m){
            ans[k++]=array2[j++];
        }
        
        int s = 0;
        int e = n+m-1;
        int mid = (s+e)/2;  
        if((n+m)%2==0){
        return (ans[mid] + ans[mid + 1]) / 2.0;      
        }
        else{
            return ans[mid];
        }
    }
};