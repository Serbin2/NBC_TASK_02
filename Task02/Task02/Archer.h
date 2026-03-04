#pragma once
#include "Player.h"


class CArcher : public IPlayer
{
public:

	CArcher(string name);
	virtual ~CArcher() {};

	void Attack() override;

private:

};
