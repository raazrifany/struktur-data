#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main()
{
	int ar[10] = {10,9,8,7,6,5,4,3,2,1}; //descending
	int i, tar, awal=0, akhir=10, tengah;
	
	system("cls");
	printf("Datanya adalah = ");
	for(i=0; i<10; i++){
		printf("%d ",ar[i]);
	}
	
	printf("\nMasukkan data yang dicari : "); scanf("%d",&tar);
	
	while(awal <= akhir){
		tengah = (awal + akhir)/2;
		if(tar > ar[tengah]){
			akhir = tengah - 1;
		}else if(tar < ar[tengah]){
			awal = tengah + 1;
		}else{
			awal = akhir + 1;
		}
	}
	
	if(tar == ar[tengah]){
		printf("Data ditemukan pada index ke-%d",tengah);
	}else{
		printf("Data tidak ditemukan... ");
	}
	
	getch();
	return 0;
}
