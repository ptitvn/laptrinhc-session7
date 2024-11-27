#include<stdio.h>
int main(){
    int arr[5];
    printf("Nhap 5 so nguyen\n");
    for(int i = 0; i < 5; i++){
        printf("Nhap phan tu thu %d\n",i + 1);
        scanf("%d",&arr[i]);

    }
    printf("Mang vua nhap\n");
    for(int i = 0;i < 5; i++){
        printf("%d",arr[i]);
    }
    printf("\n");



    return 0;
}