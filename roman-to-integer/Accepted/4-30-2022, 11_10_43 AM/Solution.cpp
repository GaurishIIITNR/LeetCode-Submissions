// https://leetcode.com/problems/roman-to-integer

class Solution {
public:
    int romanToInt(string s) {
        int sm=0;
       for(int i=0;i<s.length();i++){
       if(i<s.length()-1){  if(s[i]=='I'&&s[i+1]=='V')  {sm+=4; i++;}
         else if(s[i]=='I'&&s[i+1]=='X')  {sm+=9; i++; }
        else if(s[i]=='X'&&s[i+1]=='L')  {sm+=40; i++;}
        else if(s[i]=='X'&&s[i+1]=='C') { sm+=90;  i++; }
        else if(s[i]=='C'&&s[i+1]=='D')  {sm+=400; i++;}
        else if(s[i]=='C'&&s[i+1]=='M') { sm+=900; i++; }
                else if(s[i]=='I')sm+=1;
                else if(s[i]=='V')sm+=5;
                else if(s[i]=='X')sm+=10;
                else if(s[i]=='L')sm+=50;
                else if(s[i]=='C')sm+=100;
                else if(s[i]=='D')sm+=500;
               else if(s[i]=='M')sm+=1000;}
           else {
               if(s[i]=='I')sm+=1;
                if(s[i]=='V')sm+=5;
                if(s[i]=='X')sm+=10;
                if(s[i]=='L')sm+=50;
                if(s[i]=='C')sm+=100;
                if(s[i]=='D')sm+=500;
               if(s[i]=='M')sm+=1000;
           }
       }
        return sm;
    }
};