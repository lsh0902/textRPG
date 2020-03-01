#pragma once
//메인헤더

#include <iostream>
#include <vector>
#include <list>
#include <unordered_map> //일반 맵보다 훨 빠름
#include <string> //스트링 클래스 



using namespace std;

#include"define.h"
#include"Flag.h"
template<typename T>
T Input()
{
	T data;
	cin >> data;

	if (cin.fail()) {
		cin.clear();
		cin.ignore(1024, '\n');
		return 0;
	}

	return data;
}

template<typename T>
void Safe_Del_Veclist(T& p)
{
	typename T::iterator iter;
	typename T::iterator iterEnd = p.end();

	for (iter = p.begin(); iter != iterEnd; ++iter) {
		SAFE_DELETE(*iter);
	}

	p.clear();
}

template<typename T>
void Safe_Del_Map(T& p)
{
	typename 	T::iterator iter;
	typename T::iterator iterEnd = p.end();

	for (iter = p.begin(); iter != iterEnd; ++iter) {
		SAFE_DELETE(iter->second); //first가 key. second가 value.
	}

	p.clear();
}