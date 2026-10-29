# *Deadline is 11月30日*



* *first make the hosting/joining system with the local listen server*
* *then add EOS, if network access getting restricted due to firewall*



* *use Unreal Engine's "Chooser" plugin to create directional hit reactions (https://www.youtube.com/watch?v=d6icw1-KPwI)*
* *body parts dismantling (https://www.youtube.com/watch?v=A4LkOIYMXhQ)*
* *seamless gameplay to cinematic action blending (https://www.youtube.com/watch?v=buVZ7-0NX94)*
* *use ragdoll when got hit (or physical animation https://www.youtube.com/watch?v=46NfgXlnCzM)*
* *in ai npcs and player characters, add the functionality that if somebody comes in their trigger area, they will rotate their faces and look at them slowly*
* *can create animation without mocap using free plugin (https://www.youtube.com/watch?v=mkzj4lvXgBM)*
* *if possible, make the system that after the fight, the player can pickup the body parts (torn off from them during fight) and put them back on their place with some animation like (https://www.youtube.com/watch?v=-QZsOFUHLq8), this can act as healing*
* with this flare gun "https://www.fab.com/listings/26589af1-f7ea-497f-8142-02ae2924d4c1" player can light up dark places. the final output lightning should look like the ending scene of Jurassic world rebirth
* Add motion matching (also for the correct hit reaction \& transitioning smoothly from ragdoll to animation)

  * https://www.youtube.com/watch?v=UlNqYWuXcTw\&list=PLzdmunzFk\_kYAicjgFfYDRdr755C6eRsP\&index=1
  * https://www.youtube.com/watch?v=zfEZo1oz\_xI
  * https://www.youtube.com/watch?v=-r4nafTJI5c\&list=PLSCf9vYpqk3O3H-vOqPDVJDUZM4k0zSFz\&index=1
  * add ***Multicharacter Motion Matching***

    * https://youtu.be/UP3zWCMPn3E?si=EhoQ8VfCodyTEF\_p\&t=217

      * to use it just migrate the sample to our project

        * or understand it:

          * https://www.youtube.com/watch?v=3\_gsPYqBB84



* *action controls: Controller*
* *input combinations for attack and also input for blocking an attack*
* *2 kinds of cameras, normal \& target lock*
* *all of the animations required (including martial art attacks, weapon, etc)*
* <i>~~when created npc, add the icharacter interface to it, otherwise it will not come up in the contextual interaction search~~</i>
* combo input (player intended attack not performed by the dynamic attack selector)



### *TODO:*

* add the handle defeat logic
* make one let hopping animations and assign them in the Walk State in ABP\_Tommy\_Combat
* fix the trace start, end, radius for each attack
* in the FindBestContextualTarget function, remove the filter that the target should be Idle, its not necessary, otherwise nobody will be able to attack or contextual counter
* during the ANS\_AttactWindow, instead of sending bone name in the Trace Socket Name, send actual socket names after creating respective sockets in the skeletal mesh
* currently camera shake is implemented the wrong way, its shaking the attack as well. fix it.
* current spectating implementation is a work around. implement it later using Spectator pawn.
* stop movement and rotation while attacking
* change actors hit this window to body parts hit this window, allowing to hit same character multiple time in the same attack window it the hitting body parts are different
* add dodging, etc (https://www.youtube.com/watch?v=VfYw1BFONx0\&list=LL\&index=11\&pp=iAQBsAgC)
* **add hands and feet IK in most of the attacks** (when the IK target is in range), so attacks just don't feel hitting the air
* currenlty in tick of bp\_tommy: Manually Rotating Camera with the root motion during Contextual Attack. Note: Later add one more check for "Contextual Cinematic Camera is not active" once we have cinematics for each contextual attack otherwise cinematics camera might not work properly



#### Completion Order

* *Custom multiplayer framework classes*
* *One server-authoritative attack*
* *Replicated damage and defeat*
* *Test at simulated 100–150 ms latency*
* *Basic targeting and combat movement*
* *NPC controlled exclusively by the server*
* *Player-versus-NPC combat*
* *Bone/body-part hit detection*
* *Limb functionality loss*
* *Visual dismemberment*
* *Scoring and match-ending rules*
* *More attacks, combos, weapons and gore*



### Animation Retargeting from Metahuman to own Rig

&#x20;                  VIDEO

&#x20;                    ↓

&#x20;           MetaHuman Animator

&#x20;                    ↓

&#x20;         MetaHuman body motion

&#x20;                    ↓

&#x20;             IK Retargeter

&#x20;                    ↓

&#x20;            YOUR SKELETON

&#x20;                    ↓

&#x20;             YOUR CHARACTER

&#x20;                    ↓

&#x20;       ┌────────────┴────────────┐

&#x20;       ↓                         ↓

&#x20;Captured animations       Gameplay IK

&#x20;(30+ animations)       (hands / feet / etc.)



### IMP: After retargeting all the animations, remove the MetaHumanBodyTracker plugin but incase keep its copy somewhere

