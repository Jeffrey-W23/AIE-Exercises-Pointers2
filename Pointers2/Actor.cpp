#include "Actor.h"
#include <iostream>

using namespace std;

Actor::Actor()
{
}

Actor::~Actor()
{
}

void Actor::SetHealth(int health)
{
	m_nHealth = health;
};

int Actor::GetHealth()
{
	return m_nHealth;
};

void Actor::SetName(char* name)
{
	int length = strlen(name);
	m_szName = new char[length + 1];
	strcpy(m_szName, name);
};

char* Actor::GetName()
{
	return m_szName;
};



//bug when the number guessed is 00 and you say lower.