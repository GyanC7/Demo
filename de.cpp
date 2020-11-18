#include<bits/stdc++.h>
#include<string>
#include<math.h>
#include<vector>
#include<iterator>
#include<numeric>
#include<set>
#include<map>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	for(i=1;i<n;i++){
        if(i%2==1){
            printf("I hate  that ");
        }
        else{
            printf("I love  that ");
        }
    }
    if(n%2==1){
        printf("I hate it\n");
    }
    if(n%2==0){
        printf("I love it\n");
    }
    return 0;
	
	

}
