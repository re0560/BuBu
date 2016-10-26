#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	
    /*unsigned seed;
    seed = (unsigned)time(NULL); // 取得時間序列*/
    srand(time(NULL)); // 以時間序列當亂數種子
    for(i=0; i<10; i++){
    	printf("%d ", rand()%100+1);
	}
	
        
    getchar();
	
	return 0;
}
