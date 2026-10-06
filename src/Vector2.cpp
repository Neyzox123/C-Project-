#include <include/Vector2.hpp>

int main() {
    // vector 2 functions declarations

    Vector2 vector2;
    Vector2 position;
    Vector2 velocity;
    Vector2 newPosition;
    Vector2 newVelocity;
    Vector2 acceleration;
    float dt = 0.5f;
    float ax = 2.0f;
    float ay = 4.0f;
    acceleration.y = -9.81f;

    position.x = 2;
    position.y = 3;
    velocity.x = 4;
    velocity.y = 1;

    
    newPosition.x = velocity.x + position.x * dt;
    newPosition.y = velocity.y + position.y * dt;

    newVelocity.x = velocity.x + ax * dt;
    newVelocity.y = velocity.y + ay * dt;


    // variables assignements

    vector2.x = 5;
    vector2.y = 3;


    
}