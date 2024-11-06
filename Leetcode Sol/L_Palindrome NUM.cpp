#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        string s;
        cin>>s;
        bool ans=true;
        int j=s.size()-1;
        int i=0;
        while(i<=j)
        {
            if(s[i]!=s[j])
            {
                ans=false;
                break;
            }
            else
            {
                i++;
                j--;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
