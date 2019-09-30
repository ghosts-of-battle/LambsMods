// Leader Declares CQC buildings
// version 1.41
//by nkenny

// init
params ["_unit","_target",["_buildings",[_unit getPos [random 100,_unit getDir _target],35,true,false] call lambs_danger_fnc_nearBuildings]];

// gesture
[_unit,["gestureGo","gestureGoB"]] call lambs_danger_fnc_gesture;

// units
_units = units group _unit;
_units = _units select {isNull ObjectParent _x};

// no more spots than units
if (count _units > count _buildings) then {_units resize (count _buildings);};

// orders
{

    // stance
    _x setUnitPosWeak selectRandom ["UP","UP","MIDDLE"];
  
    // speed
    _x forceSpeed 24;
  
    // move
    _x doMove (_buildings select _forEachIndex);

} forEach _units;

// end
true