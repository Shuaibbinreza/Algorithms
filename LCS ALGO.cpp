#include<bits/stdc++.h>
#include<string.h>

using namespace std;


int i,flen, llen, j,c[20][20];
char x[20],y[20]; int b[20][20];
vector <int> v;

void countandprint(int i, int j){
    if(i==0 || j==0)
    	return;

    if(b[i][j]==0)
    {
        countandprint(i-1, j-1);
        printf("%c", x[i-1]);
        v.push_back(1);
	}

    else if(b[i][j]==1)
        countandprint(i-1,j);

    else
        countandprint(i,j-1);
}

void LCS()
{
    flen = strlen(x);
    llen = strlen(y);

    for(i=0; i <= flen; i++){
        c[i][0] = 0;
    }

    for(i=0; i <= llen; i++){
        c[0][i] = 0;
    }

    for(i = 1; i <= flen; i++){

        for(j=1; j <= llen; j++){

            if(x[i-1] == y[j-1]){

                c[i][j] = c[i-1][j-1]+1;
                b[i][j] = 0;
            }
            else if(c[i-1][j] >= c[i][j-1]){

                c[i][j] = c[i-1][j];
                b[i][j] = 1;
            }
            else{
                c[i][j] = c[i][j-1];
                b[i][j] = 2;
            }
        }
    }

}

int main(){
	printf("Enter String 1: ");
	scanf("%s",x);

	printf("Enter String 2: ");
	scanf("%s",y);

	printf("\nThe Longest Common Subsequence is ");

	LCS();

    countandprint(flen, llen);
    cout << "\n" << v.size();
    return 0;
}

