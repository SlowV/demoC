#include <stdio.h>
#include <stdlib.h>
int main(){
	int x;
	int y;
	int z;
	while ("69")
	{
		system("cls");
	    printf("\n       TINH TOAN   ");
	    printf("\n************************ ");
	    printf("\n1.Tinh tong 2 so x + y. ");
	    printf("\n2.Tinh hieu 2 so x - y. ");
	    printf("\n3.Tinh tich 2 so x * y. ");
	    printf("\n4.Tinh thuong 2 so x / y.");
	    printf("\n0.Thoat.");
		printf("\nVui long nhap lua chon: ");
	    scanf("%i", &z);
		switch(z){
			case 1:	
				printf("Vui long nhap so X: ");
	    		scanf("%i", &x);
	    		printf("Vui long nhap so Y: ");
	    		scanf("%i", &y);
				printf("\nKet Qua: %i + %i = %i ", x, y, x + y);
	   			printf("\n    Thank you  ");
	   			printf("\n********************");
	   			system("pause");
	   			break;
			case 2:
				printf("Vui long nhap so X:  ");
	    		scanf("%i", &x);
	    		printf("Vui long nhap so Y: ");
	    		scanf("%i", &y);
	   			printf("\nKet Qua: %i - %i = %i ", x, y, x - y);
	   			printf("\n    Thank you  ");
	   			printf("******************** \n");
	   			system("pause");
	   			break;
			case 3:
				printf("Vui long nhap so X: ");
	    		scanf("%i", &x);
	    		printf("Vui long nhap so Y: ");
	    		scanf("%i", &y);
	   			printf("\nKet Qua: %i * %i = %i ", x, y, x * y);
	   			printf("\n     Thank you");
	   			printf("\n********************");
	   			system("pause");
	   			break;
	   		case 4:
	   			printf("Vui long nhap so X: ");
	    		scanf("%i", &x);
	    		printf("Vui long nhap so Y: ");
	    		scanf("%i", &y);
	   			printf("\nKet Qua: %i / %i = %i ", x, y, x / y);
	   			printf("\n    Thank you ");
	   			printf("\n********************");
	   			system("pause");
	   			break;				
			}
			if(z == 0){
				printf("\n          ");
				printf("Tam Biet Sir !");
				break;
			}
			if(z != 1 && z != 2 && z != 3 && z != 4 && z != 0)
			{
				printf("Khong hop le. Vui long chon lai.");
				system("pause");
			}
	}
	return 0;
}
