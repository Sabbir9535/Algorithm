#include<stdio.h>
#include<math.h>
int binaryToDecimal(int binary){
    if(binary == 0){
        return 0;
    }
    else{
        return (binary%10) + 2 * binaryToDecimal(binary/10);
    }
}
int main(){
    int binary;
    scanf("%d",&binary);
     int decimal = binaryToDecimal(binary);
     printf("%d \n", decimal);
     return 0;
}
