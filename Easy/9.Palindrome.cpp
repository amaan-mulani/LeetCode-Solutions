class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x<0 || (x%10==0 && x !=0))
        {
            return false;
        }

        long long reversed=0;
        int original=x;

        //reversing the number
        while(x>0)
        {
            int digit = x % 10;// gets the last digit of the number
            reversed = reversed*10 + digit; //add digit to the reverse number
            x=x/10;     //removes the last digit
        }
        //if reversed number = original, then its a palindrome
        return original == reversed;



    }
};