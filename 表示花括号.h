/***************************
今日头条2017笔试题
交卷30分钟后终于做出来了
题目：表示花括号
[[[[]]]][][][][]

****************************/
#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main(){
	string str;
	cin >> str;
	int i = 0, n = str.size();
	int max = 0;
	while(i < n){
		int start = i, l = 0;
		while(start + 1 < n && str[start] == str[start + 1]){
			l++;
			start++;
		}
		if(max < l) max = l;
		i = i + (start - i + 1) * 2;
	}
	i = 0; n = str.size();
	while(i < n){
		int  l = 0;
		while(i + 1 < n && str[i] == str[i + 1]){
			l++;
			i++;
		}
		l++;
		for(int j = 0; j < l; j++){
			string str;
			for(int k = 0; k < (max - j)*2 + 1; k++){
				str += '-';
			}
			str = "+" + str + "+";
			if((max - j )*2 + 1 < 2 * max + 1){
				str = "|" + str + "|";
			}
			int k = (max - j)* 2 + 3;
			while(k < 2 * max + 1){
				str = " " + str;
				k += 2;
			}
			cout << str<<endl;;
		}
		for(int j = l; j <= l; j++){
			string str = "";
			for(int k = 0; k < (max - l + 1)*2+1; k++){
				str += " ";
			}
			str ="|" + str + "|";
			while(str.size() <= 2 * max + 1){
				str = " " + str + " ";
			}
			cout <<str<<endl;
		}
		cout << endl;
		for(int j = l; j <= l; j++){
			string str = "";
			for(int k = 0; k < (max - l + 1)*2+1; k++){
				str += " ";
			}
			str ="|" + str + "|";
			while(str.size() <= 2 * max + 1){
				str = " " + str + " ";
			}
			cout <<str<<endl;
		}
		for(int j = l - 1; j >= 0; j--){
			string str;
			for(int k = 0; k < (max - j)*2 + 1; k++){
				str += '-';
			}
			str = "+" + str + "+";
			if((max - j )*2 + 1 < 2 * max + 1){
				str = "|" + str + "|";
			}
			int k = (max - j)* 2 + 3;
			while(k < 2 * max + 1){
				str = " " + str;
				k += 2;
			}
			cout << str<<endl;;
		}
		i += l + 1;
	}
}
