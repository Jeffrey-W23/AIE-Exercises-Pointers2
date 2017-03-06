#pragma once

class Actor
{
public:
	Actor();
	~Actor();

	// Getter and setter for health
	void SetHealth(int health);
	int GetHealth();

	// Getter and setter for name
	void SetName(char* name);
	char* GetName();

protected:
	char* m_szName;
	int m_nHealth;
};
