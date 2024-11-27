#include <string>
#include <iostream>

class Zombie{

private :
	std::string	name;

public :
	void	Announce(void);
	void	SetName(std::string name);

	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);

};

Zombie*	zombieHorde(int N, std::string name);
