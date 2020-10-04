#include <stdio.h>

int main()
{
    int n,a,b,c,ans=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d %d",&a,&b,&c);
        if((a == 1 && b ==1) || (a == 1 && c ==1) || (b == 1 && c ==1)) {
            ans += 1;
        }
    }
    printf("%d",ans);
}
