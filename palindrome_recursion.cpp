#include<bits/stdc++.h>
using namespace std;
int reverse(string *str,int f,int l){
    
    if(f>l){
        return 0;
    }
    swap(str[f],str[l]);
    reverse(str,f+1,l-1);
}
int main(){
    string str="madam";
    string dup=str;
    reverse(&str,0,str.length()-1);
    // if(str==dup){
    //     cout << "This is palindrome";
    // }
    // else{
    //     cout << "This is not a Palindrome";
    // }
    cout << str ;
    return 0;
}

