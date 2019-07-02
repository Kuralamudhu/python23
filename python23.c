#include <stdio.h>

int main(void) {
        int o,y,u,p=0,h,k;
        scanf("%d %d",&h,&k);
        for(i=h+1;i<k;,i++){
        o=y;
        p=0;
        while(o>0){
                u=o%10;
                p=p+(u*u*u);
                o=o/10;
        }
        if(y==p)
        printf("%d" ,y);}
        return 0;
}
             
