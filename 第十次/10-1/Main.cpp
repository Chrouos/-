#include<iostream>
#include<sstream>
#include<string>
using namespace std;

void printStringArray(string word[], int size) {
	int i = 0; //計數器 初值
	while (word[i] != "\0") {
		cout << word[i] << endl;
		i++;
	}
	cout << "Length:" << size;
}

int main() {

	//輸入句子
	string text;
	getline(cin, text);

	//逐項存入一維string陣列中
	stringstream  ssText(text);
	string word[10];

	int i = 0;	//計數器 初值
	while (!ssText.eof()) {
		ssText >> word[i++]; //此為先i後++
	}

	//計算字數
	int size;
	size = text.length();

	//輸出
	printStringArray(word, size);

}