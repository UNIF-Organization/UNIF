private _unit = missionNamespace getVariable ["bis_fnc_moduleRemoteControl_unit", player]; //Get player unit

if(!(local _unit))exitWith{};

private _allowedWeapon = ["sp_fwa_mag58","sp_fwa_m60","sp_fwa_m60_early","sp_fwa_aa52","sp_fwa_aa_nf1","sp_fwa_mg4259","sp_fwa_mg3"];


_unit addEventHandler ["WeaponDeployed", { //Deploying plays animation for holding stock
	params ["_unitDeploying", "_isDeployed"];

 	private _currentWeapon = currentWeapon _unitDeploying;
	private _allowedWeapon = ["sp_fwa_mag58","sp_fwa_m60","sp_fwa_m60_early","sp_fwa_aa52","sp_fwa_aa_nf1","sp_fwa_mg4259","sp_fwa_mg3"];
 	private _anim = "sp_fwa_GestureDeployedMachinegun";

	if(not(isnull _unitDeploying)) then {
		if (_currentWeapon in _allowedWeapon) then{
			if(_isDeployed) then {
				_unitDeploying playAction _anim;
		  }else{
				_unitDeploying playAction "gestureNod";
		  };
	  };
	} else {
		_unit removeEventHandler ["WeaponDeployed", _thisEventHandler];
	};
}];


_unit addEventHandler ["Take", { //When reloading, check if weapon is deployed and if so play animation for holding stock
	params ["_unitTaking"];
	private _currentWeapon = currentWeapon _unitTaking;
	private _allowedWeapon = ["sp_fwa_mag58","sp_fwa_m60","sp_fwa_m60_early","sp_fwa_aa52","sp_fwa_aa_nf1","sp_fwa_mg4259","sp_fwa_mg3"];
 	private _anim = "sp_fwa_GestureDeployedMachinegun";

	if(not(isnull _unitTaking)) then {
		if (_currentWeapon in _allowedWeapon) then{
			if(isWeaponDeployed _unitTaking) then {
				_unitTaking playAction _anim;
		  };
		};
	} else {
		_unit removeEventHandler ["Take", _thisEventHandler];
	};
}];

