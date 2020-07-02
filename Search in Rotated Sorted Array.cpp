class Solution {
public:
    
    int binary_single_search(vector<int> arr,int low,int high,int element) {
	if(low>high)
		return -1;
	int mid=low+(high-low)/2;
	if(arr[mid]==element)
		return mid;
	if(arr[low]<=arr[mid])
	{
		if(element>=arr[low] && element<=arr[mid])
			return binary_single_search(arr,low,mid-1,element);
		else
			return binary_single_search(arr,mid+1,high,element);
	}
		if(element>=arr[mid+1] && element<=arr[high])
			return binary_single_search(arr,mid+1,high,element);
		else
			return binary_single_search(arr,low,mid-1,element);
    }
    
    int search(vector<int>& nums, int target) {
        return binary_single_search(nums,0,nums.size()-1,target);
    }
};
