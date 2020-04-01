#include<iostream>
#include"q2.h"
#include"q3.h"
#include"q1.h"
using namespace std;

int main()
{
    cout<<"Lab 2: choose 1,2 or 3"<<endl;
    cout<<"1.  Does there exist q and r in A such that p=q+r"<<endl<<"2. Identify the position of the first '-1' in array"<<endl<<"3. Print pattern"<<endl;
    int a;
    cin>>a;
    int arr11[10000],size,sum;
    int arr22[10000];
    int n;
    int x,y,z;//flags for question1
    int temp;
    int i=0;
    if(a==1)
    {   
        cout<<"Enter size of array: "<<endl;
        cin>>size;
        cout<<"Enter array: "<<endl;
        for(int i=0;i<size;i++)
        cin>>arr11[i];
        cout<<"Enter sum: "<<endl;
        cin>>sum;

        x=sumarr1(arr11,size,sum);
        y=sumarr2(arr11,size,sum);
        z=sumarr3(arr11,size,sum);

        if(x==1)cout<<"Numbers found: logic 1"<<endl;
        else cout<<"Numbers not found: logic 1"<<endl;

        if(y==1)cout<<"Numbers found: logic 2"<<endl;
        else cout<<"Numbers not found: logic 2"<<endl;

        if(z==1)cout<<"Numbers found: logic 3"<<endl;
        else cout<<"Numbers not found: logic 3"<<endl;
        
    }
    else if (a==2)
    {   
        cout<<"Enter elements of array: "<<endl;
        cin>>arr22[i++];
        while(1)
        {
            cin>>temp;
            if(temp==0)
            break;
            else arr22[i++]=temp;
            
            
        }
        x=arr1(arr22);
        y=arr2(arr22);
        z=arr3(arr22);
        cout<<"Position of first '-1' is"<<endl;
        cout<<"Logic 1: "<<x+1<<endl;
        cout<<"Logic 2: "<<y<<endl;
        cout<<"Logic 3: "<<z+1<<endl;

    }
    else if(a==3)
    {
        cout<<"Enter number: "<<endl;
        cin>>n;
        cout<<"Pattern"<<endl;
        pattern1(n);
        cout<<endl;
        pattern2(n);
        cout<<endl;
        pattern3(n);
        cout<<endl;
        pattern4(n);
        cout<<endl;
        pattern5(n,0);
        cout<<endl;



    }
}