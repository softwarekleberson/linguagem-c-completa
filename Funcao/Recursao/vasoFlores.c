#include<stdio.h>

int vaso(int n){
    
    if (n == 0){
        return 0;
    }
    
    return vaso(n - 1);
}

int main(){
    int flores = 6;
    printf("%d",vaso(flores));
}