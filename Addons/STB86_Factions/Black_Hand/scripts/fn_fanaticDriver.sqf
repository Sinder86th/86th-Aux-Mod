params ["_unit"];
/* CONSTANTS */
private _DET_DIST = 10;
private _group = group _unit;

while { alive _unit } do {
	private _enemy = _unit findNearestEnemy _unit;
	if !(isNull _enemy) then {
		_group move position _enemy;
		if ((_unit distance _enemy) < _DET_DIST) then {
			[_unit] call STB86_fnc_explode;
			_unit setDamage 1;
		};
	};
	sleep 0.5;
};
// Thanks to Douglass for helping me get this to work
