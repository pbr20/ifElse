//Codeforce s1 pu

#include<stdio.h>
 
int main(){
 
float N;
int A;
float B;
 
scanf("%f",&N);
 
A = (int) N;
B = N - A;
 
if((N/A) == 1){
printf("int %d",A);
}
 
else{
    printf("float %d %.3f",A,B);
}
 
    return 0;
}