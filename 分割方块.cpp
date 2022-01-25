#include<stdio.h>
#include<math.h>
double p(int n,int m,int has){//m种，收集n张，有has种的概率
   if(has==0)return (double)(n==0);//除非没有收集否则种类非零 
   if(has>m||has>n)return 0.0;//显然收集到的种类不可能大于m或n 
   else if(has==1)return 1/pow(m,n-1);//只收集到一种直接算出来
//(n-1)次够了这次没收到新种类+(n-1)次还差一个且这次收到了新种类 
   return p(n-1,m,has)*has/m+p(n-1,m,has-1)*(m-has+1)/m; 
}
int main(){
   int m,n;
   scanf("%d %d",&m,&n);
   printf("%.4f\n",(int)(p(n,m,m)*10000+0.5)/10000.0f);//四舍五入输出  
   return 0;
}
