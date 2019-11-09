#include<stdio.h>
const int M =60 ;
const int H=3600;
const double K =0.62137;
int main (void)
{
   double distk,distm;
   double rate;
   int min,sec;
   int time;
   double mtime;
   int mmin,msec;
   
   
   printf("This program converts your time for a metric race\n") ;
   printf("to a time for running a mile and to your average\n");
   printf("Please enter ,in kilometers,the distance rum.\n");
   scanf("%lf",&distk);
   printf("Next enter the time in minutes and secondsm\n");
   printf("Begin by entering the minutes.\n");
   scanf("%d",&min);
   printf("Now enter the seconds.\n");
   scanf("%d",&sec);
   
   time = M* min + sec;
   distm = K * distk;
   rate = distm/time * H;
   mtime = (double) time / distm;
   mmin=(int) mtime / M;
   msec = (int) mtime % M;
   
   printf("You ran %1.2f km (%1.2f miles) in %d min ,%d sec.\n",distk,distm,min,sec);
   printf("That pace corresponds to running a mile in %d min,,",mmin);
   printf("%d sec.\nYour average speed was %1.2f mph.\n",msec,rate);
   
   return 0;
}
   
   
 
