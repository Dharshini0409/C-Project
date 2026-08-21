#include <stdio.h>
 int main() {
    int ch,qty,amt=0;
    printf("************DHARSHU'S RESTAURANT MENU************");
    printf("\n 1) chicken biryani 65 \n 2) chicken fry \n3) Grilled chicken\n 4)mutton biriyani \n 5) mutton chukka\n 6) fish fry\n 7)prawn masala \n 8) chicken noodles");
    printf("\nEnter your choice:");
    scanf("%d",&ch);
    switch(ch){
        case 1:
         printf("Enter quantity:");
         scanf("%d",&qty);
         amt=qty*180;
         break;
        case 2:
         printf("Enter quantity:");
         scanf("%d",&qty);
         amt=qty*150;
         break;
        case 3:
         printf("Enter quantity:");
         scanf("%d",&qty);
         amt=qty*400;
         break;
        case 4:
         printf("Enter quantity:");
         scanf("%d",&qty);
         amt=qty*350;
         break;
        case 5:
         printf("Enter quantity:");
         scanf("%d",&qty);
         amt=qty*250;
         break;
        case 6:
         printf("Enter quantity:");
         scanf("%d",&qty);
         amt=qty*200;
         break;
        case 7:
         printf("Enter quantity:");
         scanf("%d",&qty);
         amt=qty*140;
         break;
        case 8:
         printf("Enter quantity:");
         scanf("%d",&qty);
         amt=qty*120;
         break;
        default:
         printf("Invalid input");
         break;
    }

}
