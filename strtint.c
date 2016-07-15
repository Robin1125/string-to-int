#include<stdio.h>
#include<stdlib.h>
int main()
{
    char a[100];
    int s=0,d=1,t,i,l;
    
    gets(a);
    l=strlen(a);

    for(i=l-1;i>=0;i--){
      if(a[i]>=48 && a[i]<=58){
        t=a[i]-48;
        s=s+(t*d);
        d=d*10;
      }
      else if(a[i] == '-'){
          s=-s;
      }
      else{
          s=0;
          break;
      }
    }
    printf("%d",s);
    
return 0;
}
