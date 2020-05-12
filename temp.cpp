#include <bits/stdc++.h>
#include <string>

using namespace std;

// Hackerrank Special palindrome again Solution
// Runs in O(n)
// ======== SOLUTION =========
long substrCount(int n, string s) {
    
    string cs;
    long ep_count;
    char curr_char;
    const char* s_chars;
    vector<int> ocurr(n);

    
    curr_char= '\0';
    s_chars =  s.c_str();
    int str_index = -1;
    for(int i = 0; i < n ; i++){
        if(i == 0 || s_chars[i] != curr_char){
            str_index++;
            curr_char = s_chars[i];
            cs.append(1, curr_char);
        }
		cout<<cs<<"\n";
        ocurr[ str_index ]++;
    }    
    cout<<"First for"<<"\n";
    for(int i = 0; i < cs.size(); i++){
        ep_count+=(ocurr[i]*(ocurr[i]+1))/2;
    }
    cout<<"Second for"<<"\n";
    for(int i = 1; i < cs.size()-1 ; i++){
        if( ocurr[i] == 1  && cs[i-1] == cs[i+1] ){
                ep_count+= min(ocurr[i-1], ocurr[i+1]);
        }
    }
	cout<<"Return"<<"\n";
    return ep_count; 


}


// ======== HACKERRANK JUNK =========
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    long result = substrCount(n, s);
    
   // isSpecialPalindrome_test();
    

    cout<<"Result: " << result << "\n";

    return 0;
}

