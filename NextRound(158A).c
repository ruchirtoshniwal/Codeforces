#include <stdio.h>

int main()
{
    int n,k,a[100],ans=0;
    scanf("%d %d",&n,&k);
    if(n>=k){
        for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++) {
        if (a[i] >= a[k-1]&&a[i]>0) {
            ans += 1;
        }
    }
    printf("%d",ans);
    }
    
}
