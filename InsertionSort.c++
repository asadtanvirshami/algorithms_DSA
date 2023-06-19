#include <iostream>

using namespace std;

void printArray(int array[], int size){
	for(int i = 0; i < size; i++){
		cout << array[i] << " "; 
	}
	cout << endl;
}

void InsertionSort(int array[], int size){
	for (int step = 1; step < size; step ++){
		int key = array[step];
		int j = step-1;
		
		while(key < array[j] && j >= 0){
			array[j+1] = array[j];
			--j;
		}
		array[j+1] = key;
	}
}

int main(){
	int data[]={8,4,2,10,6,15};
	int size = sizeof(data)/sizeof(data[0]);
	InsertionSort(data,size);
	cout<< "Sorted Array is:\n";
	printArray(data,size);
}
