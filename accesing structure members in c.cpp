#include<stdio.h>
#include<conio.h>
struct Vehicle
 {
 int wheels;
 char vname[20];
 char color[10];
} v1 = {4,"Maruti 800","White"};
int main ()
{
printf ("Vehicle No of Wheel : %d",v1.wheels);
printf("Vehicle Name : %s",v1.vname);
printf("Vehicle Color : %s",v1.color);
getch();
}
