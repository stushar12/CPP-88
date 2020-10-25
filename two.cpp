#include<bits/stdc++.h>
using namespace std;
int equlibrium(int arr[],int n)
{
    int sum=0,lsum=0;
    if(n==1)
    return n;
    else
    {
        for(int i=0;i<n;i++)
        {
         sum=sum+arr[i];   
        }
        for(int i=0;i<n;i++)
        {
            if(lsum==sum-arr[i])
            {
                return i+1;
            }
            lsum=lsum+arr[i];
            sum=sum-arr[i];
        }
    }
    return -1;
}
int main()
 {
     int p;
     cin>>p;
     while(p--)
     {
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }
     int x=equlibrium(arr,n);
     cout<<x<<endl;
	
}
}