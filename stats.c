/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c> 
 * @brief < This file calculates the statics like mean, median, maximum and minimum value of an array given and print in to the terminal >
 *
 * <The specific functions written for specific task>
 *
 * @author <Pranay Singh>
 * @date <30/09/2019>
 *
 */





#include<stdio.h>   
#include "stats.h"                                                   
#define SIZE 40                                                                     
                


                                                               
void main()                                                                     
{          
 
 int i, j, n = 40, a[SIZE]; 
unsigned char *test[SIZE] = {     "34", "201", "190", "154",  "8", "194",   "2",   "6",
                              "114", "88",   "45",  "76", "123",  "87",  "25",  "23",
                              "200", "122", "150", "90",   "92",  "87", "177", "244",
                              "201",   "6",  "12",  "60",   "8",   "2",   "5",  "67",
                                "7",  "87", "250", "230",  "99",   "3", "100",  "90"};
for (i = 0; i < SIZE; i++) {
  a[i] = atoi(test[i]);
  
 }
                                    
print_array(a);
print_statistics(a,n);
                               
}           




void sort_array(int a[], int n){
int i, j,temp;

temp =0;                                                                        
                                                                   
 for(i=0;i<n-1;i++)                                                             
 {                                                                              
   for(j=0; j<n-i-1; j++)                                                       
   {                                                                            
    if(a[j]<a[j+1])                                                             
    {                                                                           
     temp = a[j];                                                               
     a[j] = a[j+1];                                                             
     a[j+1] = temp;                                                             
    }                                                                           
   }                                                                            
 }         

printf("After Sorting The Given Array :-\n\n");
 for(i=0; i<n; i++)                                                             
  printf("%d\t", a[i]);                                                                             
                                                                                
   printf("\n\n");   

           
}


void find_median(int a[] , int n){


float median;
                                                       
 if( n%2 == 0)                                                                  
  median = (a[(n/2)-1]+a[(n/2)])/2.0;                                           
 else                                                                           
  median = a[(n/2)];                                                            
  
printf("\nMedian is %.2f\n", median);
                                                                          
}


void find_mean(int a[] , int n){

float sum = 0;
float mean = 0;
for(int i=0; i<n; i++)
{
sum = sum + a[i];
}
mean = sum/n;

printf("The mean value is: %.2f \n",mean);

}

void find_maximum(int a[] , int n){
int i;
    for(i = 1; i < n; ++i)
    {
       if(a[0] < a[i])
           a[0] = a[i];
    }
    
printf("Maximum = %d \n", a[0]);

}

void find_minimum(int a[] , int n){

int i;
    for(i = 1; i < n; ++i)
    {
       if(a[0] > a[i])
           a[0] = a[i];
    }
   
printf("Minimum = %d \n", a[0]);

}

void print_statistics(int a[] , int n){

 
sort_array(a,n);                                                                          
                  
find_median(a,n);

find_mean(a,n);

find_maximum(a,n);

find_minimum(a,n);


}

void print_array(int a[]){

int i;

printf("\nGiven Array\n\n");

for (i = 0; i < SIZE; i++) {
   printf("%d \t",a[i]);
 }

 printf("\n\n");
}

