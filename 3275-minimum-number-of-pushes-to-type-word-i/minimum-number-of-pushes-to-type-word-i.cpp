class Solution {
public:
    int minimumPushes(string word) {
        int count=0;
        int length=word.size();
        int value=1;
      while(length>0)
      {
        cout<<value<<" ";
        if(length>8)
        {
            count+=8*value;
        }
        else 
        {
       count+=length*value;
        }
        length=length-8;
        
        cout<<count<<" ";
        value++;
      }
      return count;
    }
};