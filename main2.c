#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	
    /*unsigned seed;
    seed = (unsigned)time(NULL); // ���o�ɶ��ǦC*/
    srand(time(NULL)); // �H�ɶ��ǦC��üƺؤl
    for(i=0; i<10; i++){
    	printf("%d ", rand()%100+1);
	}
	
        
    getchar();
	
	return 0;
}
