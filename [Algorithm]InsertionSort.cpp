#include <stdio.h>
#include <iostream>

int main(){
	int key;
	int arr[10] = {10, 3, 4, 1, 9, 10, 8, 1, 2, 3};
	for (int j = 1; j < sizeof(arr)/sizeof(arr[0]); j++){ //inc
		key = arr[j];
		for (int i = 0; i < j; i++){
			if (arr[i] > key){
				arr[j] = arr[i];
				arr[i] = key;
				key = arr[j];
			}
		}
	}
	for (int j = 0; j < 10; j++){
		std::cout << arr[j] << " ";
	}
	std::cout << "\n";
	for (int j = 1; j < sizeof(arr)/sizeof(arr[0]); j++){//dec
		key = arr[j];
		for (int i = 0; i < j; i++){
			if (arr[i] < key){
				arr[j] = arr[i];
				arr[i] = key;
				key = arr[j];
			}
		}
	}
	for (int j = 0; j < 10; j++){
		std::cout << arr[j] << " ";
	}
	
}
