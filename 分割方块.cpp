#include<stdio.h>
#include<math.h>
double p(int n,int m,int has){//m�֣��ռ�n�ţ���has�ֵĸ���
   if(has==0)return (double)(n==0);//����û���ռ������������ 
   if(has>m||has>n)return 0.0;//��Ȼ�ռ��������಻���ܴ���m��n 
   else if(has==1)return 1/pow(m,n-1);//ֻ�ռ���һ��ֱ�������
//(n-1)�ι������û�յ�������+(n-1)�λ���һ��������յ��������� 
   return p(n-1,m,has)*has/m+p(n-1,m,has-1)*(m-has+1)/m; 
}
int main(){
   int m,n;
   scanf("%d %d",&m,&n);
   printf("%.4f\n",(int)(p(n,m,m)*10000+0.5)/10000.0f);//�����������  
   return 0;
}
