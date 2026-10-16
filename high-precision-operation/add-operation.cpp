#include<iostream>
#include<string>
#include<algorithm>
#include<cstdlib>
int main()
{
    std::string op1,op2;
    std::cin>>op1>>op2;
    int a1[200]={0},a2[200]={0},a3[200]={0};
    for(int i=0;i<op1.size();i++)
    {
        a1[op1.size()-i-1]=op1[i]-'0';
    }
     for(int j=0;j<op2.size();j++)
    {
        a2[op2.size()-j-1]=op2[j]-'0';
    }
    int max_len=std::max(op1.size(),op2.size());
    for(int k=0;k<max_len;k++)
    {
        a3[k]=a1[k]+a2[k];
    }
    for(int i=0;i<max_len;i++)
    {
        if(a3[i]>=10)
        {
            a3[i+1]=a3[i+1]+a3[i]/10;
            a3[i]=a3[i]%10;
        }
    }
    if(a3[max_len]!=0){max_len++;}
    for(int i=max_len-1;i>=0;i--)
    {
        std::cout<<a3[i];
    }
    std::cout<<std::endl;
    system("pause");
    return 0;
}