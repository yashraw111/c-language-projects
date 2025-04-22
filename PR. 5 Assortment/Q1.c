#include<stdio.h>

int main() {
    int size;
    printf("Enter Array size: ");
    scanf("%d", &size);
    int a[size];
    for (int i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]); 
    }
    for (int i = 0; i < size; i++) {

        if(a[i]<0){
            printf(" %d", a[i]);
        }
    }
    return 0;
}
