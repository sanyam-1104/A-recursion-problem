#include <iostream>
using namespace std;

int solve(int x)
{
    if(x<4)
      return 0;
      
    return (x-2)/2 + solve(x-2);  
}

int main()
{
    int t=11;
    while(t--){
        int x;
        cin>>x;
        cout<<solve(x)<<endl;
    }

    return 0;
}

