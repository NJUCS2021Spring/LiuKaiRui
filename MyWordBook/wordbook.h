#pragma once
#include "group.h"
class wordbook
{
private:
	vector<group> groups;
public:
	wordbook();
	void main_menu();                     //������
	void group_menu();                    //�������
	void creat_group();                   //�½�����
	void search();                        //��ѯ����
};

