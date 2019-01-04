#include <stdio.h>

double arrayaverage(int arr[],int size){
	double avg;
	int i;
	double sum=0;
	for (i=0; i<size; i++){
		sum = sum+arr[i];

	}
	avg = sum/size;
	return avg;

}
double arrayaverage(int arr[],int size);
int main(){
	int array[5] = {1000, 2, 3, 17, 50};
	double avg;
	avg = arrayaverage(array,5);
	printf("Average of array %f\n",avg );
	return 0;
}