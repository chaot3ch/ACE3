#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_common"};
        author = ECSTRING(common,ACETeam);
        authors[] = {"NouberNou", "esteldunedain"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"

#include "CfgActions.hpp"

#include "CursorMenus.hpp"

#include "ACE_Settings.hpp"

class ACE_Extensions {
    extensions[] += {"ace_break_line", "ace_parse_imagepath"};
};

class ACE_newEvents {
    SettingChanged = "ace_settingChanged";
    playerChanged = "ace_playerChanged";
    interactMenuOpened = "ace_interactMenuOpened";
    clearConditionCaches = QGVAR(clearConditionCaches);
    interactMenuClosed = "ace_interactMenuClosed";
};
