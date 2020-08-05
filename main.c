#include<stdio.h>
#include<stdlib.h>
#define gcx getchar_unlocked

typedef long int lint;

static inline lint getValue(){
    lint n = 0;
    int c = gcx();
    while(c<'0' || c>'9') c = gcx();
    while(c>='0' && c<='9'){
        n = n*10 + c-'0';
        c = gcx();
    }
    return n;
}
int main(){
    lint num = getValue();
    lint k = getValue();
    int i,count = 0;
    for(i=num;i>=1;i--){
        if(num%i==0){
            count++;
            if(count==k){
                printf("%d",i);
                return 0;
            }
        }
    }
    printf("1");
    
}