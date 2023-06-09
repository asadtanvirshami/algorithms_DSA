// Bubble sort in C++
#include <iostream>
using namespace std;

// perform bubble sort
void bubbleSort(int array[], int size) {

for(int step = 0; step < size; ++step){
	
	for(int i = 0; i < size - step; ++i){
		if(array[i] > array[i+1]){
			int temp = array[i];
			array[i] = array[i+1];
			array[i+1]=temp;
		}
	}
  }
}

void printArray(int array[], int size){
	for(int i = 0; i < size; i++){
		cout<<" "<< array[i];
	}
	cout << "\n";
}

int main (){
	int data[] = {-2,3,13,15,5,9};
	int size = sizeof(data)/sizeof(data[0]);
	
	bubbleSort(data,size);
	cout << "Array is: ";
	
	printArray(data,size);

}