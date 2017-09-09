#include <stdio.h>
#include <mem.h>


char addstudent() {
    char ten[30];
    char phone[20];
    char ngaysinh[30];
    getchar();
    printf("Nhap vao ten sinh vien:");
    scanf("%[^\n]s", ten);
    getcher();
    while (strlen(ten) < 4) {
        printf("Ten qua ngan, xin vui long nhap lai ten trong khoang 4-15 ky tu:");
        scanf("%[^\n]s", ten);
        getchar();
    }
    while (strlen(ten) > 15) {
        printf("Ten qua dai, xin vui long nhap lai ten trong khoang 4-15 ky tu:");
        scanf("%[^\n]s", ten);
        getchar();
    }
    printf("Nhap vao ngay thang nam sinh:");
    scanf("%[^\n]s", ngaysinh);
    getchar();
    printf("Nhap so dien thoai:");
    scanf("%[^\n]s", phone);
    getchar();
    printf("Thong tin sinh vien:");
    printf("\nTen: %s", ten);
    printf("\nNgay thang nam sinh: %s", ngaysinh);
    printf("\nPhone: %s\n\n", phone);
    printf("Bam enter de tro ve menu:");
    getchar();
}
void printmenu() {
    printf("-----Menu-----\n");
    printf("1. Them moi sinh vien\n");
    printf("\n2. Hien thi danh sach sinh vien");
    printf("\n3. Sua sinh vien");
    printf("\n4. Xoa sinh vien");
    printf("\n5. Thoat");
    printf("Nhap lua chon cua ban:");
}
int inputx() {
    int x;
    scanf("%d", &x);
    if (x != 1 && x != 2 && x != 3 && x !=4 && x != 5){
        printf("Ban da nhap lenh khong chinh xac, vui long nhap lai:");
        scanf("%d", &x);
    }
    return x;
}
int main() {
    int z;
    printmenu();
    z = inputx();
    while (z != 5) {
        switch (z) {
            case 1:
                addstudent();
                break;
            case 2: 
            case 3:
            case 4:
                
            default:
                printf("Chuc nang nay chua duoc hoan thien, vui long thu lai sau\n\n");
        }
        printmenu();
        z = inputx();
    }
    return 0;
}
