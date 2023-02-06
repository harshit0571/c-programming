#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
int sum=0;
int count=0;
    vector<string> third={"ten", "eleven", "twelve", "thirteen", "four", "fifteen", "six", "seven", "eight", "nine"};
    vector<string> first={"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    vector<string> second={"", "one", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    while (n>0)
    {
        int i=n%10;
        count++;
        sum=sum*10 +i;

        n=n/10;
    }

    // 4321
    // 1234
int j;
    while(sum>0){
        if(count==4){
            j=sum%10;
            cout<<first[j]<<" "<<"thousand ";
            count--;
            sum=sum/10;
        }
        else if(count==3){
            j=sum%10;
            cout<<first[j]<<" "<<"hundred "; 
            count--;
            sum=sum/10;
        }
        else if(count==2){
            j=sum%10;
            if(j==1){
                sum=sum/10;
                j=sum%10;
                if(j==0 || j==1 || j==2 || j==3){
                    cout<<third[j];
                }
                else{
      cout<<first[j]<<"teen ";
                }
          
                sum=sum/10;
            }
            else if(j==0){
                sum=sum/10;
                j=sum%10;
                cout<<first[j];
                sum=sum/10;  
            }
            else{
                cout<<second[j]<<" ";
                sum=sum/10;
                j=sum%10;
                cout<<first[j];
                sum=sum/10;   
            }
        }
    }
}

