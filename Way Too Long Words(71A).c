#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    int n,m;
char x[2000];
scanf("%d",&n);
for(int i=1;i<=n;i++){
scanf("%s",&x);
m=strlen(x);

if(m>10){

    printf("%c",x[0]);
    printf("%d",m-2);
    printf("%c\n",x[m-1]);

}
else printf("%s\n",x);}
return 0;
}
