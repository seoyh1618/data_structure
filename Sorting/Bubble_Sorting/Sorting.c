#include <stdio.h>
#define MAX 10
int main(void){
	//Bubbel_Sorting 
	int i , j , temp; 
	int array[MAX]={10,50,30,40,60,100,90,80,20,70}; //Sorting 을 진행할 배열 선언  
	
	for(i=0;i<MAX;i++){								 //array[j] 값과 array[j+1] 값을 비교하여 가장 큰 값을 뒤로 보내며 정렬  
		for(j=0;j<MAX-(i+1);j++){
			if(array[j]>array[j+1]){
				temp = array[j];
				array[j]=array[j+1];
				array[j+1]=temp;	
			}		
		}
	}
	printf("After Sorting :");						//Sorting 후 출력을 하는 코드  
	for(i=0;i<MAX;i++){
		printf(" %d ",array[i]);
	}
	
	return 0;
}
