#include <stdio.h>
#define MAX 10 
 int main(void){
 	
	int array[MAX]={ 1, 7, 5,10, 4, 3, 2, 6, 9, 8};	//Sorting �� ������ �迭 ����
	int i , j , temp;
	
	for (i=0;i<9;i++){								
		j = i;			
		while(j >= 0 && array[j] > array[j+1]){		//array[j] ���� array[j+1] ���� ���Ͽ� array[j] ���� ũ��  
				temp = array[j];					//��ȯ�� ���� �ϰ� ũ�� �ʴٸ� ��ȯ�� ���� ���� �ʴ´�. 
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
