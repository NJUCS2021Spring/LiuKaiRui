#pragma once
#include<string>
#include<vector>
using namespace std;
class card
{
private:
	string word;                                    //����
	vector<string> paraphrase;                      //����
	vector<string> exsentence;                      //����
public:
	card(string word);
	void print();                                   //��ӡ��Ƭ
	void add_paraphrase(string paraphrase);         //�������
	void add_exsentence(string sentence);           //�������
};

