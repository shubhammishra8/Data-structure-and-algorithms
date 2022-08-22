class Solution {
public:
  int sum(int n)
  {int a=0;
    while(n!=0)
    {a=a+(n%10);
     n=n/10;
      
    }
   return a;
  }
    int countEven(int num) {
        int count=0;
      for(int i=1;i<=num;i++)
        {
          if(sum(i)%2==0)
            count++;
        }
      return count;
    }
};