#include <stdio.h>

int main() {
    int CP;
    printf("Enter the cost price :");
    scanf("%d",&CP);
     int SP;
     printf("Enter the selling price :");
     scanf("%d",&SP);
     if(CP<SP)
     printf("profit");
     
     if(CP>SP)
         printf("loss");
     if(CP==SP)
     printf("not loss,not profit");

    return 0;
}
