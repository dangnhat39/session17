#include <stdio.h>  
#include <stdlib.h>  

void chucNang1() {  
    printf("Thuc hien chuc nang 1\n");  
}  

void chucNang2() {  
    printf("Thuc hien chuc nang 2\n");  
}  

int main() {  
    int choice;  

    do {  
        printf("\nMENU:\n");  
        printf("1. Chuc nang 1\n");  
        printf("2. Chuc nang 2\n");  
        printf("3. Thoat\n");  
        printf("Chon chuc nang: ");  
        scanf("%d", &choice);  

        switch (choice) {  
            case 1:  
                chucNang1();  
                break;  
            case 2:  
                chucNang2();  
                break;  
            case 3:  
                printf("Thoat.\n");  
                break;  
            default:  
                printf("Lua chon khong hop le. Vui long chon lai.\n");  
                break;  
        }  
    } while (choice != 3); // L?p l?i cho ð?n khi ch?n thoát  

    return 0;  
}
