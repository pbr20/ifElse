#include<stdio.h>

int main(){

int n,t,x=1,b=0;

scanf("%d",&n);

t=n;

for(int i=0; ;i++){
    t%=2;
    n/=2;
    b = b + (t*x);
    x*=10;
    t=n;

    if(n == 0){
        break;
    }
}


printf("%d\n",b);


return 0;

}
