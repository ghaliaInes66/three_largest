/* this program takes a list of numbers 
and outputs the three largests */
#include <stdio.h>
#define negInf -2147483648
int nbr_of_elements ();
int* inputArr(int );
int max(int *t,int);
void output(int,int,int);
int main (){
	int max1,max2,max3;
	int size = nbr_of_elements();
    int *T=inputArr(size);
	max1=max(T,size);
	max2=max(T,size);
	max3=max(T,size);
	output(max1,max2,max3);
	}
	
	int nbr_of_elements (){
  int n;
  printf ("enter the number of elements ");
  scanf("%i",&n);
  return n;
}

int *inputArr (int x){
   static int T[10000];
   int count;
  for(  count=0;count<x;count++)
  {
  printf("enter the %i element: ",count);
  	scanf("%i",&T[count]);
  }
  return (T);
}
	int max(int *t,int nbrEelements){
 int max=t[0],count;
 for( count =1;count<nbrEelements;count++)
 {
 	if(t[count]>max)
 	{
 		max=t[count];
 	}
 }
 for(count=0;count<nbrEelements;count++)
 {
 	if(t[count]==max)
 	{
 		t[count]=negInf;
 	}
 }	
return max;	
	}
		
void output(int output1,int output2, int output3){
	printf("max1 = %i  max2 = %i  max3 = %i",output1,output2,output3);
	}
