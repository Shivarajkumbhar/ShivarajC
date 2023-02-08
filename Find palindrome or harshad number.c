#include <stdio.h> 

int main() {
int rem=0;
int ans=0;
int n=12243;
int temp=n;
while (n>0)
 {
rem=n%10;
ans=(ans+rem);
n=n/10;
}
if (ans=temp)
{
printf("it's palindrome");
}
else 
{
printf("it's not palindrome");
}
}

    
