#include <cstdio>

int main(){
    int n;
    scanf("%d",&n);
    int r[n+1];
    r[0] = 0;
    int i;
    for(i = 0; i < n;++i){
        scanf("%d",r+i+1);
    }
    double pi = 3.14159;
    double mi = 0.0;
    for(i = n;i >= 1;i=i-2){
        mi += r[i]*r[i]*pi-r[i-1]*r[i-1]*pi;    //惨烈
        printf("%.5f %.5f\n",r[i]*r[i]*pi,r[i-1]*r[i-1]*pi);
        printf("%f\n",mi);
    }
    printf("%.5f",mi);
    return 0;
}
