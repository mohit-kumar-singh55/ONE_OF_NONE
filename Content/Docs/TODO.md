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



* *action controls: Controller*
* *input combinations for attack and also input for blocking an attack*
* *2 kinds of cameras, normal \& target lock*
* *all of the animations required (including martial art attacks, weapon, etc)*



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

