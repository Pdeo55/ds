class Solution {
public:
    string removeOccurrences(string s, string part) {
        int pos = s.find(part);
        //iterate while we dont get the no position like string part is not present in the string
        while(pos != string::npos) {
            s.erase(pos, part.length());  //pos = starting position of string & 2nd arg is the lenth of string to be erased
            pos = s.find(part); //again find substring in that string
        }
        return s;
    }
};