#include <stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include "D:\AppData\vscode\myproject\Header\Calc.h"
#include "D:\AppData\vscode\myproject\Header\convert.h"
#include "D:\AppData\vscode\myproject\Header\m_string.h"
#define MAX 1000

int main(){
    int arr[MAX];
    int arr1[5];
    int arr2[5];
    int size1; int size2;
    int n;
    nhapMang(arr, n);
    tongMang(arr,  n);
    max( arr, n);
    min(arr, n);
    position( arr,  n);
    Hex2Dec(100);
    printf("%d\n",Decimal2Binary(15));
    compare(arr1[5],size1,arr2[5],size2);
    return 0;
}