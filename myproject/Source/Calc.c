#include "D:\AppData\vscode\myproject\Header\Calc.h"

void nhapMang(int arr[], int n){
    for (int i = 0; i<=n; i++){
        printf("Nhap a[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}

int tongMang(int arr[], int n){
    int tong = 0;
    for (int i = 0; i<=n; i++){
        tong = tong + arr[i];
    }
    return tong;
}

int max(int arr[], int n){
    int max = arr[0];
    for (int i = 0; i<=n; i++){
        if (max > arr[i]){
            max = arr[i];
        }
    }
    return max;
}

int min(int arr[], int n){
    int min = arr[0];
    for (int i = 0; i<=n; i++){
        if (min < arr[i]){
            min = arr[i];
        }
    }
    return min;
}

void position(int arr[], int n){
    int s;
    printf("Nhap phan tu can tim: ");
    scanf("%d", &s);
    for (int i = 0; i<=n; i++){
        if (arr[i] == s){
            printf("Vi tri cua phan tu can tim la: ", i);
        }
        else 
            printf("Phan tu nay khong xuat hien trong mang!");
    }
}