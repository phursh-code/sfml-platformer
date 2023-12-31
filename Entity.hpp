/* A class that represents an entity, or an element in game that is directly involved with gameplay
*/
#include <SFML/System/Vector2.hpp>

class Entity
{
public:
	void setVelocity(sf::Vector2f velocity);
	void setVelocity(float vx, float vy);
	sf::Vector2f getVelocity() const;
private:
	sf::Vector2f mVelocity;
};