#include<iostream>
using namespace std;
#define ll long long int
#define quick ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void sol()
{
   ll n;
    std::cin>>n;
 
  cout<<n<<" ";
  while(n!=1){
    
    if(n%2==1)
    {n=3*n+1;
      std::cout<<n<<" ";
      
    }
    else
    {
      n=n/2;
     std::cout<<n<<" ";
        cout<<endl;
    }
  }
  
}   

int main()
{
      quick
   
      
  
           sol();
     return 0;
}
