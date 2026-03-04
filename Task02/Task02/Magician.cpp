#include "Magician.h"

CMagician::CMagician(string name)
{
	m_sClassName = "Magician";
	m_sUserName = name;
}

void CMagician::Attack()
{
	printf("마법 화살을 쏩니다!\n");
}