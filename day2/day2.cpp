#include<iostream>
using namespace std;
int main(){
    string s = "AnkitaSuman";
    for(int i =0;s[i]!='\0';i++){
        if(isupper(s[i])){
            do{
                cout<<s[i];
                i++;
            }while(!isupper(s[i]));
        }
	i--;
    cout<<endl;
    }
    return 0;
}
