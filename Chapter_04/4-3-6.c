#include<stdio.h>
#include<math.h>

int main(){
    double x;
    scanf("%lf",&x);
//  x++;
//  printf("%.2lf",log(x));
//  it is just the taylor formula of ln(x+1) at x=0....
    int i;
    double ans=0;
    double tmp=-1;
    for(i=1;;i++){
        tmp*=(-1)*x/i;
        ans+=tmp;
//      printf("%lf\n",tmp);
        if(fabs(tmp)<0.0001)
            break;
    }
    printf("%.2f\n",ans);
    return 0;
}