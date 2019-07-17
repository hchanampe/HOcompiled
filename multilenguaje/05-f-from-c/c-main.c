
#include <stdio.h>

#define NUM 200

extern void sum_abs_(int *a,int *b,int *s);

int main(int argc, char **argv)
{
    int data[NUM], num, i;
    int s;

    num = NUM;
    for (i=0; i < num; i++) {
        data[i] = i - 100 + 1;  /* NOTE: difference in array numbering */  
    }

    //printf("sum=%d\n", sum_abs_(data, &num));
	sum_abs_(data, &num,&s);
	printf("sum=%d\n",s);
    return 0;
}
