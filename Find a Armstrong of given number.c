#include <stdio.h> 

int main() {
int rem=0;
int count=0;
int n=12243;
int ans =0;
int temp=n;
while (n>0)
 {
rem=n%10;
count++;
ans=(ans+pow(rem,count));
n=n/10;
}
if (ans==temp)
{
printf("it's Armstrong");
}
else 
{
printf("it's not Armstrong");
}
}

    
