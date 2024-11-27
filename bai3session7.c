#include<stdio.h>

int main(){
    int array[5];
    int flag = 0;
    int i;
    printf("Nhap 5 so nguyen\n");
    for(i = 0; i < 5; i++){
        printf("Nhap phan tu thu %d\n",i);
        scanf("%d",&array[i]);
    }
    printf("Cac so chan trong mang la\n");
    for(i = 0; i < 5; i++){
        if(array[i] % 2 == 0){
            printf("%d\n",array[i]);
            flag = 1;
        }

    }if(flag == 0){
        printf("mang khong chua so chan nao\n");

    }else{
        printf("\n");
    }

    return 0;
}