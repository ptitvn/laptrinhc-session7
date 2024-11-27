#include<stdio.h>
int main(){
    int array[5];
    int i;
    printf("Nhap 5 so nguyen\n");
    for(i = 0; i < 5; i++){
        printf("Nhap phan tu thu %d\n",i);
        scanf("%d",&array[i]);
    }
    for(i = 0; i < 5; i++){
        if(array[i] % 2 == 0){
            array[i] +=3;
        }else{
            array[i] += 2;
        }

    }
    printf("Mang sau khi thay doi la\n");
    for(i = 0; i < 5; i++){
        printf("%d\n",array[i]);
    }

    return 0;
}