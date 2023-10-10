class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        // Your code here
        map<int,int>m;
        int p=n/k;
        int count=0;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        for(auto i:m){
            if(i.second>p)
            count++;
        }
        return count;
    }
};