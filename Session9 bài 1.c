#include <stdio.h>
int main() {
    int arr[100];  
    int number, post, val;
    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &number);
    printf("Nhap cac phan tu trong mang: \n");
    for (int i = 0; i < number; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Nhap phan tu muon them trong mang: ");
    scanf("%d", &val);
    printf("Nhap vi tri muon them phan tu (1-%d): ", number + 1);
    scanf("%d", &post);
    if (post < 1 || post > number + 1) {
        printf("Nhap vi tri muon them phan tu: ");
        return 1;
    }
    for (int i = number; i >= post; i--) {
        arr[i] = arr[i - 1];
    }
    arr[post - 1] = val;  
    number++;
    printf("Mang sau khi them phen tu la: \n");
    for (int i = 0; i < number; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

