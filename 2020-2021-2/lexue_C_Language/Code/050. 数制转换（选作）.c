/*
我们通常使用的都是十进制的数字，但其实在生活中也经常会使用其它进制。
这个题目会给你两个不同的数字，它们不属于同一进制，要求你计算出当它们分别处于何种进制之中时，两个数字相等。譬如 12 和 5 ，在十进制下它们是不等的，但若 12 使用 3 进制而 5 使用六进制或十进制时，它们的值就是相等的。因此只要选择合适的进制， 12 和 5 就可以是相等的。
程序的输入是两个数字 M 和 N( 其十进制的值不超过 1000000000) ，它们的进制在 2~36 之间。对于十以下的数字，用 0~9 表示，而十以上的数字，则使用大写的 A~Z 表示。
求出分别在 2~36 哪种进制下 M 和 N 相等。若相等则输出相应的进制，若不等则输出错误信息。当然了，对于多种可能成立的情况，找出符合要求的进制最小的一组就行了.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
typedef long long ll;
#define rep(i,l,r) for(ll i=l;i<=r;i++)
#define per(i,l,r) for(ll i=r;i>=l;i--)
#define eif else if
#define N 100005
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b
void Qsort(int *a,int l,int r){
    if(l>r)
        return;
    int temp=a[l];
    int i=l,j=r;
    while(i!=j){
        while(a[j]>=temp&&i<j){
            j--;
        }
        while(a[i]<=temp&&i<j){
            i++;
        }
        if(i<=j){
            int t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    a[l]=a[i];
    a[i]=temp;
    Qsort(a,l,i-1);
    Qsort(a,i+1,r);
    return;
}
int erfen(int *a,int x,int left,int right){
    if(left==right){
        if(a[left]==x)
            return left;
        else
            return -1;
    }
    int mid=(left+right)/2;
    if(x==a[mid])
        return mid;
    eif(x<=a[mid]&&x>=a[1])
    return erfen(a,x,left,mid);
    eif(x>=a[mid]&&x<=a[right])
    return erfen(a,x,mid+1,right);
    else
        return -1;
}
int spow(int x,int y){
    int ans=1;
    for(int i=1;i<=y;i++){
        ans=ans*x;
    }
    return ans;
}
ll zhuan(char *str,int n,int m){
    int len=strlen(str);
    int a[len+1];
    for(int i=0;i<len;i++){
        if(str[i]>='0'&&str[i]<='9')
            a[i]=str[i]-'0';
        else
            a[i]=str[i]-'A'+10;
    }
    int sum=0;
    for(int i=0;i<len;i++){
        a[i]=a[i]*spow(n,len-i-1);
        sum+=a[i];
    }
    char ss[1005];
    int nm=-1;
    while(sum){
        int u=sum%m;
        if(u<10){
            char c=u-0+'0';
            nm++;
            ss[nm]=c;
        }
        sum/=m;
    }
    ll ans=0;
    per(i,0,nm){
        ans=ans*10+(int)(ss[i]-'0');
    }
    return ans;
}
int main(){
    char str[1005];
    scanf("%s",str);
    int len=strlen(str);
    int p=0;
    rep(i,0,len-1){
        int cnt;
        if(str[i]>='0'&&str[i]<='9')
            cnt=str[i]-'0';
        else
            cnt=str[i]-'A'+10;
        p=max(p,cnt);
    }
    char str1[1005];
    scanf("%s",str1);
    int len1=strlen(str1);
    int q=0;
    rep(i,0,len1-1){
        int cnt;
        if(str1[i]>='0'&&str1[i]<='9')
            cnt=str1[i]-'0';
        else
            cnt=str1[i]-'A'+10;
        q=max(q,cnt);
    }
    int flag=0;
    rep(i,p+1,36){
        ll nm1=zhuan(str,i,10);
        rep(j,q+1,36){
            ll nm2=zhuan(str1,j,10);
            if(nm1==nm2){
                printf("%s (base %lld) = %s (base %lld)\n",str,i,str1,j);
                flag=1;
                break;
            }
        }
        if(flag==1)
            break;
    }
    if(flag==0){
        printf("%s is not equal to %s in any base 2..36\n",str,str1);
    }
    return 0;
}
