#include <stdio.h>
#include <math.h>

// Hàm kiểm tra số chính phương
int isPerfectSquare(int num) {
    int sqrtNum = sqrt(num);
    return (sqrtNum * sqrtNum == num);
}

// Hàm đếm và in ra các số chính phương nhỏ hơn n
void countPerfectSquares(int n) {
    printf("Cac so chinh phuong nho hon %d:\n", n);

    for (int i = 1; i < n; i++) {
        if (isPerfectSquare(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n;

    printf("Nhap vao so nguyen duong n: ");
    scanf("%d", &n);

    // Gọi hàm đếm và in ra các số chính phương nhỏ hơn n
    countPerfectSquares(n);

    return 0;
}