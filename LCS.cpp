#include<bits/stdc++.h>
#include<string.h>

using namespace std;


int i,j,m,n,c[10][10];
char x[10],y[10]; int b[10][10];
vector <int> v;


void print(int i, int j){
    if(i==0 || j==0)
    	return;
    if(b[i][j]==0)
    {
        print(i-1, j-1);
        printf("%c", x[i-1]);
        v.push_back(1);
        //cout << v.size();
	}
    else if(b[i][j]==1)
        print(i-1,j);
    else
        print(i,j-1);
}
void lcs()
{
    m=strlen(x);
    n=strlen(y);

    for(i=0;i<=m;i++){
        c[i][0]=0;
    }

    for(i=0;i<=n;i++){
        c[0][i]=0;
    }

    for(i=1;i<=m;i++)
    for(j=1;j<=n;j++){
        if(x[i-1]==y[j-1]){
            c[i][j]=c[i-1][j-1]+1;
            b[i][j]=0;
        }
        else if(c[i-1][j]>=c[i][j-1]){
            c[i][j]=c[i-1][j];
            b[i][j]=1;
        }
        else{
            c[i][j]=c[i][j-1];
            b[i][j]=2;
        }
    }
}


int main(){
	printf("Enter 1st sequence:");
	scanf("%s",x);
	printf("Enter 2nd sequence:");
	scanf("%s",y);
	printf("\nThe Longest Common Subsequence is ");
	lcs();
    print(m,n);
    cout << "\n" << v.size();
    return 0;
}
