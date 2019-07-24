class CfgPatches
{
  class lambs_suppression
  {
    units[] = {};
    weapons[] = {};
    requiredVersion = 1.82;
    requiredAddons[] = {
        "A3_Weapons_F"
    };
    version = "1.0";
    versionStr = "1.0";
    author = "nkenny";
    authorUrl = "http://www.nopryl.no";
  };
};

class CfgBrains
{
  class DefaultSoldierBrain 
  {
    class Components
    {
      class AIBrainSuppressionComponent 
      {
        worstDecreaseTime = 30.0;   // in seconds for 0.0 skill
        bestDecreaseTime = 4.0;     // in seconds for 1.0 skill
        causeExplosionWeight = 1.5; // 
      };
      class AIBrainAimingErrorComponent
      {
        worstDecreaseTime	= 3.5;  // how long (in seconds) it should take 0.0 skilled soldier to stabilize the aim completely
        bestDecreaseTime = 0.6;   // how long (in seconds) it should take 1.0 skilled soldier to stabilize the aim completely
        turningInfluence = 1.4;   // importance of turning in algorithm, multiplier
      }; 
    }; 
  };
}; 

