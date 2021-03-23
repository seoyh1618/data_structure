#include <stdio.h>
#define MAX 10 
 int main(void){
 	
	int array[MAX]={ 1, 7, 5,10, 4, 3, 2, 6, 9, 8};	//Sorting 을 진행할 배열 선언
	int i , j , temp;
	
	for (i=0;i<9;i++){								
		j = i;			
		while(j >= 0 && array[j] > array[j+1]){		//array[j] 값과 array[j+1] 값을 비교하여 array[j] 값이 크면  
				temp = array[j];					//교환을 진행 하고 크지 않다면 교환을 진행 하지 않는다. 
				array[j] = array[j+1];
				array[j+1] = temp;
				j--;
		}
	}
	for(i = 0 ; i < 10 ; i ++){
		printf("%d ",array[i]);
	}
	
 return 0;

}
