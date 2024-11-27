#include<stdio.h>
int main(){
    int array[5];
    int max, min;
    int i;
    printf("Nhap 5 so nguyen\n");
    for(i = 0; i < 5; i++){
        printf("Nhap phan tu thu %d\n",i);
        scanf("%d",&array[i]);
    }
    max = array[0];
    min = array[0];
    for(i = 1; i < 5; i++){
        if(array[i] > max){
            max = array[i];
        }
        if(array[i] < min){
            min = array[i];
        }
    }
    printf("Phan tu lon nhat la %d\n",max);
    printf("Phan tu nho nhat la %d\n",min);

    return 0;
}