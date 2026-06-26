#include<stdio.h>
int main(){
    char op,st,mm,dess; //  switch case operators
    int ck=0,pr=0,ps=0,hb=0,pb=0,dm=0,gj=0,rs=0,ic=0,total=0,qty=0;
    float gst=0;
    printf("\n\n*********** Welcome to Techies Hotel ***********\n\n");
    printf("Here is your menu.Enjoy your meal.!\n");
    printf("\nSelect what u want ---> \n");
   
    do{
        printf("\n1.Starter\n2.Main course\n3.Dessert\n4.Exit Menu\n\n"); // Main Menu
        printf("Please Enter your choise: ");
        scanf(" %c",&op);
        printf("\n");
        switch(op)
        {
        case '1':                                                         //Stater Menu 
            printf("You have chosen starter\n");
            do{
                printf("\n1.Chicken 65\n2.Paneer Tikka\n3.Pasta\n4.Exit to main Menu\n\n");
                printf("Please Enter your choise: ");
                scanf(" %c",&st);
                printf("\n");
                switch(st){                                                
                    case '1':                                               
                        printf("Chicken 65\n");
                        printf("Price is 120.RS\n");
                        printf("How many portions of chicken 65 would you like to order?\n");
                        scanf("%d",&qty);
                        ck=ck+qty;
                        break;
                    case '2':
                        printf("Paneer Tikka\n");
                        printf("Price is 100.RS\n");
                        printf("How many portions of Paneer Tikka would you like to order?\n");
                        scanf("%d",&qty);
                        pr=pr+qty;
                        break;
                    case '3':
                        printf("Pasta\n");
                        printf("Price is 90.RS\n");
                        printf("How many portions of Pasta would you like to order?\n");
                        scanf("%d",&qty);
                        ps=ps+qty;
                        break;
                    case '4':
                        printf("--> Returning to Main Menu...\n"); 
                        break;
                    default:
                        printf("$orry!,starter is not available and visit again...");
                }
            }while(st!='4');
        break;

        case '2':                                                       //Main couese Menu
            printf("You have chosen Main course\n");
            do{
                printf("\n1.Hyderabadi Biryani\n2.Paneer Biryani\n3.Dal Makhani\n4.Exit to Main menu\n\n");
                printf("Please Enter your choise: ");
                scanf(" %c",&mm);
                printf("\n");
                switch(mm){
                    case '1':
                        printf("Hyderabadi Biryani\n");
                        printf("Price is 320.RS\n");
                        printf("How many portions of Hyderabadi Biryani would you like to order?\n");
                        scanf("%d",&qty);
                        hb=hb+qty;
                        break;
                    case '2':
                        printf("Paneer Biryani\n");
                        printf("Price is 300.RS\n");
                        printf("How many portions of Paneer Biryani would you like to order?\n");
                        scanf("%d",&qty);
                        pb=pb+qty;
                        break;
                    case '3':
                        printf("Dal Makhani\n");
                        printf("Price is 75.RS\n");
                        printf("How many portions of Dal Makhani would you like to order?\n");
                        scanf("%d",&qty);
                        dm=dm+qty;
                        break;
                    case '4':
                        printf("--> Returning to Main Menu...\n");
                        break;
                    default:
                        printf("$orry!,item is not available and visit again...");
                }
            }while(mm!='4');
            break;

        case '3':                                                           // Desserts
            printf("You have chosen Dessert\n");
            do{
                printf("\n1.Gulab Jamun\n2.Rasmalai\n3.Ice Cream\n4.Exit to Main Menu\n\n");
                printf("Please Enter your choise: ");
                scanf(" %c",&dess);
                printf("\n");
                switch(dess){
                    case '1':
                        printf("Gulab Jamun\n");
                        printf("Price is 35.RS\n");
                        printf("How many portions of Gulab Jamun would you like to order?\n");
                        scanf("%d",&qty);
                        gj=gj+qty;
                        break;
                    case '2':
                        printf("Rasmalai\n");
                        printf("Price is 45.RS\n");
                        printf("How many portions of Rasmalai would you like to order?\n");
                        scanf("%d",&qty);
                        rs=rs+qty;
                        break;
                    case '3':
                        printf("Ice Cream\n");
                        printf("Price is 20.RS\n");
                        printf("How many portions of Ice Cream would you like to order?\n");
                        scanf("%d",&qty);
                        ic=ic+qty;
                        break;
                    case '4':
                        printf("--> Returning to Main Menu...\n");
                        break;
                    default:
                        printf("$orry!,Dessert is not available and visit again...");
                }
            }while(dess!='4');
            break;
            
        case '4':
            printf("Your order will be $erved..\n\n");
            break;
        default:
            printf("Please try again\n");
        }
    total=(ck*120)+(pr*100)+(ps*90)+(hb*320)+(pb*300)+(dm*75)+(gj*35)+(rs*45)+(ic*20);
    gst=total*0.18;
    }while(op!='4');

    printf("   TECHIES HOTTEL    \n");                                      // Billing
    printf("\n--- YOUR RECEIPT ---\n\n");
    printf("Items             Qty   Total Price\n");
    printf("-----------------------------\n");
    if(hb>0){
        printf("Hyderabadi Biryani x%d  %d.Rs\n",hb,hb*320);
    }
    if(pb>0){
        printf("Paneer Biryani     x%d  %d.Rs\n",pb,pb*300);
    }
    if(dm>0){
        printf("Dal Makhani        x%d  %d.Rs\n",dm,dm*75);
    }
    if(ck>0){
        printf("Chicken 65         x%d  %d.Rs\n",ck,ck*120);
    }
    if(pr>0){
        printf("Paneer Tikka       x%d  %d.Rs\n",pr,pr*100);
    }
    if(ps>0){
        printf("Pasta              x%d  %d.Rs\n",ps,ps*90);
    }
    if(gj>0){
        printf("Gulab Jamun        x%d  %d.Rs\n",gj,gj*35);
    }
    if(rs>0){
        printf("Rasmalai           x%d  %d.Rs\n",rs,rs*45);
    }
    if(ic>0){
        printf("Ice Cream          x%d  %d.Rs\n",ic,ic*20);
    }

    printf("-----------------------------\n");
    printf("Gross Total            %d\n",total);
    printf("GST  18 pct            %.2f\n",gst);
    printf("Total bill with GST    %g RS\n\n",(float)total + gst);
    printf("Thank you visit agiain\n\n");
    
    return 0;
}