#include <stdio.h>
#include <stdlib.h>
int quicksort(int*a, int len){
    quicksort_r(a,0,len-1);
    return 0;
}
int quicksort_r(int* a,int start,int end){
    if (start>=end) {
        return 0;
    }
    int pivot=a[end];
    int swp;
    //setam un pointer pentru a diviza vectorul
    //o parte este mai mica decat picotul iar cealalta mai mare
    int pointer=start;
    int i;
    for (i=start; i<end; i++) {
        if (a[i]<pivot) {
            if (pointer!=i) {
                //schimba a[i] cu a[pointer]
                //a[pointer] in urma mai mare decat pivotul
                swp=a[i];
                a[i]=a[pointer];
                a[pointer]=swp;
            }
            pointer++;
        }
    }
    //chimba pivotul la pozitia initiala
    swp=a[end];
    a[end]=a[pointer];
    a[pointer]=swp;
    quicksort_r(a,start,pointer-1);
    quicksort_r(a,pointer+1,end);
    return 0;
}

int main(){
    int a[10]={2,1,4,7,5,8,9,20,0,3};
    int len=10;
    quicksort(a,len);
    int i;
    for (i=0; i<len; i++) {
        printf("%d\t",a[i]);
    }
    printf("\n");
    return 0;
}
