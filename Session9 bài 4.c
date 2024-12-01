#include <stdio.h>
int main() {
    int arr[100]; 
    int n = 0;     
    int choice, post, number;
    do {
        printf("\nMENU\n");
        printf("1.Nhap vao mang\n");
        printf("2.Hien thi mang\n");
        printf("3.Them phan tu\n");
        printf("4.Sua phan tu\n");
        printf("5.Xoa phan tu\n");
        printf("6.Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Nhap so phan tu trong mang: ");
                scanf("%d", &n);
                if (n<1 || n>100){
                    printf("Nhap so phan tu trong mang: \n");
                }else{
                    printf("Nhap cac phan tu trong mang:\n");
                    for (int i = 0; i < n; i++) {
                        printf("Nhap phan tu thu %d: ", i + 1);
                        scanf("%d", &arr[i]);
                    }
                }
                break;
            case 2:               
                if (n == 0) {
                    printf("Mang khong co phan tu\n");
                }else{
                    printf("Mang: \n");
                    for (int i=0;i<n;i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;
            case 3:           
                if (n < 100) {
                    printf("Nhap phan tu muon them trong mang: ");
                    scanf("%d", &number);
                    printf("Nhap cho muon them (1-%d): ", n + 1);
                    scanf("%d", &post);
                    if (post < 1 || post>n + 1){
                        printf("Vi tri không hop le\n");
                    }else{
                        for (int i=n; i>=post;i--) {
                            arr[i] = arr[i-1];  
                        }
                        arr[post-1] = number;
                        n++;
                    }
                }else{
                    printf("Mang khong the them phan tu\n");
                }
                break;
            case 4:              
                if (n == 0) {
                    printf("Mang khong co phan tu nao\n");
                }else{
                    printf("Nhap cho muon sua (1-%d): ", n);
                    scanf("%d", &post);
                    if (post<1 || post>n) {
                        printf("Vi tri khong hop le\n");
                    }else{
                        printf("Nhap phan muon thay: ");
                        scanf("%d", &number);
                        arr[post-1] = number;  
                    }
                }
                break;
            case 5:           
                if (n == 0) {
                    printf("Mang khong co phan tu\n");
                }else{
                    printf("Nhap cho muon xoa(1-%d): ", n);
                    scanf("%d", &post);
                    if (post < 1 || post > n) {
                        printf("Vi tri khong hop le\n");
                    }else{
                        for (int i = post-1;i<n- 1;i++) {
                            arr[i] = arr[i + 1];  
                        }
                        n--; 
                    }
                }
                break;
            case 6:
                printf("Thoat\n");
                break;

            default:
                printf("Lua chon khong hop le\n");
        }
    } while (choice!= 6);  
    return 0;
}

