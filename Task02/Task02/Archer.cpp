#include "Archer.h"

CArcher::CArcher(string name)
{
	m_sClassName = "Archer";
	m_sUserName = name;
}

void CArcher::Attack()
{
	printf("활을 당겨 발사합니다!\n");
}

