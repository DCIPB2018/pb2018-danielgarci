#include<stdio.h>
#include<stdlib.h>


int main()

{

	int num;
	int i;
	int *ptr;
	int sum=0;

	ptr=(int)malloc(num*sizeof(int));/*reserva de memoria*/
	printf("introduce el número de elementos\n");
	scanf("%d",&num);
	if(ptr==NULL)
		{
			printf("Erros, memoria no reservada\n");	
			exit(0);
		
		}	
	printf("Introduce los elementos del arreglo\n");
	for(i=0;i<num;i++)
		{

			scanf("%d",ptr+i);
			sum+=*(ptr+i);


		}
	printf("sum=%d\n",sum);
	free(ptr);
	return 0;



}

