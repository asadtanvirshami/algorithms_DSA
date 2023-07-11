#include<iostream>

using namespace std;

 int  linearSearch(int arr[], int size, int target){
 	for(int i = 0; i < size; i++)
 		if(arr[i] == target)
 			return i;
		return -1;

 }
 
 int main(){
 	int data[] = {-5,2,10,4,6};
 	int size = sizeof(data)/sizeof(data[0]);
 	int target = 10;
 	int result = linearSearch(data,size,target);
 	
	(result == -1) ? cout << "Element not found" : cout << "Element found at index: " << result;

 }