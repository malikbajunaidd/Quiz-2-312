#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int subset(int a[], int k, int v, int n){
    if(v == 0 && k == 0){
        return 1;
    }
    if(v != 0 && k == 0){
        return 0;
    }
    if(n == 0){
        return 0;
    }
    int sum1 = 0;
    if(v >= a[0]){
        sum1 = subset(a + 1, k - 1, v - a[0], n - 1);
    }
    int sum2 = subset(a + 1 , k, v, n - 1);
    return sum1 + sum2 > 0;
}


int main(){
    int arr[] = {4, 5, 6, 13};
    int k = 1;
    int v = 19;
    int n = 4;
    if(subset(arr, k, v, n)){
        return 1; //true
    }
    return 0; //false
}








