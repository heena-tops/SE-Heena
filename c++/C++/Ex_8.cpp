#include"iostream"
using namespace std;

main()
{
	int i,j,n=1;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			cout<<" "<<n<<" ";
			n+=1;
		}
		cout<<"\n";
	}
}
