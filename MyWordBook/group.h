#pragma once
#include "card.h"
class group
{
private:
	int id;                                 //����ID
	vector<card> cards;                     //���ʿ�Ƭ
	vector<string> words;                   //���ڵ���
	string gist;                            //��������
public:
	group(string gist);
	void add_word(string word);             //��ӵ���
	void del_word(string word);             //ɾ������
};

