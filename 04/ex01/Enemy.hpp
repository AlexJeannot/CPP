#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>
#include <string>

class Enemy
{
    private:
        std::string _type;
        int _hp;
    public:
        /* Constructors and destructors */
        Enemy(int hp, std::string const & type);
        Enemy(const Enemy & other);
        virtual ~Enemy();

        /* Operators overloads */
        Enemy & operator=(const Enemy & other);

        /* Other member functions */
        std::string const getType() const;
        int getHP() const;
        void setType( std::string type);
        void setHP(int hp);
        virtual void takeDamage(int damage);
};

#endif