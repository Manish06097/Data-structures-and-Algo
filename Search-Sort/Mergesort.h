#include <iostream>
#include <vector>
using namespace std;


  void merge(vector<int> &array,int s,int e){
	int i = s;
	int m = (s+e)/2;
	int j = m + 1;

	vector<int> temp;


	while(i<=m and j<=e){
		if(array[i] < array[j]){
			temp.push_back(array[i]);
			i++;
		}
		else{
			temp.push_back(array[j]);
			j++;
		}
	}

	//copy rem elements from first array
	while(i<=m){
		temp.push_back(array[i++]);
	}

	// or copy rem elements from second array
	while(j<=e){
		temp.push_back(array[j++]);
	}

	//copy back the eleemtns from temp to original array
	int k = 0 ;
	for(int idx = s; idx <=e ;idx++){
		array[idx] = temp[k++];
	}
	return;
}
void mergesort(vector<int>&arr,int s,int e)
{
    if(s>=e)
    {
        return;
    }
    else
    {
        int mid=(s+e)/2;
        mergesort(arr,s,mid);
        mergesort(arr,mid+1,e);
        return merge(arr,s,e);
        
    }
