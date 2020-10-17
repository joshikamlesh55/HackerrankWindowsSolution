#include <iostream>
using namespace std;
 
// To execute C++, please define "int main()"
int main()
{
    int test_cases;
    cin>>test_cases;
    while(test_cases--){
      int n;
      cin>>n;
      // 3*k + 5*m + 7*x
      // 10 3 + 3 + 3 + (1)
      // 3 + 3+ 3+ 3+ 2
      if(n%3==0){
        cout<<n/3<<" 0 0\n";
      } else if(n%3==2){
        n = n - 5;
        if(n<0) {
          cout<<-1<<endl;
      } else cout<<n/3<<" 1 0\n";
    }else if(n%3==1){ n = n - 7; 
         if(n<0) cout<<-1<<endl;
                   else { 
                    cout<<n/3<<" 0 1"<<endl; 
                     }
                    }
}
  return 0;
}
