#include<stdio.h>
#include<string.h>
#include<time.h>
int price = 0;
int bill[10];
char name[20][20];
float q[10];
float i = 0;
int length[10];
int k=1,j,x;
char c_name[30];
unsigned long long int phno;
FILE *f,*f1;
main()
{
	time_t t;
    time(&t);
int choice;
	system("cls");
	printf("\n====================================================");	
	printf("\n                   SR RESTAURENT                    ");
	printf("\n====================================================");
	printf("\n\n     1 %c TIFFINS ",16);
	printf("\n\n     2 %c LUNCH ",16);
	printf("\n\n     3 %c STARTERS ",16);
	printf("\n====================================================");
	printf("\n\nEnter Your Choice : ");
	scanf("%d",&choice);
	switch(choice)
	{

case 1: {	system("cls");
	printf("\n====================================================");	
	printf("\n                      TIFFINS                       ");	
	printf("\n====================================================");
	printf("\n\n     1 %c Idly          ======  40rs/plate ",16);
	printf("\n\n     2 %c Dosa          ======  30rs/plate ",16);
	printf("\n\n     3 %c Vada          ======  40rs/plate ",16);
	printf("\n\n     4 %c Puri          ======  35rs/plate ",16);
	printf("\n\n     5 %c Upma          ======  40s/plate ",16);
	printf("\n\n     6 %c Bonda         ======  40rs/plate ",16);
	printf("\n\n     7 %c Masala Dosa   ======  50rs/plate ",16);
	printf("\n\n     8 %c Schvaan Dosa  ======  100rs/plate",16);
	printf("\n\n     9 %c Cheese Dosa   ======  50rs/plate",16);
	printf("\n\n     10 %c Paneer Dosa  ======  50rs/plate",16);
	printf("\n\n     11 %c Sambar Idly  ======  60rs/plate",16);
	printf("\n\n     12 %c Uthapa       ======  50rs/plate ",16);
	printf("\n\n     13 %c Back     ",16);
	printf("\n\n     Enter Your Choice : ");
	scanf("%d",&choice);
	if(choice == 13)
	{
		main();	
	}
	printf("\n\n     Enter Quantity : ");
	scanf("%f",&i);
	


switch(choice)
		{
			
	case 1: price += 40*i;
			bill[k]=40*i;
			q[k]=i;
			strcpy(name[k],"Idly");
			break;
						
			
case 2: price += 30*i;
			bill[k]=30*i;
			q[k]=i;
			strcpy(name[k],"Dosa");
			break;
								
			case 3: price += 40*i;
			bill[k]=40*i;
			q[k]=i;
			strcpy(name[k],"Vada");
			break;
			
			case 4: price += 35*i;
			bill[k]=35*i;
			q[k]=i;
			strcpy(name[k],"Puri");
			break;
			
			case 5: price += 40*i;
			bill[k]=40*i;
			q[k]=i;
			strcpy(name[k],"Upma");
			break;
			
			case 6: price += 40*i;
			bill[k]=40*i;
			q[k]=i;
			strcpy(name[k],"Bonda");
			break;
			
			case 7: price += 50*i;
			bill[k]=50*i;
			q[k]=i;
			strcpy(name[k],"Masala Dosa");
			break;
							
			case 8: price += 100*i;
			bill[k]=100*i;
			q[k]=i;
			strcpy(name[k],"Schvaan Dosa");
			break;
								
			case 9: price += 50*i;
			bill[k]=50*i;
			q[k]=i;
			strcpy(name[k],"Cheese Dosa");
			break;
			
			case 10: price += 50*i;
			bill[k]=50*i;
			q[k]=i;
			strcpy(name[k],"Paneer Dosa");
			break;
			
			case 11: price += 60*i;
			bill[k]=60*i;
			q[k]=i;
			strcpy(name[k],"Sambar Idly");
			break;
			
			case 12: price += 50*i;
			bill[k]=50*i;
			q[k]=i;
			strcpy(name[k],"Uthapa");
			break;
			
								
			case 13: main();
						
	            }
	break;
				
	}
				
case 2: {	
	
 	system("cls");
	printf("\n===============================================================================");	
	printf("\n                                   MEALS                                       ");
	printf("\n===============================================================================");
	
	printf("\n\n     1 %c Veg Meals                     ======  70rs/plate ",16);
	printf("\n\n     2 %c Non-Veg Meals                 ======  110rs/plate ",16);
	printf("\n\n     3 %c Veg Biryani                   ======  120rs/plate ",16);
	printf("\n\n     4 %c Chicken Biryani               ======  150rs/plate ",16);
	printf("\n\n     5 %c Butter Naan                   ======   30rs/plate ",16);
	printf("\n\n     6 %c Chapati                       ======    30rs/plate ",16);
	printf("\n\n     7 %c Roti                          ======   10rs/plate ",16);
	printf("\n\n     8 %c Rumali Roti                   ======   50rs/plate ",16);
	printf("\n\n     9 %c Paneer Tikka                  ======   280rs/plate ",16);
	printf("\n\n     10 %c Chicken Butter Masala(Full)   ======   350rs/plate ",16);
	printf("\n\n     11 %c Panner Butter Masala(Full)     ======  300rs/plate ",16);
	printf("\n\n     12 %c Back     ",16);
	printf("\n\n     Enter Your Choice : ");
	scanf("%d",&choice);
	
if(choice == 12)
	{
		main();	
	}
	printf("\n\n     Enter Quantity : ");
	scanf("%f",&i);
					
	switch(choice)
	{
		

case 1: price += 70*i;
		bill[k]=70*i;

		q[k]=i;
		strcpy(name[k],"Veg Meals");
		break;
						
		case 2: price += 110*i;
		bill[k]=110*i;
		q[k]=i;
		strcpy(name[k],"Non-Veg Meals");
		break;
								
		case 3: price += 120*i;
		bill[k]=120*i;
		q[k]=i;
		strcpy(name[k],"Veg Biryani");
		break;
														
		case 4: price += 150*i;
		bill[k]=150*i;
		q[k]=i;
		strcpy(name[k],"Chicken Biryani");
		break;
		
		case 5: price += 30*i;
		bill[k]=30*i;
		q[k]=i;
		strcpy(name[k],"Butter Naan");
		break;
		
		case 6: price += 30*i;
		bill[k]=30*i;
		q[k]=i;
		strcpy(name[k],"Chapati");
		break;
		
		case 7: price += 10*i;
		bill[k]=10*i;
		q[k]=i;
		strcpy(name[k],"Roti");
		break;
		
		case 8: price += 50*i;
		bill[k]=50*i;
		q[k]=i;
		strcpy(name[k],"Rumali Roti");
		break;
		
		case 9: price += 280*i;
		bill[k]=280*i;
		q[k]=i;
		strcpy(name[k],"Paneer Tikka");
		break;
		
		case 10: price += 350*i;
		bill[k]=350*i;
		q[k]=i;
		strcpy(name[k],"Chicken Butter Masala(Full)");
		break;
		
		case 11: price += 300*i;
		bill[k]=300*i;
		q[k]=i;
		strcpy(name[k],"anner Butter Masala(Full)");
		break;
								
		case 12: main();
						
		}
		break;
	}
					
	case 3: {
	
system("cls");
						

	printf("\n=======================================================================");	
	 
	printf("\n                              STARTERS                                   ");
	printf("\n=======================================================================");
	

	printf("\n\n     1 %c Veg Munchuria             ======  150rs/plate ",16);
	printf("\n\n     2 %c Chicken Munchuria         ======  250rs/plate ",16);
	printf("\n\n     3 %c Chicken 65                ======  300rs/plate ",16);
	printf("\n\n     4 %c Cheese Potato             ======  350rs/plate",16);
	printf("\n\n     5 %c Crispy Corn               ======  350rs/plate ",16);
	printf("\n\n     6 %c Chilli Chicken            ======  460rs/plate ",16);
	printf("\n\n     7 %c Chicken Tikka             ======  420rs/plate ",16);
	printf("\n\n     8 %c Peri Peri Chicken Wings   ======  450rs/plate ",16);
	printf("\n\n     9 %c Back     ",16);
	printf("\n\n     Enter Your Choice : ");
	scanf("%d",&choice);
	if(choice == 9)
{
		main();	
	}
	printf("\n\n     Enter Quantity : ");
	scanf("%f",&i);
	switch(choice)
	{
		case 1: price += 150*i;
			bill[k]=150*i;
			q[k]=i;
			strcpy(name[k],"Veg Munchuria");
			break;
							
		

		case 2: price += 250*i;
			bill[k]=250*i;
			q[k]=i;
			strcpy(name[k],"Chicken Munchuria ");
			break;
									
		case 3: price += 300*i;
			bill[k]=300*i;
			q[k]=i;
			strcpy(name[k],"Chicken 65 ");
			break;
		
		case 4: price += 350*i;
			bill[k]=350*i;
			q[k]=i;
			strcpy(name[k],"Cheese Potato");
			break;
			
		case 5: price += 350*i;
			bill[k]=350*i;
			q[k]=i;
			strcpy(name[k],"Crispy Corn ");
			break;
			
		case 6: price += 460*i;
			bill[k]=460*i;
			q[k]=i;
			strcpy(name[k],"Chilli Chicken");
			break;
			
		case 7: price += 420*i;
			bill[k]=420*i;
			q[k]=i;
			strcpy(name[k],"Chilli Chicken");
			break;
			
			
		case 8: price += 450*i;
			bill[k]=450*i;
			q[k]=i;
			strcpy(name[k],"Peri Peri Chicken Wings");
			break;
									
		case 9: main();
							
		}
		break;
}
					
break;
}
	
	printf("\n\n     1 %c Continue shopping ",16);
	printf("\n\n     2 %c Return Bill ",16);



	scanf("%d",&choice);
	
	


if(choice ==1)
	{	k++;
		main();
	}
	


else
		{
		f=fopen("SR_Restuarent.txt","a");	
		system("cls");
		printf("Enter Customer Name : ");
		fscanf(stdin,"%s",c_name);
		fprintf(f,"%s\n",c_name);
		printf("Enter Mobile Number: ");
		fscanf(stdin,"%llu",&phno);
		fprintf(f,"%llu\n",phno);
		system("cls");
		
		for(j=1;j<=k;j++)
		{
			length[j] = strlen(name[j]);
		}
		fprintf(f,"---------------------------------------------------------------------------------\n");
		fprintf(f,"                             SR_Restuarant\n");
		fprintf(f,"                               Hanamkonda\n");
		fprintf(f,"                              Hanamkonda Pvt Ltd\n");
		fprintf(f,"               Hunter Road,Hanamkonda,Telangana - 506001\n");
		fprintf(f,"---------------------------------------------------------------------------------");
		fprintf(f,"\nCustomer Name : %s                   Customer Number :%llu\n",c_name,phno);
		fprintf(f,"\n--------------------------------------------------------------------------------\n");
		fprintf(f,"%s", ctime(&t));
		fprintf(f,"                                                                         Cashier");
		fprintf(f,"\n--------------------------------------------------------------------------------\n");
		fprintf(f,"\nDescription                      Quantity                            Price   ");
		fprintf(f,"\n--------------------------------------------------------------------------------");
		for(j=1;j<=k;j++)
		{
		fprintf(f,"\n\n%d.%s                   %*f plt                           Rs.%d.00",j,name[j],20-length[j],q[j],bill[j]);
		}
		fprintf(f,"\n--------------------------------------------------------------------------------");
		fprintf(f,"\nYour Total Payable Amount is :                                         Rs.%d.00",price);
		fprintf(f,"\n--------------------------------------------------------------------------------\n");
		fprintf(f,"                          VAT No    : 385744\n");
		fprintf(f,"                          SAC       : 677648\n");
		fprintf(f,"\tReg Office Address:SR University,Besides HP Petrol Pump,\n\tHasanparthy,Telanagana - 500032\n");
		fprintf(f,"***************************\n");
		fprintf(f,"                          Thank You..Visit Again %c\n",2);
		fprintf(f,"-------------------------------------------------------------------------------\n");
		fprintf(f,"%c\t%c\t%c\t%c\t%c\t%c\t%c\t%c\n",2,3,4,5,6,120,112,9);
		fprintf(f,"-------------------------------------------------------------------------------\n");
		fclose(f);
		f=fopen("SR_Restuarent","r");
		
		printf("Enter Customer Name : ");
		printf("%s\n",c_name);
		printf("Enter Mobile Number: ");
		printf("%llu\n",phno);
		system("cls");
		
		for(j=1;j<=k;j++)
		{
			length[j] = strlen(name[j]);
		}
		printf("=================================================================================\n");
		printf("                             SR_Restuarent\n");
		printf("                               Hanamkonda\n");
		printf("                              Hanamkonda Pvt Ltd\n");
		printf("               Hunter Road,Hanamkonda,Telangana - 506001\n");
		printf("=================================================================================");
		printf("\nCustomer Name : %s                   Customer Number :%llu\n",c_name,phno);
		printf("\n=================================================================================\n");
		printf("%s", ctime(&t));
		printf("                                                                         Cashier");
		printf("\n=================================================================================\n");
		printf("\nDescription                      Quantity                            Price   ");
		printf("\n=================================================================================");
		for(j=1;j<=k;j++)
		{
		printf("\n\n%d.%s               %*f plt                           Rs.%d.00",j,name[j],20-length[j],q[j],bill[j]);
		}
		printf("\n-=================================================================================");
		printf("\nYour Total Payable Amount is :                                         Rs.%d.00",price);
		printf("\n=================================================================================\n");
		printf("                          VAT No    : 385744\n");
		printf("                          SAC       : 677648\n");
		printf("\tReg Office Address:SR University,Besides HP Petrol Pump,\n\tHasanparthy,Telanagana - 500032\n");
		printf("***************************\n");
		printf("                          Thank You..Visit Again %c\n",2);
		printf("-------------------------------------------------------------------------------\n");
		printf("%c\t%c\t%c\t%c\t%c\t%c\t%c\t%c\n",2,3,4,5,6,120,112,9);
		printf("=================================================================================\n");
}
}
