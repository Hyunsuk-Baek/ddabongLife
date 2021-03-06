#include "..\..\script_macros.hpp"
/*
    File: fn_bountyAddP.sqf
    Author: !TS JORDAN
	Originally Made for: Underbelly ArmA 

    Description: Gather the required info to send to the DB. 
*/
if !(playerSide isEqualTo civilian) exitWith {hint localize "STR_bounty_bountyList_notBH";};
if ((lbCurSel 240600) isEqualTo -1) exitWith {hint localize "STR_bounty_bountyList_noPlayerSelected";};
if ((lbCurSel 240700) isEqualTo -1) exitWith {hint localize "STR_bounty_bountyList_noAmountSelected";};
private _unit = lbData [240600,lbCurSel 240600];
_unit = call compile format ["%1",_unit];
private _amount = lbData [240700,lbCurSel 240700];
private _unitsToNotify = [];
private _amountP = parseNumber _amount;
if (isNil "_unit") exitWith {};
if (isNull _unit) exitWith {};
{
	if(license_civ_bountyH) then {_unitsToNotify pushBack _x};
} forEach playableUnits;

if (life_cash < _amountP) then {
	hint "선택한 금액이 모자릅니다. ATM 갔다 오거나 더 낮은 현상금을 선택하세요";
} else {
	[1,[_unit,60,"Mil_dot","현상금사냥꾼들이 쫒고있는 녀석의 마지막 위치"]] remoteExec ["life_fnc_markers",_unitsToNotify];
	life_cash = life_cash - _amountP;
	
	if (life_HC_isActive) then {
		[getPlayerUID _unit,_unit getVariable ["realname",name _unit],_amount] remoteExecCall ["HC_fnc_bountyAdd",HC_Life];
		[getPlayerUID _unit,_unit getVariable ["realname",name _unit],_amount] remoteExecCall ["HC_fnc_bountyAmountGather",HC_Life];
	} else {
		[getPlayerUID _unit,_unit getVariable ["realname",name _unit],_amount] remoteExecCall ["life_fnc_bountyAdd",RSERV];
		[getPlayerUID _unit,_unit getVariable ["realname",name _unit],_amount] remoteExecCall ["life_fnc_bountyAmountGather",RSERV];
	};
};

