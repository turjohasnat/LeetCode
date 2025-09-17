//C++ Solution:

//Runtime: 0 ms
//Memory Usage: 8.5 MB

class Solution {
public:
    string reversePrefix(string word, char ch) {
        int index = -1;
        index = word.find(ch);

        if(index == -1)
            return word;

        stack<char> st;
        for(int i = 0; i <= index; i++)
            st.push(word[i]);

        string result;
        while(!st.empty()){
            result += st.top();
            st.pop();
        }

        result += word.substr(index+1);
        return result;
    }
};
