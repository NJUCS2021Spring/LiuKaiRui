#pragma once
#include "group.h"
class wordbook
{
private:
	vector<group> groups;
public:
	wordbook();
	void main_menu();                     //主界面
	void group_menu();                    //分组界面
	void creat_group();                   //新建分组
	void search();                        //查询分组
};

