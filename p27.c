// Codeforce s1 pt

#include<stdio.h>
 
int main(){
 
int X,Y,Z;
 
scanf("%d%d%d",&X,&Y,&Z);
 
if(X<=Y && X<=Z){
    printf("%d\n",X);
 
    if(Y<=Z){
       printf("%d\n",Y); 
       printf("%d\n",Z);
    }
    else{
        printf("%d\n",Z);
        printf("%d\n",Y);
    }
}
 
else if(Y<=X && Y<=Z){
    printf("%d\n",Y);
 
    if(X<=Z){
       printf("%d\n",X); 
       printf("%d\n",Z);
    }
    else{
        printf("%d\n",Z);
        printf("%d\n",X);
    }
}
 
else{
    printf("%d\n",Z);
 
    if(Y<=X){
       printf("%d\n",Y); 
       printf("%d\n",X);
    }
    else{
        printf("%d\n",X);
        printf("%d\n",Y);
    }
}
 
        printf("\n");
 
        printf("%d\n",X);
        printf("%d\n",Y);
        printf("%d\n",Z);
 
    return 0;
}