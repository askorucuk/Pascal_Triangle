#include <stdio.h>
#include <stdlib.h>


int factorielfor_combination(int x){

 while(x>0){
 	int a;
 	int factor[x];
 	int i;
 	for(i = 0 ; i<x ; i++){
 		a = (x-i);
   		factor[i] = a ;
 	}
 	int c;
 	int g = 1 ;
 	int yeter;
 	for(c = 0 ; c<x ; c++){
		int d = factor[c];
   		 g = d*g;
		yeter = g ;
 	}  
 	return yeter;
 }
  return 1;
}

void combinationfor_pascal(int deger){
   int i;
   for(i = 0 ; i < deger+1 ; i++){
   	
    int all_comb = (factorielfor_combination(deger))/(factorielfor_combination(deger-i)*factorielfor_combination(i));
    
    printf("%d ",all_comb);
   
   }	
  	
}


int main(int argc, char *argv[]) {
	
	int satir;
	
    printf("Pascal ucgeni icin satir sayisi giriniz : ");
    scanf("%d", &satir);   
    
    int j ;
    for(j = 0 ; j<satir ; j++){
    	
       combinationfor_pascal(j);
	   printf("\n");
	   
    }  
	printf("\n");
	printf("AHMET SAID KORUCUK - 05170000070");
	return 0;
}
