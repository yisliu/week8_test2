#include <iostream>
#include <string>
using namespace std;
bool pal(string str){
  for(int i = 0; i<str.length(); i++){
    // for(int j = str.length(); j>=1; j-i){
    int j = str.length()-1-i;
    if(str[i]==str[j]){
        continue;
      }
    return false;
    // }
  }
  return true;
}

int main() {
  int n;
  cin>>n;
  string str[n];
  /*
  n_lines = ? e.g 10
  arr_strings = string[10]
  loop: input -> arr_strings

  loop: arr_strings[0, ... 9]
        s_line = arr_strings[i]
        if(is_pal(s_line)) yes: no

  method: is_pal(str) : boolean
  
    */
  for(int i = 0; i<n; i++){
    cin>>str[i];
  }
  for(int i = 0; i<n; i++){
    string line = str[i];
    if(pal(line)){
      cout<<"yes"<<endl;
      continue;
    }
    cout<<"no"<<endl;
  }
  // for(int i = 0; i<n; i++){
  //   cin>>str;
  //   // for(int j = 0; j<str.length(); j++){
  //   //   for(int k = str.length(); k>0; k--){
  //   //     if(str[i]==str[j]){
  //   //       //running 7 times?
  //   //       //but is not asking for input until the for loops inside are done.
  //   //       cout<<"l ";
  //   //       continue;
  //   //     }
  //   //     cout<<" lolz";
  //   //     c=1;
  //   //     break;
  //   //   }
  //   char a, b;
  //   int j = 0;
  //   while(j<=str.length()){
  //     // cout<<str;
  //     a = str[j], b = str.length()-1-j;
  //     //l l
  //     if(a==b){
  //       cout<<str;
  //       continue;
  //     }

  //     // cout<<j<<b;
  //     // c=1;
  //     // break;
  //     else{
  //       // cout<<j;
  //       c=1;
  //       break;
  //     }
  //     j++;
  //   }
  //   }
  //   // char a, b;
  //   // int j = 0;
  //   // while(j<str.length()){
  //   //   // cout<<str;
  //   //   a = str[j], b = str.length()-1-j;
  //   //   if(a==b){
  //   //     cout<<str;
  //   //     j++;
  //   //     continue;
  //   //   }

  //   //   cout<<j<<b;
  //   //   c=1;
  //   //   break;
  //   // }
  //   if(c==1)
  // {
  //   cout<<"no";
  // }  // for(int i = 0; i<n; i++){
    
  // // }
  // else{
  //   cout<<"yes";
  // }
}
  // for(int i = 0; i<n; i++){
  //   // for(int j = 0; j<str[i].length(); j++){
  //   // int j = 0;
  //   // while(j<=str[i].length()){
  //   //   j++;
  //   //   char a = str-[i].length()-, b = str[i].length()-j;
  //   //   if(a==b){
  //   //     cout<<b<<"l";
  //   //     continue;
  //   //   }
  //   //   c=1;
  //   //   break;
  //   // }
  //   char a = i, b = str[i].length()-i;
  //   if(a == b){
  //     cout<<"l";
  //     continue;
  //   }
  //   c = 1;
  // }
//}