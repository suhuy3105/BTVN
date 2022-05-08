#include "D:\AppData\vscode\myproject\Header\m_string.h"

int arr1[5] = {1,2,3,4,5};
int size1 = sizeof arr1 / sizeof(int);
int arr2[5] = {2,4,4,5,6};
int size2 = sizeof arr2 / sizeof(int);

int compare(int arr1[5], int size1, int arr2[5], int size2){
    short flag = 1;
    if (size1 != size2)
        flag = 0;
    else{
        for (int i = 0; i<=5; i++){
            if (arr1[i] != arr2[i])
            {
                flag = 0;
            }
            else 
                flag = 1;
        }
    }
    if (flag == 1){
        printf("2 mang giong nhau!");
    }
    else printf("2 mang khac nhau!");
}