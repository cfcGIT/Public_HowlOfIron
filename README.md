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


## Merge Tool

During this project we have a problem with the optimization of the game. Our enviroment was procedural and very small pieces, in our first map we have a 40000 actos in scene. I develop with other programmer a tool that allow us to group and merge actors in the scene. We inherit from BoxTrigger and make some filters to select actors.
The first method is select all that is inside the trigger, the second method filters actor by staticMesh, it only select the actors that have the mesh filter, also we upgrade this filter became an array filter and use it with two or more static mesh. The third method is similar than the second one, but it filter by Material of the StaticMesh, also it was upgraded a few days after with the array filter. The last mode allow us to create Instanciated Actors, it create an Actor with the Instanced Actor component and copy the transform of the selections to the component.
After two weeks with this tool, we reduced the actors in our map from 40000 to only 7000 actors in editor, with this we upgrade our performance around 10ms and allow us to reach the 60 fps ingame.


## Perception System

We created our own perception System. During two weeks with other programmer we research and try to create a good system. We create a modular system that allow to create diferent types of perception that increase the value of the detection. We created 2 types of components: DetectorActorComponent and DetectableActorComponent, with this we can create diferents types of detectable actors like the player or even the dead bodies of the other enemies that aware others of the position of the player. The first module we created was the vision detection, in it, first we calculate the distance between the player and the enemy, if the player is near enough, it will raycast to check if it can see it. Other perception is NearPerception, it increase the detecion value if the player is in range, we use it to dectect the player when is in the enemy back. Other type is SoundDetection, when the player do some action or ability, it call a detector actor if it is in range, and send to it the increase value from the sound.
Also each type of detection have a weight to allow Design departament to change the values when they want.



