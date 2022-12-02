//CODE
// Including header files
#include<stdio.h>
#include<string.h>
#include<math.h>

// Including user defined functions
int dept();
int d1();
int d2();
int calc();
int user_info();
int display();
int luckydraw();
int final_bill();

// Declaration of global variables
int ch1,num,i,user_no,mode,length;
float discount=0.0,sum=0.0,dis_price=0.0;
char user_nm[20];

//Declaring array
int ar[4];

//Declaring structure
struct details
{
    char name[20];
    float price;
    int code,size;
    char colour[10];
    
}i1,i2,i3,i4;           //Structure objects

//Forming the functions
int dept() 
{
   printf("Enter '1' for men's wear and '2' for women's wear:");
   scanf("%d",&ch1);
   switch(ch1)
   {
       case 1: d1(); break;
       case 2: d2(); break;
       default: printf("Wrong choice"); break;
   }  
}                  //end of dept()

int d1()
{
    int ch2;
    int c1,x;
    printf("Men's wear\n\n");
    printf("Press '1' for Shirt and '2' for Jeans:");
    scanf("%d",&ch2);

    switch(ch2)
    {
        case 1: printf("Item Name:%s",i1.name);
                printf("\nPrice:%.2f",i1.price);
                printf("\nCode:%d",i1.code);
                printf("\nSize:%d",i1.size);
                printf("\nColour:%s",i1.colour);
                printf("\n\nPress 1 if you want to purchase:");
                scanf("%d",&c1);
                if(c1==1)
                {
                    ar[0]=i1.code;
                    printf("Press 1 if you want to go to women's department:");
                    scanf("%d",&x);
                    if(x==1)
                    d2();
                    else 
                    calc();
                } 
                else
                {   ar[0]=0;
                    printf("\n\nPress 1 if you want to go to women's department:");
                    scanf("%d",&x);
                      if(x==1)
                      {
                          d2();
                      }
                      else
                      {
                          calc();
                      }
                      
                }
                 
                break;

        case 2: printf("Item Name:%s",i2.name); 
                printf("\nPrice:%.2f",i2.price);
                printf("\nCode:%d",i2.code);
                printf("\nSize:%d",i2.size);
                printf("\nColour:%s",i2.colour);
                printf("\n\nPress 1 if you want to purchase:");
                scanf("%d",&c1);
                if(c1==1)
                {
                    ar[1]=i2.code;
                    printf("Press 1 if you want to go to women's department:");
                    scanf("%d",&x);
                    if(x==1)
                    d2();
                    else 
                    calc(); 
                }
                else
                {   ar[1]=0;
                    printf("\n\nPress 1 if you want to go to women's department:");
                    scanf("%d",&x);
                      if(x==1)
                      {
                          d2();
                      }
                      else
                      {
                          calc();
                      }
                      
                }  
                break;   

        default: printf("Invalid input");            


    }


}          //end of d1()

int d2()
{
   int ch2;
   int c1,x;
   printf("Women's wear\n\n");
    printf("Press '1' for Dress and '2' for Sneakers:");
    scanf("%d",&ch2);

    switch(ch2)
    {
        case 1: printf("Item Name:%s",i3.name);
                printf("\nPrice:%.2f",i3.price);
                printf("\nCode:%d",i3.code);
                printf("\nSize:%d",i3.size);
                printf("\nColour:%s",i3.colour);
                printf("\n\nPress 1 if you want to purchase:");
                scanf("%d",&c1);
                if(c1==1)
                {
                    ar[2]=i3.code;
                    printf("Press 1 if you want to go to men's department:");
                    scanf("%d",&x);
                    if(x==1)
                    d1();
                    else  
                    calc();
                } 
                else
                {   ar[2]=0;
                    printf("\n\nPress 1 if you want to go to men's department:");
                    scanf("%d",&x);
                      if(x==1)
                      {
                          d1();
                      }
                      else
                      {
                          calc();
                      }
                      
                }
                 
                break;

        case 2: printf("Item Name:%s",i4.name); 
                printf("\nPrice:%.2f",i4.price);
                printf("\nCode:%d",i4.code);
                printf("\nSize:%d",i4.size);
                printf("\nColour:%s",i4.colour);
                printf("\n\nPress 1 if you want to purchase:");
                scanf("%d",&c1);
                if(c1==1)
                {
                    ar[3]=i4.code;
                    printf("Press 1 if you want to go to men's department:");
                    scanf("%d",&x);
                    if(x==1)
                    d1();
                    else 
                    calc(); 
                }
                else
                {   ar[3]=0;
                    printf("\n\nPress 1 if you want to go to men's department:");
                    scanf("%d",&x);
                      if(x==1)
                      {
                          d1();
                      }
                      else
                      {
                          calc();
                      }
                      
                }  
                break;   

        default: printf("Invalid input");            


    }


}                      //end of d2()

int calc()
{   float a=0.0,b=0.0,c=0.0,d=0.0;
    //length=strlen(ar); 
        for(i=0;i<4;i++)          
        {
              if(ar[i]==1)
              a=i1.price;

              if(ar[i]==2)
              b=i2.price;
        

              if(ar[i]==3)
              c=i3.price;
        
              if(ar[i]==4)
              d=i4.price;
        
            
        }
     
sum=a+b+c+d;
user_info();

}                   //end of calc()

int user_info()
{
        

   printf("\nEnter your name:");
   scanf("%s",user_nm);
   printf("\nEnter your mobile number:");
   scanf("%d",&user_no); 
}                        // end of user_info()

int display()
{    
      printf("\n\n\t\t\t\tYour reciept");
      printf("\n\nName:%s",user_nm);
      printf("\nMobile no.:%d",user_no);

    for(i=0;i<4;i++)
    {
        if(ar[i]==1)
        {         
                printf("\nItem Name:%s",i1.name);
                printf("\nPrice:%.2f",i1.price);
                printf("\nCode:%d",i1.code);
                printf("\nSize:%d",i1.size);
                printf("\nColour:%s",i1.colour);  
        }

        if(ar[i]==2)
        {
                printf("\nItem Name:%s",i2.name);
                printf("\nPrice:%.2f",i2.price);
                printf("\nCode:%d",i2.code);
                printf("\nSize:%d",i2.size);
                printf("\nColour:%s",i2.colour);
        }

        if(ar[i]==3)
        {
                printf("\nItem Name:%s",i3.name);
                printf("\nPrice:%.2f",i3.price);
                printf("\nCOde:%d",i3.code);
                printf("\nSize:%d",i3.size);
                printf("\nColour:%s",i3.colour);
        }

        if(ar[i]==4)
        {
                printf("\nItem Name:%s",i4.name);
                printf("\nPrice:%.2f",i4.price);
                printf("\nCode:%d",i4.code);
                printf("\nSize:%d",i4.size);
                printf("\nColour:%s",i4.colour);
        }
    }

    printf("\nNet amount:%.2f",sum);
    luckydraw();
}                                //end of display()

int luckydraw()
{    int c=0;
    printf("\n\nEnter '1' for COD and '2' for online payment:");
     scanf("%d",&mode);
     if(mode==1)
     {//prime no
        printf("\nEnter any number:");
        scanf("%d",&num);

        for(i=1;i<=num;i++)
        {
            if(num%i==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            discount=0.15*sum;      //15% doscount
            dis_price=sum-discount;
            final_bill();
        } 
        else
        {
            printf("\nNo discount");
        }
        
     }
     else if(mode==2)
     {
         discount=0.20*sum;           //20% discount1
         dis_price=sum-discount;
         final_bill();
     }

    

}             //end of luckydraw()

int final_bill()
{
    printf("\n\nDiscount offered:%.2f",discount);
    printf("\nDiscounted price:%.2f",dis_price);
}
//end of final_bill()

//main() starts
int main() {

    printf("\t\t\t\t\t\t\t\tWELCOME TO LET'S SHOP\n\n");

// Initializing structure members
strcpy(i1.name,"Shirt");
i1.price=800.00;
i1.code=1;
i1.size=40;
strcpy(i1.colour,"Black");


strcpy(i2.name,"Jeans");
i2.price=1500.00;
i2.code=2;
i2.size=34;
strcpy(i2.colour,"Blue");

strcpy(i3.name,"Dress");
i3.price=1500.00;
i3.code=3;
i3.size=28;
strcpy(i3.colour,"White");


strcpy(i4.name,"Sneakers");
i4.price=2500.00;
i4.code=4;
i4.size=7;
strcpy(i4.colour,"Grey");

dept();           //calling dept()
display();        //calling display()

printf("\n\n\t\t\t\tThank you");

return 0;
}   
// end of main()