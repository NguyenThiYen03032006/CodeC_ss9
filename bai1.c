#include<stdio.h>
int main(void){
    int arr[100];
    int a, b, c, index;
    printf("so phan tu ban muon them la: ");
    scanf("%d", &a);
    for(int i=0; i<a; i++){
        printf("moi ban nhap vao phan tu nhu %d :", i+1);
        scanf("%d", &b);
        arr[i]=b;
    }
    printf("moi ban nhap gia tri ban muon them vao: ");
    scanf("%d", &c);
    printf("moi ban nhap vao vi tri index muon them vao: ");
    scanf("%d", &index);
    if(index >= a){
        arr[a]=c;
        a++;
        for(int i=0; i< a; i++){
            printf("%d ", arr[i]);
        }
    }else if(index >=0 && index < a){
        for(int i=a; i>index; i--){
            arr[i]=arr[i-1];
        }
        arr[index]=c;
        a++;
        for(int i=0; i< a; i++){
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
