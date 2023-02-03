#include <stdio.h>
#include <stdlib.h>

void print_array(int a[], int sz);

int main(int argc, char** argv)
{
    int sz = 20;
int a = 1;
int b = 2;

    int* dyn = (int*)malloc(sizeof(int));
    int* dyn_arr = (int*)malloc(sizeof(int) * sz);

    *dyn = 25;
    printf("%d\n", *dyn);

    print_array(dyn_arr, sz);

    free(dyn);
    free(dyn_arr);

    return 0;
}

void print_array(int a[], int sz)
{
    int i;
    for (i = 0; i < sz; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void somma (int a[], int sz){
int s=0;
	for(int i=0; i<sz; i++){
		s = s+a[i];}

		printf("%d", s);
}