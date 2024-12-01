#include<stdio.h>
int main(void){
    int arr[100];
    int length, num, index;
    printf("moi ban nhap vao so phan tu trong mang ");
    scanf("%d", &length);
    for(int i=0; i<length;i++){
        printf("moi ban nhap phan tu thu %d: ", i+1);
        scanf("%d", &num);
        arr[i]=num;
    }
    do{
        printf("moi ban nhap vi tri muon xoa ");
        scanf("%d", &index);
    }while(index >= length || index <0);
    if(index == length-1){
        printf("cac phan tu moi cua mang la:");
        for(int i=0; i<length-1; i++){
            printf("%d ", arr[i]);
        }
    }else if(index >=0 && index< length){
        for(int i=index; i<length; i++){
            arr[i]=arr[i+1];
        }
        printf("cac phan tu moi cua mang la:");
        for(int i=0; i<length-1; i++){
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    return 0;
}
