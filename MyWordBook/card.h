#pragma once
#include<string>
#include<vector>
using namespace std;
class card
{
private:
	string word;                                    //µ¥´Ê
	vector<string> paraphrase;                      //ÊÍÒå
	vector<string> exsentence;                      //Àı¾ä
public:
	card(string word);
	void print();                                   //´òÓ¡¿¨Æ¬
	void add_paraphrase(string paraphrase);         //Ìí¼ÓÊÍÒå
	void add_exsentence(string sentence);           //Ìí¼ÓÀı¾ä
};

