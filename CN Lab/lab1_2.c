#include<stdio.h>
#include<stdlib.h>
    struct time{
     int h,m,s;
    };
  
    struct time differ(struct time t1, struct time t2) {
    struct time t3;
    if (t1.s < t2.s) {
        t1.s += 60;
        t1.m--;
    }
    t3.s = t1.s - t2.s;
    if (t1.m < t2.m) {
        t1.m += 60;
        t1.h--;
    }
    t3.m = t1.m - t2.m;
    t3.h = t1.h - t2.h;

    return t3;
}
    int main(){
        struct time t1,t2,t3;
        
printf("Enter the hours1:");
scanf("%d",&t1.h);
printf("Enter the hours2:");
scanf("%d",&t2.h);
printf("Enter the minute1:");
scanf("%d",&t1.m);
printf("Enter the minute2:");
scanf("%d",&t2.m);
printf("Enter the second1:");
scanf("%d",&t1.s);
printf("Enter the second2:");
scanf("%d",&t2.s);
t3=differ(t1,t2);
printf("Time difference is: %02d:%02d:%02d\n", t3.h, t3.m, t3.s);

return 0;
}
