#include"iostream"
using namespace std;

main()
{
	int i,j,n=65;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			cout<<" "<<char(n)<<" ";
			n+=1;
		}
		cout<<"\n";
	}
}
