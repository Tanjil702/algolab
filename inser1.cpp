#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number of array :";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }// insertion sort 
    for(int i=1;i<n;i++){
        int temp=a[i];
        int j=i-1;
        while(j>=0 && a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    cout<<"insertion sort :"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i] <<" ";
    }
    cout<<endl; 
    return 0; 

}