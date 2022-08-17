#include <iostream>
#include <vector>
using namespace std;


int binarySearch(vector<int> v, int find)

{
    int low=0,high=v.size()-1;
    int mid;
    while(low<=high)
    {
        int mid=low+(high-low) /2;
    
        if(v[mid] == find)
            return mid;
        if(v[mid]<find)
        {
            low=mid+1;
        }
        else
        {
            high = mid - 1;
        }
        
    }
    return -1;
}
