#include<stdio.h>
int main()
{
    int  a,b,c,d,e,Qty,Rate,TOTAL;


   printf("MENU CARD \nSelect what you want \n1.STARTER \n2.MAINCOURSE \n3.DRINKS \n4.DESERTS\n");
    scanf("%d",&a);
   switch(a)
  {

   case 1:



 printf("SELECT YOUR STARTER \n1.veg manchurian \n2.paneer chilli \n3.veg crispy \n4.paneer65\n");
 scanf("%d",&b);

    if(b==1)
        {printf("\nYou have selected veg manchurian.\n ENTER THE QUANTITY:");
        scanf("%d",&Qty);
        Rate=120;
        TOTAL=Qty*Rate;
        printf("\nTOTAL AMOUNT :%d",TOTAL);
       }
    if(b==2)
        {printf("\nYou have selected PANEER CHILLI.\n ENTER THE QUANTITY:");
        scanf("%d",&Qty);
        Rate=150;
        TOTAL=Qty*Rate;
        printf("\nTOTAL AMOUNT :%d",TOTAL);
       }
    if(b==3)
        {
        printf("\nYou have selected VEGCRISPY.\n ENTER THE QUANTITY:");
        scanf("%d",&Qty);
        Rate=130;
        TOTAL=Qty*Rate;
        printf("\nTOTAL AMOUNT :%d",TOTAL);
       }
       if(b==4)
        {printf("\nYou have selected PANEER65.\n ENTER THE QUANTITY:");
        scanf("%d",&Qty);
        Rate=180;
        TOTAL=Qty*Rate;
        printf("\nTOTAL AMOUNT :%d",TOTAL);
       }
  break;



   case 2:

        printf("SELECT YOUR MAINCOURSE \n1.PANEER HIMALAYA \n2.VEG TIRANGA \n3.VEG KOLHAPURI \n4.MUSHROOM CURRY\n");
       scanf("%d",&c);
        if(c==1)
        {printf("\nYou have selected PANEER HIMALAYA.\n ENTER THE QUANTITY:");
        scanf("%d",&Qty);
        Rate=240;
        TOTAL=Qty*Rate;
        printf("\nTOTAL AMOUNT :%d",TOTAL);
       }
       if(c==2)
        {printf("\nYou have selected VEG TIRANGA.\n ENTER THE QUANTITY:");
        scanf("%d",&Qty);
        Rate=260;
        TOTAL=Qty*Rate;
        printf("\nTOTAL AMOUNT :%d",TOTAL);
        }
        if(c==3)
        {printf("\nYou have selected VEG KOLHAPURI.\n ENTER THE QUANTITY:");
        scanf("%d",&Qty);
        Rate=220;
        TOTAL=Qty*Rate;
        printf("\nTOTAL AMOUNT :%d",TOTAL);}

        if(c==4)
        {printf("\nYou have selected MUSHROOM CURRY.\n ENTER THE QUANTITY:");
        scanf("%d",&Qty);
        Rate=290;
        TOTAL=Qty*Rate;
        printf("\nTOTAL AMOUNT :%d",TOTAL);}

       break;

      case 3:
      printf("SELECT YOUR DRINKS \n1.COLD COFFEE \n2.TEA \n3.HOTCOFFEE \n4.MINERAL WATER\n");
       scanf("%d",&d);
        if(d==1)
        {printf("\nYou have selected COLD COFFEE.\n ENTER THE QUANTITY:");
        scanf("%d",&Qty);
        Rate=40;
        TOTAL=Qty*Rate;
        printf("\nTOTAL AMOUNT :%d",TOTAL);
       }
       if(d==2)
        {printf("\nYou have selected TEA.\n ENTER THE QUANTITY:");
        scanf("%d",&Qty);
        Rate=20;
        TOTAL=Qty*Rate;
        printf("\nTOTAL AMOUNT :%d",TOTAL);
        }
        if(d==3)
        {printf("\nYou have selected HOT COFFEE.\n ENTER THE QUANTITY:");
        scanf("%d",&Qty);
        Rate=20;
        TOTAL=Qty*Rate;
        printf("\nTOTAL AMOUNT :%d",TOTAL);}

        if(d==4)
        {printf("\nYou have selected MINERAL WATER.\n ENTER THE QUANTITY:");
        scanf("%d",&Qty);
        Rate=20;
        TOTAL=Qty*Rate;
        printf("\nTOTAL AMOUNT :%d",TOTAL);}

       break;
       case 4:
      printf("SELECT YOUR DESERTS \n1.BROWNEY \n2.ICE CREAM \n3.WAFFELES \n4.PAAN\n");
       scanf("%d",&e);
        if(e==1)
        {printf("\nYou have selected BROWNEY.\n ENTER THE QUANTITY:");
        scanf("%d",&Qty);
        Rate=240;
        TOTAL=Qty*Rate;
        printf("\nTOTAL AMOUNT :%d",TOTAL);
       }
       if(e==2)
        {printf("\nYou have selected ICE CREAM.\n ENTER THE QUANTITY:");
        scanf("%d",&Qty);
        Rate=40;
        TOTAL=Qty*Rate;
        printf("\nTOTAL AMOUNT :%d",TOTAL);
        }
        if(e==3)
        {printf("\nYou have selected WAFFELES.\n ENTER THE QUANTITY:");
        scanf("%d",&Qty);
        Rate=170;
        TOTAL=Qty*Rate;
        printf("\nTOTAL AMOUNT :%d",TOTAL);}

        if(e==4)
        {printf("\nYou have selected PAAN.\n ENTER THE QUANTITY:");
        scanf("%d",&Qty);
        Rate=30;
        TOTAL=Qty*Rate;
        printf("\nTOTAL AMOUNT :%d",TOTAL);}

       break;
     }

return 0 ;}

