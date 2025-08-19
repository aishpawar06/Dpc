#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n],res[n],k=0,max=-1;
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    for(int i=n-1;i>=0;i--){
        if(arr[i]>=max){
            res[k++]=arr[i];
            max=arr[i];
        }
    }
    for(int i=k-1;i>=0;i--) printf("%d ",res[i]);
    return 0;
}
