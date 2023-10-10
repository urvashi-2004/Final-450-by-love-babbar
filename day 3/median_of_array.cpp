class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    // Code here.
		    int ans=0;
		    sort(v.begin(),v.end());
		    
		    if(v.size()%2==0){
		        ans= (v[v.size()/2] + v[(v.size()/2)-1])/2;
		    }
		    
		    else{
		        ans= v[v.size()/2];
		    }
		    return ans;
		}
};