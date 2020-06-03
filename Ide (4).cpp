#include<iostream>
using namespace std;
void swap(char *,char *);

int main() {
	int n,t;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    getchar();
	    char S[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>S[i];
	        
	    for(int i=0;(i<n-1);i=i+2)
	       swap(&S[i],&S[i+1]);

	   int x,y;
	   for(int i=0;i<n;i++)
	   {
	       x=S[i];
	       y=(97+(122-x));
	       printf("%c",y);
	   }
	   printf("\n");
	}

	return 0;
}
void swap(char *a,char *b)
	{
	    char temp;
	    temp=*a;
	    *a=*b;
	    *b=temp;
	}
