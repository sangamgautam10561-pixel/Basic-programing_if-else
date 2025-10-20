#include <stdio.h>

int main() {
    int l;
    printf("Enter the length :");
    scanf("%d",&l);
     int b;
     printf("Enter the breathe :");
     scanf("%d",&b);
     int a=l*b;
     int p=2*(l+b);
     
     if(a>p){
     
     printf("Area is greater then perimeter");
     }     
     if(a<p){
         printf("Area is not greater then perimeter");
     }
     if(a==p){
     printf("Both are equal");
     }
    return 0;
}
