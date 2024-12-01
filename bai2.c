#include<stdio.h>
int main(void){
    int arr[5]={1,2,3,4,5};
    int a, b;
    printf("cac phan tu ban dau cua mang la: ");
    for(int i=0; i<sizeof(arr)/sizeof(int); i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    do{
        printf("moi ban nhap vao vi tri can sua: ");
        scanf("%d", &a);
    }while(a>4 || a<=0);
    printf("moi ban nhap gia tri moi: ");
    scanf("%d", &b);
    printf("cac phan tu moi cua mang la: ");
    arr[a-1]=b;
    for(int i=0; i<sizeof(arr)/sizeof(int); i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
