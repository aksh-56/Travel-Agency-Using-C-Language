#include<stdio.h>
#include<string.h>
#include<process.h>
main()
{
char name[10],date[10];
int q,route,veh,charge;
printf("\n\n");
printf("-------------------WELCOME TO-----------------\n");
printf("---------------SASTA TRAVEL AGENGY------------\n ---------PUNE--------\n");
printf("-----------------------------------------------------\n\n");
printf("route bookings for this week are from:\n1.PUNE TO DELHI\n2.PUNE TO
BOMBAY\n3.PUNE TO BANGLORE:\n");
printf("\nselect your route you want to travel:\n");
scanf("%d",&route);
switch(route)
{
case 1:printf("select mode of transport for your journey from PUNE TO DELHI:");
printf("\n1.BUS\n2.TRAIN\n3.FLIGHT\n");
scanf("%d",&veh);
switch(veh)
{
case 1:printf("enter your details for your bus booking from PUNE TO DELHI: ");
printf("enter your name: ");
scanf("%s",name);
printf("enter the quantity of tickets to be booked: ");
scanf("%d",&q);
charge=899;
charge=q*charge;
charge=charge+15;
printf("hey %s,your %d tickets for bus is being booked for the route of PUNE
TO DELHI\n on %s and your travel cost is %d" ,name,q,date,charge);
printf("\n------BUS ARRIVAL TIME=2:30PM------\n------PLEASE BE
PRESENT BEFORE 15 MINS of ARRIVAL------\n");
break;
case 2: printf("enter your details for your train booking from PUNE TO
DELHI: ");
printf("enter your name: ");
scanf("%s",name);
printf("enter the quantity of tickets to be booked: ");
scanf("%d",&q);
charge=950;
charge=q*charge;
charge=charge+75;
printf("hey %s,your %d tickets for train is being booked for the route of PUNE
TO DELHI\n your travel cost is %d" ,name,q,charge);
printf("\n------TRAIN ARRIVAL TIME=8:30PM------\n------PLEASE BE
PRESENT BEFORE 15 MINS of ARRIVAL------\n");
break;
case 3: printf("enter your details for your flight booking from PUNE TO
DELHI:");
printf("enter your name:");
scanf("%s",name);
printf("enter the quantity of tickets to be booked:");
scanf("%d",&q);
charge=1500;
charge=q*charge;
charge=charge+170;
printf("hey %s,your %d tickets for flight is being booked for the route of
PUNE TO DELHI\n your travel cost is %d" ,name,q,charge);
printf("\n------FLIGHT ARRIVAL TIME=4:00AM------\n------PLEASE BE PRESENT
BEFORE 15 MINS of ARRIVAL------\n");
break;
default: printf("wrong choice!!");
}
break;
case 2:printf("select mode of transport for your journey from PUNE TO BOMBAY:");
printf("\n1.BUS\n2.TRAIN\n3.FLIGHT\n");
scanf("%d",&veh);
switch(veh)
{
case 1:printf("enter your details for your bus booking from PUNE TO BOMBAY:");
printf("enter your name:");
scanf("%s",name);
printf("enter the quantity of tickets to be booked:");
scanf("%d",&q);
charge=499;
charge=q*charge;
charge=charge+15;
printf("hey %s,your %d tickets for bus is being booked for the route of PUNE
TO BOMBAY\n your travel cost is %d" ,name,q,charge);
printf("------BUS ARRIVAL TIME=3:30PM------\n------PLEASE BE PRESENT
BEFORE 15 MINS of ARRIVAL------\n");
break;
case 2: printf("enter your details for your train booking from PUNE TO
BOMBAY:");
printf("enter your name:");
scanf("%s",name);
printf("enter the quantity of tickets to be booked:");
scanf("%d",&q);
charge=600;
charge=q*charge;
charge=charge+75;
printf("hey %c,your %d tickets for train is being booked for the route of PUNE
TO BOMBAY\n your travel cost is %d" ,name,q,charge);
printf("------TRAIN ARRIVAL TIME=9:30PM------\n------PLEASE BE
PRESENT BEFORE 15 MINS of ARRIVAL------\n");
break;
case 3: printf("enter your details for your flight booking from PUNE TO
BOMBAY:");
printf("enter your name:");
scanf("%s",name);
printf("enter the quantity of tickets to be booked:");
scanf("%d",&q);
charge=999;
charge=q*charge;
charge=charge+170;
printf("hey %s,your %d tickets for flight is being booked for the route of
PUNE TO BOMBAY\n your travel cost is %d" ,name,q,charge);
printf("------FLIGHT ARRIVAL TIME=5:30AM------\n------PLEASE BE
PRESENT BEFORE 15 MINS of ARRIVAL------\n");
break;
default: printf("wrong choice!!");
}
break;
case 3:printf("select mode of transport for your journey from PUNE TO BANGLORE:");
printf("\n1.BUS\n2.TRAIN\n3.FLIGHT\n");
scanf("%d",&veh);
switch(veh)
{
case 1:printf("enter your details for your bus booking from PUNE TO
BANGLORE:");
printf("enter your name:");
scanf("%s",name);
printf("enter the quantity of tickets to be booked:");
scanf("%d",&q);
charge=999;
charge=charge+15;
printf("hey %s,your %d tickets for bus is being booked for the route of PUNE
TO BANGLORE\n your travel cost is %d" ,name,q,charge);
printf("------BUS ARRIVAL TIME=5:30PM------\n------PLEASE BE PRESENT
BEFORE 15 MINS of ARRIVAL------\n");
break;
case 2: printf("enter your details for your train booking from PUNE TO
BANGLORE:");
printf("enter your name:");
scanf("%s",name);
printf("enter the quantity of tickets to be booked:");
scanf("%d",&q);
charge=1200;
charge=q*charge;
charge=charge+75;
printf("hey %s,your %d tickets for train is being booked for the route of PUNE
TO BANGLORE\n your travel cost is %d" ,name,q,charge);
printf("------TRAIN ARRIVAL TIME=7:00PM------\n------PLEASE BE
PRESENT BEFORE 15 MINS of ARRIVAL------\n");
break;
case 3: printf("enter your details for your flight booking from PUNE TO
BANGLORE:\n");
printf("enter your name:");
scanf("%s",name);
printf("enter the quantity of tickets to be booked:");
scanf("%d",&q);
charge=1800;
charge=q*charge;
charge=charge+170;
printf("hey %s,your %d tickets for flight is being booked for the route of
PUNE TO BANGLORE\n your travel cost is %d" ,name,q,charge);
printf("------FLIGHT ARRIVAL TIME=6:30AM------\n------PLEASE BE
PRESENT BEFORE 15 MINS of ARRIVAL------\n");
break;
default: printf("wrong choice!!\n");
}
break;
default :printf("INVALID CHOICE!!\n");
}
}