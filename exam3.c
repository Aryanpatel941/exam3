#include<stdio.h>
main(){
	//que 1 
  /* int i,j;
	for(i=41;i<=45;i++){
		for(j=41;j<=i;j++){
			printf("%d",j);
		}
		printf("\n");
	}*/
	
	//que 2
/*	int i,j;
    int num=11;
	for(i=1;i<5;i++){
		for(j=1;j<=i;j++){
		printf("%d",num);
		num++;
		}
		printf("\n");
	}*/
	
	// que 3
/*	int i,j,k;
	for(i=5;i>=1;i--){
		for(k=5;k>=5-i;k--){
			printf(" ");
		}
		for(j=i;j<=5;j++){
			printf("%d",j);
		}
		printf("\n");
	}*/
	
	// que 4
/*	int i,j,k;
	for(i=5;i>=1;i--){
		for(k=0;k<=5-i;k++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
		    if(j%2==0){
				printf("0");
			}
			else{
				printf("1");
			}
		}
		printf("\n");
	}*/
	
	//que 5
/*	int i,j,k;
	for(i=5;i>=1;i--){
		for(k=5;k>=5-i;k--){
			printf(" ");
		}
		
		for(j=i;j<=5;j++){
			printf("%d",j);
			
		}
		for(j=4;j>=i;j--){
				printf("%d",j);
			}
		printf("\n");
	}*/
	
	//que 6
/*	int i,j,k;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%d ",j);
		}
		for(k=1;k>=i-3;k--){
			printf("    ");
		}
		for(j=i;j>=1;j--){
			printf("%d ",j);
		}
		printf("\n");
	}*/
	
	// que 7
	int i,j;
	for(i=1;i<=5;i++){
		if(i==1||i==3){
			printf("* * * * *\n");
		}
		else if (i==2){
			printf("*       *\n");
	}
		else{
			printf("*\n");
		}
		
   }
	
	
	
	
}

