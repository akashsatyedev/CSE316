#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,temp,sum1=0,sum2=0,CPOS,ID,TD=0,ID1;
int array[20]={143,86,1470,913,1774,948,1509,1022,1750,130,4999,0};//Here ID means individual distance,CPOS for current position,TD for Total Distance;
printf("No of Disc Space in the Cylinder is(0-4999=5000 \n");
printf("Current Request Being Processed is 143 \n");
printf("Previous Request Processed is 125 \n");
printf("All The Elements In List");// In Scan Disk Method We Are Just Specifying The Direction in Which It will Move here we are moving in positive direction
printf("Elements in FIFO List Are:\n 143,86,1470,913,1774,948,1509,1022,1750,130,4999,0"); 
for(i=0;i<12;++i)                //Here 12 is the No of FIFO elements in List
{
for(j=i+1;j<12;++j)
{
if(array[i]>array[j])
{
temp=array[i];
array[i]=array[j];
array[j]=temp;
}
}
}
printf("\n elements in sequence:  ");//Displaying Elements in a sequence order
for(i=0;i<12;++i)
{
printf("%d \t",array[i]);
}
printf("\nCurrent position of the pointer in sorted array : ");
for(i=0;i<12;++i)
{
if(array[i]==143)
{
printf("%d \n",i+1);
CPOS=i;//pointing towards the current element
}
}
printf("Individual distance from moving current position to disc Size(4999) \n");	
for(i=CPOS;i<12-1;++i)
{
ID=array[i+1]-array[i];
printf("%d \n",ID);
sum1=sum1+ID;
}
printf(" Distance from current position to 4999 : %d \n",sum1);
printf("Individual distance from moving 0 to Current size\n");
for(i=0;i<CPOS-1;i++)
{
ID1=array[i+1]-array[i];
printf("%d \n",ID1);
sum2=sum2+ID1;
}
printf(" TotalDistance from 0 when moving to current position : %d \n",sum1);

TD=sum1+sum2;//total distance (in cylinders)that the disk arm moves to satisfy all the pending requests using SCAN disk algorithm.
printf("TotalDistance when we are not including the distance from 4999 to 0: \n");//distance can be calculated in two ways when including distance from 4999 to 0 and when not including 4999 to 0-4999
printf("%d \n",TD);
printf("TotalDistance when we are include the distance from 4999 to 0: \n");
printf("%d ",TD+4999);
}
