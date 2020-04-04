#include<iostream>
using namespace std;


void get_input(int profit[], int weight[], int &W, int &n)
{   
    profit[0]=0;
    weight[0]=0;
    
    cout<<"Enter number of objects: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"Enter profit and weight(separated by space) for object"<<i<<": ";
        cin>>profit[i]>>weight[i];
    }
    cout<<"Enter Max weight: ";
    cin>>W;
    
}

int knapsack(int M[][100], int profit[], int weight[], int W, int n)
{
    // int M[n+1][W+1];
    for(int i=0;i<=W;i++)
    {
        M[0][W]=0;
    }

    for(int i=1;i<=n;i++)
    {
        for(int w=0;w<=W;w++)
        {
            if(w<weight[i])
            M[i][w]=M[i-1][w];

            else
            M[i][w]=max(M[i-1][w], profit[i] + M[i-1][w-weight[i]]);
            
        }
    }
    int max_profit=M[n][W];

    return max_profit;
}

int main()
{   
    int profit[100], weight[100];
    int W;
    int n;
    int M[100][100];
    get_input(profit, weight, W, n);

    int max_profit=knapsack(M, profit, weight, W, n);

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=W;j++)
        {
            cout<<M[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"Maximum profit is "<<max_profit<<endl;
}