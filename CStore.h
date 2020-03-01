#pragma once
#include"value.h"
class CStore
{
public:
	CStore();
	~CStore();


	enum ItemType	{
		IT_W,
		IT_A
	};

public:

	int outputmenu()
	{
		cout << "1. ¹«±â " << endl;
		int menu;
		cin >> menu;

		if (cin.fail()) {
			cin.clear();
			cin.ignore(1024, '\n');
			return 0;
		}
		return menu;
	}
};

