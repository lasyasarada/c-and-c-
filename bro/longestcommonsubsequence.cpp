#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
void lcs(char *x,char *y,int m,int n)
{
    //int i,j;
    int l[m+1][n+1];
    for(int i=0;i<=m;i++){
        for (int j=0;j<=n;j++){
            if(i==0||j==0){
                l[i][j]=0;
            }
            else if(x[i-1]==y[j-1]){
                l[i][j]=l[i-1][j-1]+1;
            }
            else
                l[i][j]=max(l[i][j-1],l[i-1][j]);
        }
    }
    //cout<<l[m][n];
    int index=l[m][n];
    char res[index+1];

    res[index]='\0';
    int i=m;
    int j=n;
    while(i>0&&j>0){
        if(x[i-1]==y[j-1]){
            res[index-1]=x[i-1];
            i--;j--;index--;
        }
        else if(l[i-1][j]>l[i][j-1]){
            i--;
        }
        else
            j--;
    }
    cout<<res;
    //return *res;
}


int main(){
    char x[100],y[100];
    cin>>x>>y;
    int m=strlen(x);
    int n=strlen(y);
    lcs(x,y,m,n);
    //cout<<"Longest common subsequence is ";
    return 0;
}
/*
#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
void lcs( char *x, char *y, int m, int n )
{
    int L[m+1][n+1];
    for (int i=0; i<=m; i++)
    {
        for (int j=0; j<=n; j++)
        {
        if (i == 0 || j == 0)
            L[i][j] = 0;
        else if (X[i-1] == Y[j-1])
            L[i][j] = L[i-1][j-1] + 1;
        else
            L[i][j] = max(L[i-1][j], L[i][j-1]);
        }
    }
    int index = L[m][n];
    char lcs[index+1];
    lcs[index] = '\0';
    int i = m, j = n;
    while (i > 0 && j > 0)
    {
        if (X[i-1] == Y[j-1])
        {
            lcs[index-1] = X[i-1];
            i--; j--; index--;
        }
        else if (L[i-1][j] > L[i][j-1])
            i--;
        else
            j--;
    }
    cout << "LCS of " << X << " and " << Y << " is " << lcs;
}
int main()
{
    char x[100],y[100];
    cin>>x>>y;
    int m=strlen(x);
    int n=strlen(y);
    lcs(x, y, m, n);
    return 0;
}*/
