#include <stdio.h>
int reverse(int number);
void lycheral();
int main(void) {
    lycheral();
	return 0;
}
void lycheral()
{
    long int num, ctr=0, revnum, ans, revans, safe;
    for(num=1; num<1000; num++)
    {
        safe=num;
        do{
            revnum=reverse(num);
            ans=num+revnum;
            revans=reverse(ans);
            num=ans;
            ctr++;
    }while(revans!=ans);
    if(ctr>=50)
    {
        printf("%ld\n",safe);
    }   
}
}
int reverse(int number)
{
    int digit, rev=0;
    digit=number%10;
    number=number/10;
    rev=rev*10+digit;
    return rev;
}