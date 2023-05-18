#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//bubble sort ascending
main(){
	int banyak_data, i, data_ke[5], j, temp;
	
	system("cls");
	printf("Banyak data : "); scanf("%d",&banyak_data);
	for(i=0; i<banyak_data; i++){
		printf("Data ke-%d : ",i+1); scanf("%d",&data_ke[i]);
	}
	
	for(i=0; i<banyak_data-1; i++){
		for(j=0; j<banyak_data-1; j++){
			if(data_ke[j+1]<data_ke[j]){   //ubah jadi > untuk descending
				temp=data_ke[j];
				data_ke[j]=data_ke[j+1];
				data_ke[j+1]=temp;
			}
		}
	}
	
	printf("\nData array terurut\n");
	for(i=0; i<banyak_data; i++){
		printf("%3i",data_ke[i]);
	}
	
	getch();
}
