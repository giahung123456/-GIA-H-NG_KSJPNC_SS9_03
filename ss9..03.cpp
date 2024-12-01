#include <stdio.h>

int main() {
    int arr[100];  
    int n, i, pos;

    
    printf("Nhap so phan tu muon nhap (toi da 100): ");
    scanf("%d", &n);

  
    if (n > 100) {
        printf("So phan tu vuot qua gioi han 100!\n");
        return 1;
    }

  
    printf("Nhap gia tri cho %d phan tu:\n", n);
    for (i = 0; i < n; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

 
    printf("Nhap vi tri can xoa (0 den %d): ", n - 1);
    scanf("%d", &pos);

  
    if (pos < 0 || pos >= n) {
        printf("Vi tri xoa khong hop le!\n");
        return 1;
    }

   
    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];  
    }

    
    n--;

  
    printf("Mang sau khi xoa: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}