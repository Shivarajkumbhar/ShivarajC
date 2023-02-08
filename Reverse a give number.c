#include <stdio.h> 

int main() {
int rem=0;
int ans=0;
int n=25478;
while (n>0)
 {
rem=n%10;
ans=(ans*10)+rem;
n=n/10;
}
printf("%d",ans);
}

    
