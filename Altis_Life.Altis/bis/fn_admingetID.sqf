private["_unit"];
_unit = lbData[2902,lbCurSel (2902)];
_unit = call compile format["%1", _unit];
if(isNil "_unit") exitwith {};
if(isNull _unit) exitWith {};

[[_unit,player],"serv_fnc_getid",false,false] spawn BIS_fnc_MP;