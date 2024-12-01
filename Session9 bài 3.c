#include <stdio.h>
int main(){
    int arr[100];  
    int number, post;
    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &number);
    printf("Nhap cac phan tu trong mang: \n");
    for (int i = 0; i < number; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Mang dau tien la: \n");
    for (int i = 0; i < number; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Nhap cho can xoa (1-%d): ", number);
    scanf("%d", &post);
    if (post < 1 || post > number) {
        printf("Nhap cho can xoa (1-%d): \n", number);
        return 1;
    }
    for (int i = post - 1; i < number - 1; i++) {
        arr[i] = arr[i + 1];  
    }
    number--;
    printf("Mang moi:\n");
    for (int i = 0; i < number; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

