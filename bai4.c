#include<stdio.h>
int main(void){
    int choose, num[100];
    int number, length=0, flag=0,number3, number4, number5, index3, index4, index5;
    printf("MENU \n 1. Nhap vao mang \n 2. Hien thi phan tu \n 3. Them phan tu \n 4. Sua phan tu \n 5. Xoa phan tu \n 6. Thoat \n");
    while(flag!=6){
        printf(" Lua chon cua ban : ");
        scanf("%d", &choose);
        switch(choose){
            case 1:
                printf(" moi ban nhap so luong phan tu trong mang: ");
                scanf("%d", &length);
                flag = 1;
                for(int i=0; i< length; i++){
                    printf(" Moi ban nhap phan tu thu %d vao mang: ", i+1);
                    scanf("%d", &number);
                    num[i]= number;
                }
                break;
            case 2:
                if(flag==1){
                    printf(" cac phan tu trong mang la: ");
                    for(int i=0; i< length; i++){
                        printf(" %d", num[i]);
                    }
                    printf("\n");
                }else{
                    printf(" ban chua nhap phan tu vao mang, moi ban nhap lai \n");
                }
                break;
            case 3:
                if(flag==1){
                    printf(" moi ban nhap phan tu muon them: ");
                    scanf("%d", &number3);
                    printf(" moi ban nhap vi tri muon them, neu vi tri lon hon chieu dai mang se duoc them vao cuoi mang: ");
                    scanf("%d", &index3);
                    if(index3>=length){
                        num[length]= number3;
                        length++;
                        printf("mang sau khi them phan tu %d vao vi tri %d la: ", number3, index3);
                        for(int i=0; i<length; i++){
                            printf("%d ", num[i]);
                        }
                    }else if(index3 < length && index3 >=0){
                        for(int i= length; i> index3; i--){
                            num[i]=num[i-1];
                        }
                        num[index3]= number3;
                        length++;
                        printf("mang sau khi them phan tu %d vao vi tri %d la: ", number3, index3);
                        for(int i=0; i<length; i++){
                            printf("%d ", num[i]);
                        }
                    }else{
                        printf("vi tri ban nhap khong hop le");
                    }
                    
                    printf("\n");
                }else{
                    printf(" ban chua nhap phan tu vao mang, moi ban nhap lai \n");
                }
                
                break;
            case 4:
                if(flag==1){
                    printf(" moi ban nhap phan tu muon sua: ");
                    scanf("%d", &number4);
                    printf(" moi ban nhap vi tri muon sua: ");
                    scanf("%d", &index4);
                    if(index4 > length || index4 < 0){
                        printf(" vi tri %d khong co phan tu de sua \n ", index4);
                    }else{
                        num[index4]=number4;
                    }
                }else{
                    printf(" ban chua nhap phan tu vao mang, moi ban nhap lai \n");
                }
                
                break;
            case 5:
                if(flag==1){
                    do{
                        printf("moi ban nhap vi tri muon xoa: ");
                        scanf("%d", &index5);
                        number5 = num[index5];
                    }while( index5>= length);
                    for(int i= index5; i<length; i++){
                        num[i]=num[i+1];
                    }
                    length--;
                    printf("mang sau khi xoa phan tu %d o vi tri %d la: ", number5, index5);
                    for(int i=0; i < length; i++){
                        printf("%d ", num[i]);
                    }
                    printf("\n");
                }else{
                    printf(" ban chua nhap phan tu vao mang, moi ban nhap lai \n");
                }
                break;
            case 6:
                flag = 6;
                break;
            default:
                printf("lua chon khong co trong MENU, moi ban chon lai ");
        }
    }
    return 0;
}
