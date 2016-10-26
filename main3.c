#include <stdio.h>
#include <stdlib.h>
#define bn 9

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[10];
  srand(time(NULL));
  int i,j,t,f,tmp,nn,taihi;
  
  for(i=0;i<=bn;i++){
     f=0;
     tmp=rand()%10+1;
     for(j=0;j<=i;j++){
     if(tmp==a[j]){
     f=1;
     break;
     }
     }
     if(f==0)
     a[i]=tmp;
     else
i--;
  }
  
  for(i=0;i<=bn;i++)
    printf("a[%d]= %d \n",i+1,a[i]);
  printf("\nAfter--------------------\n");
  //±Æ§Ç
  for(i=0;i<=bn;i++){
    t=-1;
    for(j=bn;j>=i;j--){
     if(t<a[j]){
     t=a[j];
     nn=j;
     }
    }
    taihi=a[nn];
    a[nn]=a[i];
    a[i]=taihi;
    
  }
  for(i=0;i<=bn;i++)
    printf("a[%d]= %d \n",i+1,a[i]);
	
	return 0;
}
