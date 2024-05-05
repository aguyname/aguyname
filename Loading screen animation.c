#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{  //clearing the screen at the beginning
  system("clear");
  int n=3,i;
  for(i=0;i<n;i++)
    {   //printing and clearing the screen after each cycle
      printf("Loading[:::        ]\n");
      sleep(1); 
      system("clear");
      printf("Loading[   :::     ]\n");
      sleep(1); 
      system("clear");
      printf("Loading[       ::: ]\n");
      sleep(1);
      system("clear");
      printf("Loading[        :::]\n");
      sleep(1); 
      system("clear");
    }
  return 0;
}
