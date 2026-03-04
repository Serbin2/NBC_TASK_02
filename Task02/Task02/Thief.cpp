#include "Thief.h"

CThief::CThief(string name)
{
	m_sClassName = "Thief";
	m_sUserName = name;
}

void CThief::Attack()
{
	cout << "단검으로 빠르게 찌릅니다!" << endl;
}