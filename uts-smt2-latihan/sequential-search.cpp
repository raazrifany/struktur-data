#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//searching
main(){
	int i, banyak_data, data_ke[20], cari, ketemu=0, banyak_ketemu=0,letak_data[20];
	system("cls");
	printf("Banyak data : "); scanf("%d",&banyak_data);
	for(i=0; i<banyak_data; i++){
		printf("data ke-%d : ",i+1); scanf("%d",&data_ke[i]);
	}
	
	printf("Data yang dicari : "); scanf("%d",&cari);
	
	
	for(i=0; i<banyak_data; i++){
		if(cari==data_ke[i]){
			ketemu=1;
			letak_data[banyak_ketemu] = i+1;
			banyak_ketemu += 1;
		}
	}
	
	if(ketemu==1){
		printf("\nData Ditemukan");
		printf("\nData %d yang dicari ada %d buah",cari,banyak_ketemu);
		printf("\nada di index : ",cari,banyak_ketemu);
		for(i=0; i<banyak_ketemu; i++){
			printf(" %d",letak_data[i]);
		}
	}else{
		printf("\nData tidak ditemukan");
	}
	
	getch();
}
