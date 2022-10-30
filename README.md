# Howl Of Iron

This project was mmade by 16Gears. This game have 5 programmers in it. In this project I worked on IA and Gameplay. 

Some stuff that I have done in it: 

## Waypoint system:

I develop with one mate a system for IA. When an enemy arrive a call a function of the waypoint. We can create diferents actions for the IA in the Waypoint, like wait some seconds or play an animation, after this the enemy will continue with his route. This allowed us to create many diferents behavior and even Design departanment can create his owns task on blueprints.
</br>

## Enemies Behavior:

In tihs game we have three types of enemies. I developed the "Hunter". It have a 3 states that manage the behavior of this enemy. His first state is Patrol, in it, he follows the route around a square, when he see or heard something he start the alert State where he increase his movement speed and also have more vision range. When he completly see our character it enter in combat mode, in it, he change his movement set and use her diferents weapons depending on the distance or the inmunity state.
When our main character is near he use a FlameThrower, in a middle distance he use a ShotGun and when Vincent is too far our Hunter will use a electric projectile, if it hit will reduce the movement speed of our main character.


## Combat & Gameplay 

In this game we play as Vincent Volk a mechanical Werewolf. We use Gameplay Ability System to develop our combat. We created diferents abilities for each hit of our character, this can allow us to make diferents powers in each hit in our combo system, also we create diferents state abilities that allow us the behaviors mention in the Section "Enemies Behavior" like Combat state or Inmunity State. More stuff was a long list of task than we develop to allow Design departament create a difficult abilities or actions in a easy way in Blueprints.
After this project I can say I have a very good experience using Gameplay Ability System and I'm looking forward to start a new project using it.
