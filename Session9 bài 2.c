#include <stdio.h>
int main() {
    int arr[5]={1,2,0,4,5};  
    int post, newNumber;
    printf("Mang dau tien la: \n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Nhap cho can sua (1-5): ");
    scanf("%d", &post);
    if (post < 1 || post > 5) {
        printf("Nhap cho can sua (1-5): \n");
        return 1;
    }
    printf("Nhap phan tu moi: ");
    scanf("%d", &newNumber);
    arr[post - 1] = newNumber;
    printf("Mang moi:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

