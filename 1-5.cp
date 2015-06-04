#include <iostream>
#include <string>
using namespace std;
void replace(string str){
	int i = 0 ;
	int count = 0;
	char nstr[256];
	while(str[i]!='\0'){
		if(str[i] != ' ') nstr[i+count*2] = str[i];
		else {  
			nstr[i+count*2] = '%';
            nstr[i+count*2+1] ='2';
            nstr[i+count*2+2] ='0';
            count++;
        }
        i++;
	}
	cout<<count<<endl;
	cout<<nstr<<endl;
}

int main(){
//string A ="there is bird in my";
	string A;
	cin >> A;
	replace(A);
	return 0;
}