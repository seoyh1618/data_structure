#include <stdio.h>
#define MAX 10
int main(void){
	//Bubbel_Sorting 
	int i , j , temp; 
	int array[MAX]={10,50,30,40,60,100,90,80,20,70}; //Sorting �� ������ �迭 ����  
	
	for(i=0;i<MAX;i++){								 //array[j] ���� array[j+1] ���� ���Ͽ� ���� ū ���� �ڷ� ������ ����  
		for(j=0;j<MAX-(i+1);j++){
			if(array[j]>array[j+1]){
				temp = array[j];
				array[j]=array[j+1];
				array[j+1]=temp;	
			}		
		}
	}
	printf("After Sorting :");						//Sorting �� ����� �ϴ� �ڵ�  
	for(i=0;i<MAX;i++){
		printf(" %d ",array[i]);
	}
	
	return 0;
}
