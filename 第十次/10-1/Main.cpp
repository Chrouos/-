#include<iostream>
#include<sstream>
#include<string>
using namespace std;

void printStringArray(string word[], int size) {
	cout << word[size] << endl;
}

int main() {

	//輸入句子
	string text;
	getline(cin, text);

	//逐項存入一維string陣列中
	stringstream  ssText(text);
	string word[10];

	for (int i = 0; !ss.eof(); i++) {
		ss >> word[i];
		printStringArray(word, i);
	}

	//計算字數
	int size ＝ text.length();

		/* 
	（字串，字串初始位置，字串個數）
	text.append("!!!", 0, 3);

	（字串，從哪裡開始替換，替換的字串個數）
	text.assign(text + "!!!", 0, size + 3);

	（從哪裡開始插入，字串）
	text.insert(size, "!!!");
	cout << text << endl;

	*/

	return 0;

}