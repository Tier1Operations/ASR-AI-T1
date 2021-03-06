//#define DEBUG_MODE_FULL
#include "script_component.hpp"
private ["_typename","_hasnvg"];
_typename = toLower(typename _this);

_hasnvg = {
	if (isNull _this) exitWith {false};
	private "_has";
	_has = false;
	{	if (getText(configFile >> "CfgWeapons" >> _x >> "simulation") == "NVGoggles") exitWith {_has = true};
	} forEach (assignedItems _this);
	{	if (getText(configFile >> "CfgWeapons" >> _x >> "simulation") == "NVGoggles") exitWith {_has = true};
	} forEach (items _this);
	_has
};

switch (_typename) do {
	case ("array") : {
		{
			if (_x call _hasnvg) exitWith {true};
			false;
		} foreach _this;
	};
	case ("group") : {
		if (isnull (leader _this)) then {
			false;
		} else {
			(units _this) call FUNC(hasNVG);
		};
	};
	default {_this call _hasnvg};
};
