#include <iostream>
#include <stdlib.h>
#include <time.h>


int* listOfRandomIntegers(int, int, int);
void printList(int*, int);



int main(){

	srand(time(0));
	int n;
	int a, b;
	std::cout << "Enter the list length: ";
	std::cin >> n;
	std::cout << "Enter largest allowed integer: ";
	std::cin >> b;
	std::cout << "Enter smallest allowed integer: ";
	std::cin >> a;
	int *list = listOfRandomIntegers(n, a, b);
	printList(list, n);


}

int* listOfRandomIntegers(int n, int smallest, int largest){

	int* randomIntegers = (int*)malloc(n * sizeof(int));
	for(int i = 0; i < n; i++){
		randomIntegers[i] = rand() % (largest - smallest + 1) + smallest;
	}
	return randomIntegers;

}

void printList(int *list, int n){

	for(int i = 0; i < n; i++){
		std::cout << i << ": " << list[i] << std::endl;
	}
}
