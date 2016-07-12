/*
*
*  ExileClient_MarXet_network_sellerBuyNowResponse.sqf
*  Author: WolfkillArcadia
*  © 2016 Arcas Industries
*  This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
*  To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/
private["_listingArray","_configName","_name"];
_listingArray = _this select 0;
_configName = ((_listingArray select 2) select 0) call ExileClient_util_gear_getConfigNameByClassName;
_name = getText(configFile >> _configName >> ((_listingArray select 2) select 0) >> "displayName");
["SuccessTitleAndText", [
    "Item Sold!",
    format ["A fellow inmate has purchased your <t color='#ff0000'>%1</t>.<br/><t color='#ff0000'>%2</t><img image='\exile_assets\texture\ui\poptab_inline_ca.paa' size='24'/> has been deposited in your account<br/>Thank you for using Mar<t color='#531517'>X</t>et: Exile's leading marketplace!", _name, (_listingArray select 3)]
]] call ExileClient_gui_toaster_addTemplateToast;
