class Solution {
public:
    int countDigit(long long int n)
{
    if (n/10 == 0)
        return 1;
    return 1 + countDigit(n / 10);
}
    bool helper(string n1, string n2, string rem)
    {
        if(rem=="")
            return true;
        if(rem[0]=='0'&&rem.size()>1)
            return false;
            

        long long int m1=stoll(n1);
        long long int m2=stoll(n2);
        long long int tt=m1+m2;
        int d=countDigit(tt);
        if(rem.size()>=d)
        {
            
            string h=rem.substr(0,d);
           if(stoll(h)==tt) 
           {if(helper(n2,h,rem.substr(d)))
                   return true;}
        }
        else
        {
            return false;
        }
        return false;
    }
    bool isAdditiveNumber(string num){
        
        for(int i=1;i<num.size()-1;i++)
        {
            string n1=num.substr(0,i);
            for(int j=1;j<num.size()-i;j++)
            {
                string n2=num.substr(i,j);
                string b=num.substr(j+i);
                if((n1.size()>1&&n1[0]=='0')||(n2.size()>1&&n2[0]=='0'))
                {
                    
                }
                else
                {if(b!=""&&helper(n1,n2,b))
                    return true;}
            }
        }
        return false;
    }
};