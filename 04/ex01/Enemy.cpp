#include "Enemy.hpp"

/* Constructors and destructors */

Enemy::Enemy(int hp, std::string const & type) :
_type(type), _hp(hp)
{

}

Enemy::Enemy(const Enemy & other) :
_type(other._type), _hp(other._hp)
{

}


Enemy::~Enemy()
{

}


/* Operators overloads */

Enemy & Enemy::operator=(const Enemy & other)
{
    if (this != &other)
    {
        this->_type = other._type;
        this->_hp = other._hp;
    }
    return (*this);
}


/* Other member functions */

std::string const Enemy::getType() const
{
    return (this->_type);
}

int Enemy::getHP() const
{
    return (this->_hp);
}

void Enemy::setType( std::string type)
{
    this->_type = type;
}

void Enemy::setHP(int hp)
{
    this->_hp = hp;
}

void Enemy::takeDamage(int damage)
{
    this->_hp -= damage;
    if (this->_hp <= 0)
        delete this;
}