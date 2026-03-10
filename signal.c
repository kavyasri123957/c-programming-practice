#include<stdio.h>
int main()
{
    char signals;
    printf("enter the signals(1:green,2:yello,3:red)");
    scanf("%d",&signals);
    if (signals==1){
        printf("go");
    }
    else if (signals==2){
        printf("wait and go");
    }
    else if(signals==3){
        printf("stop");
    }
else{
    printf("nothing");
}
return 0;
}