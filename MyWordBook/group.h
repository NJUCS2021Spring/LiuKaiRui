#pragma once
#include "card.h"
class group
{
private:
	int id;                                 //分组ID
	vector<card> cards;                     //单词卡片
	vector<string> words;                   //组内单词
	string gist;                            //分组依据
public:
	group(string gist);
	void add_word(string word);             //添加单词
	void del_word(string word);             //删除单词
};

