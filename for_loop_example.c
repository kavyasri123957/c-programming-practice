#include<stdio.h>
int main()
{
    int battery;
    for(battery=100;battery>=20;battery--){
        printf("battery %d percentage left\n",battery);

    }
    printf("please charge the phone");
}