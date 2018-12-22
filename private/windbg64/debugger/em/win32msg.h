

//  This file may be included many times, with different definitions
//  for DECL_MASK and DECL_MSG.




//  Windows Mesage mask values

// If you add or rearrange this list then verify that the order still works
// with Dolphin IDE which uses this order to match resource names to masks

DECL_MASK( MSG_TYPE_NONE,       msgMaskNone,    "None")
DECL_MASK( MSG_TYPE_WINDOW,     msgMaskWin,     "Window")
DECL_MASK( MSG_TYPE_INIT,       msgMaskInit,    "Init")
DECL_MASK( MSG_TYPE_INPUT,      msgMaskInput,   "Input")
DECL_MASK( MSG_TYPE_MOUSE,      msgMaskMouse,   "Mouse")
DECL_MASK( MSG_TYPE_SYSTEM,     msgMaskSys,     "System")
DECL_MASK( MSG_TYPE_CLIPBOARD,  msgMaskClip,    "Clipboard")
DECL_MASK( MSG_TYPE_NONCLIENT,  msgMaskNC,      "Non-Client")
DECL_MASK( MSG_TYPE_DDE,        msgMaskDDE,     "DDE")
DECL_MASK( MSG_TYPE_OTHER,      msgMaskOther,   "Other")
#if !defined(DOLPHIN)
DECL_MASK( MSG_TYPE_ALL,        msgMaskAll,     "All")
#endif


// Windows messages


DECL_MSG(WM_NULL               , "WM_NULL"                , MSG_TYPE_OTHER)
DECL_MSG(WM_CREATE             , "WM_CREATE"              , MSG_TYPE_WINDOW)
DECL_MSG(WM_DESTROY            , "WM_DESTROY"             , MSG_TYPE_WINDOW)
DECL_MSG(WM_MOVE               , "WM_MOVE"                , MSG_TYPE_WINDOW)
DECL_MSG(WM_SIZE               , "WM_SIZE"                , MSG_TYPE_WINDOW)
DECL_MSG(WM_ACTIVATE           , "WM_ACTIVATE"            , MSG_TYPE_WINDOW)
DECL_MSG(WM_SETFOCUS           , "WM_SETFOCUS"            , MSG_TYPE_WINDOW)
DECL_MSG(WM_KILLFOCUS          , "WM_KILLFOCUS"           , MSG_TYPE_WINDOW)
DECL_MSG(WM_ENABLE             , "WM_ENABLE"              , MSG_TYPE_WINDOW)
DECL_MSG(WM_SETREDRAW          , "WM_SETREDRAW"           , MSG_TYPE_WINDOW)
DECL_MSG(WM_SETTEXT            , "WM_SETTEXT"             , MSG_TYPE_WINDOW)
DECL_MSG(WM_GETTEXT            , "WM_GETTEXT"             , MSG_TYPE_WINDOW)
DECL_MSG(WM_GETTEXTLENGTH      , "WM_GETTEXTLENGTH"       , MSG_TYPE_WINDOW)
DECL_MSG(WM_PAINT              , "WM_PAINT"               , MSG_TYPE_WINDOW)
DECL_MSG(WM_CLOSE              , "WM_CLOSE"               , MSG_TYPE_WINDOW)
DECL_MSG(WM_QUERYENDSESSION    , "WM_QUERYENDSESSION"     , MSG_TYPE_WINDOW)
DECL_MSG(WM_QUIT               , "WM_QUIT"                , MSG_TYPE_WINDOW)
DECL_MSG(WM_QUERYOPEN          , "WM_QUERYOPEN"           , MSG_TYPE_WINDOW)
DECL_MSG(WM_ERASEBKGND         , "WM_ERASEBKGND"          , MSG_TYPE_WINDOW)
DECL_MSG(WM_SYSCOLORCHANGE     , "WM_SYSCOLORCHANGE"      , MSG_TYPE_SYSTEM)
DECL_MSG(WM_ENDSESSION         , "WM_ENDSESSION"          , MSG_TYPE_SYSTEM)
DECL_MSG(WM_SHOWWINDOW         , "WM_SHOWWINDOW"          , MSG_TYPE_WINDOW)
DECL_MSG(WM_WININICHANGE       , "WM_WININICHANGE"        , MSG_TYPE_SYSTEM)

DECL_MSG(WM_DEVMODECHANGE      , "WM_DEVMODECHANGE"       , MSG_TYPE_SYSTEM)
DECL_MSG(WM_ACTIVATEAPP        , "WM_ACTIVATEAPP"         , MSG_TYPE_WINDOW)
DECL_MSG(WM_FONTCHANGE         , "WM_FONTCHANGE"          , MSG_TYPE_SYSTEM)
DECL_MSG(WM_TIMECHANGE         , "WM_TIMECHANGE"          , MSG_TYPE_SYSTEM)
DECL_MSG(WM_CANCELMODE         , "WM_CANCELMODE"          , MSG_TYPE_WINDOW)
DECL_MSG(WM_SETCURSOR          , "WM_SETCURSOR"           , MSG_TYPE_MOUSE)
DECL_MSG(WM_MOUSEACTIVATE      , "WM_MOUSEACTIVATE"       , MSG_TYPE_MOUSE)
DECL_MSG(WM_CHILDACTIVATE      , "WM_CHILDACTIVATE"       , MSG_TYPE_WINDOW)
DECL_MSG(WM_QUEUESYNC          , "WM_QUEUESYNC"           , MSG_TYPE_SYSTEM)
DECL_MSG(WM_GETMINMAXINFO      , "WM_GETMINMAXINFO"       , MSG_TYPE_WINDOW)
DECL_MSG(WM_PAINTICON          , "WM_PAINTICON"           , MSG_TYPE_WINDOW)
DECL_MSG(WM_ICONERASEBKGND     , "WM_ICONERASEBKGND"      , MSG_TYPE_WINDOW)
DECL_MSG(WM_NEXTDLGCTL         , "WM_NEXTDLGCTL"          , MSG_TYPE_WINDOW)
DECL_MSG(WM_SPOOLERSTATUS      , "WM_SPOOLERSTATUS"       , MSG_TYPE_OTHER)
DECL_MSG(WM_DRAWITEM           , "WM_DRAWITEM"            , MSG_TYPE_WINDOW)
DECL_MSG(WM_MEASUREITEM        , "WM_MEASUREITEM"         , MSG_TYPE_WINDOW)
DECL_MSG(WM_DELETEITEM         , "WM_DELETEITEM"          , MSG_TYPE_WINDOW)
DECL_MSG(WM_VKEYTOITEM         , "WM_VKEYTOITEM"          , MSG_TYPE_WINDOW)
DECL_MSG(WM_CHARTOITEM         , "WM_CHARTOITEM"          , MSG_TYPE_WINDOW)
DECL_MSG(WM_SETFONT            , "WM_SETFONT"             , MSG_TYPE_WINDOW)
DECL_MSG(WM_GETFONT            , "WM_GETFONT"             , MSG_TYPE_WINDOW)
DECL_MSG(WM_SETHOTKEY          , "WM_SETHOTKEY"           , MSG_TYPE_INPUT )
DECL_MSG(WM_GETHOTKEY          , "WM_GETHOTKEY"           , MSG_TYPE_INPUT )
DECL_MSG(WM_QUERYDRAGICON      , "WM_QUERYDRAGICON"       , MSG_TYPE_WINDOW)
DECL_MSG(WM_COMPAREITEM        , "WM_COMPAREITEM"         , MSG_TYPE_WINDOW)
DECL_MSG(WM_COMPACTING         , "WM_COMPACTING"          , MSG_TYPE_SYSTEM)
//DECL_MSG(WM_OTHERWINDOWCREATED , "WM_OTHERWINDOWCREATED"  , MSG_TYPE_SYSTEM)
//DECL_MSG(WM_OTHERWINDOWDESTROYED, "WM_OTHERWINDOWDESTROYED", MSG_TYPE_SYSTEM)
//DECL_MSG(WM_COMMNOTIFY         , "WM_COMMNOTIFY"          , MSG_TYPE_SYSTEM)
//DECL_MSG(WM_HOTKEYEVENT        , "WM_HOTKEYEVENT"         , MSG_TYPE_SYSTEM)
DECL_MSG(WM_WINDOWPOSCHANGING  , "WM_WINDOWPOSCHANGING"   , MSG_TYPE_WINDOW)
DECL_MSG(WM_WINDOWPOSCHANGED   , "WM_WINDOWPOSCHANGED"    , MSG_TYPE_WINDOW)
DECL_MSG(WM_POWER              , "WM_POWER"               , MSG_TYPE_SYSTEM)
DECL_MSG(WM_COPYDATA           , "WM_COPYDATA"            , MSG_TYPE_SYSTEM)
DECL_MSG(WM_CANCELJOURNAL      , "WM_CANCELJOURNAL"       , MSG_TYPE_SYSTEM)
DECL_MSG(WM_NCCREATE           , "WM_NCCREATE"            , MSG_TYPE_NONCLIENT)
DECL_MSG(WM_NCDESTROY          , "WM_NCDESTROY"           , MSG_TYPE_NONCLIENT)
DECL_MSG(WM_NCCALCSIZE         , "WM_NCCALCSIZE"          , MSG_TYPE_NONCLIENT)
DECL_MSG(WM_NCHITTEST          , "WM_NCHITTEST"           , MSG_TYPE_NONCLIENT | MSG_TYPE_MOUSE)
DECL_MSG(WM_NCPAINT            , "WM_NCPAINT"             , MSG_TYPE_NONCLIENT)
DECL_MSG(WM_NCACTIVATE         , "WM_NCACTIVATE"          , MSG_TYPE_NONCLIENT)
DECL_MSG(WM_GETDLGCODE         , "WM_GETDLGCODE"          , MSG_TYPE_WINDOW)
DECL_MSG(WM_NCMOUSEMOVE        , "WM_NCMOUSEMOVE"         , MSG_TYPE_NONCLIENT | MSG_TYPE_MOUSE)
DECL_MSG(WM_NCLBUTTONDOWN      , "WM_NCLBUTTONDOWN"       , MSG_TYPE_NONCLIENT | MSG_TYPE_MOUSE)
DECL_MSG(WM_NCLBUTTONUP        , "WM_NCLBUTTONUP"         , MSG_TYPE_NONCLIENT | MSG_TYPE_MOUSE)
DECL_MSG(WM_NCLBUTTONDBLCLK    , "WM_NCLBUTTONDBLCLK"     , MSG_TYPE_NONCLIENT | MSG_TYPE_MOUSE)
DECL_MSG(WM_NCRBUTTONDOWN      , "WM_NCRBUTTONDOWN"       , MSG_TYPE_NONCLIENT | MSG_TYPE_MOUSE)
DECL_MSG(WM_NCRBUTTONUP        , "WM_NCRBUTTONUP"         , MSG_TYPE_NONCLIENT | MSG_TYPE_MOUSE)
DECL_MSG(WM_NCRBUTTONDBLCLK    , "WM_NCRBUTTONDBLCLK"     , MSG_TYPE_NONCLIENT | MSG_TYPE_MOUSE)
DECL_MSG(WM_NCMBUTTONDOWN      , "WM_NCMBUTTONDOWN"       , MSG_TYPE_NONCLIENT | MSG_TYPE_MOUSE)
DECL_MSG(WM_NCMBUTTONUP        , "WM_NCMBUTTONUP"         , MSG_TYPE_NONCLIENT | MSG_TYPE_MOUSE)
DECL_MSG(WM_NCMBUTTONDBLCLK    , "WM_NCMBUTTONDBLCLK"     , MSG_TYPE_NONCLIENT | MSG_TYPE_MOUSE)
DECL_MSG(WM_KEYDOWN            , "WM_KEYDOWN"             , MSG_TYPE_INPUT)
DECL_MSG(WM_KEYUP              , "WM_KEYUP"               , MSG_TYPE_INPUT)
DECL_MSG(WM_CHAR               , "WM_CHAR"                , MSG_TYPE_INPUT)
DECL_MSG(WM_DEADCHAR           , "WM_DEADCHAR"            , MSG_TYPE_INPUT)
DECL_MSG(WM_SYSKEYDOWN         , "WM_SYSKEYDOWN"          , MSG_TYPE_SYSTEM | MSG_TYPE_INPUT)
DECL_MSG(WM_SYSKEYUP           , "WM_SYSKEYUP"            , MSG_TYPE_SYSTEM | MSG_TYPE_INPUT)
DECL_MSG(WM_SYSCHAR            , "WM_SYSCHAR"             , MSG_TYPE_SYSTEM | MSG_TYPE_INPUT)
DECL_MSG(WM_SYSDEADCHAR        , "WM_SYSDEADCHAR"         , MSG_TYPE_SYSTEM | MSG_TYPE_INPUT)
DECL_MSG(WM_INITDIALOG         , "WM_INITDIALOG"          , MSG_TYPE_INIT)
DECL_MSG(WM_COMMAND            , "WM_COMMAND"             , MSG_TYPE_INPUT)
DECL_MSG(WM_SYSCOMMAND         , "WM_SYSCOMMAND"          , MSG_TYPE_SYSTEM)
DECL_MSG(WM_TIMER              , "WM_TIMER"               , MSG_TYPE_INPUT)
DECL_MSG(WM_HSCROLL            , "WM_HSCROLL"             , MSG_TYPE_INPUT)
DECL_MSG(WM_VSCROLL            , "WM_VSCROLL"             , MSG_TYPE_INPUT)
DECL_MSG(WM_INITMENU           , "WM_INITMENU"            , MSG_TYPE_INIT)
DECL_MSG(WM_INITMENUPOPUP      , "WM_INITMENUPOPUP"       , MSG_TYPE_INIT)
DECL_MSG(WM_MENUSELECT         , "WM_MENUSELECT"          , MSG_TYPE_INPUT)
DECL_MSG(WM_MENUCHAR           , "WM_MENUCHAR"            , MSG_TYPE_INPUT)
DECL_MSG(WM_ENTERIDLE          , "WM_ENTERIDLE"           , MSG_TYPE_SYSTEM)
DECL_MSG(WM_CTLCOLORMSGBOX     , "WM_CTLCOLORMSGBOX"      , MSG_TYPE_WINDOW)
DECL_MSG(WM_CTLCOLOREDIT       , "WM_CTLCOLOREDIT"        , MSG_TYPE_WINDOW)
DECL_MSG(WM_CTLCOLORLISTBOX    , "WM_CTLCOLORLISTBOX"     , MSG_TYPE_WINDOW)
DECL_MSG(WM_CTLCOLORBTN        , "WM_CTLCOLORBTN"         , MSG_TYPE_WINDOW)
DECL_MSG(WM_CTLCOLORDLG        , "WM_CTLCOLORDLG"         , MSG_TYPE_WINDOW)
DECL_MSG(WM_CTLCOLORSCROLLBAR  , "WM_CTLCOLORSCROLLBAR"   , MSG_TYPE_WINDOW)
DECL_MSG(WM_CTLCOLORSTATIC     , "WM_CTLCOLORSTATIC"      , MSG_TYPE_WINDOW)
DECL_MSG(WM_MOUSEMOVE          , "WM_MOUSEMOVE"           , MSG_TYPE_INPUT | MSG_TYPE_MOUSE)
DECL_MSG(WM_LBUTTONDOWN        , "WM_LBUTTONDOWN"         , MSG_TYPE_INPUT | MSG_TYPE_MOUSE)
DECL_MSG(WM_LBUTTONUP          , "WM_LBUTTONUP"           , MSG_TYPE_INPUT | MSG_TYPE_MOUSE)
DECL_MSG(WM_LBUTTONDBLCLK      , "WM_LBUTTONDBLCLK"       , MSG_TYPE_INPUT | MSG_TYPE_MOUSE)
DECL_MSG(WM_RBUTTONDOWN        , "WM_RBUTTONDOWN"         , MSG_TYPE_INPUT | MSG_TYPE_MOUSE)
DECL_MSG(WM_RBUTTONUP          , "WM_RBUTTONUP"           , MSG_TYPE_INPUT | MSG_TYPE_MOUSE)
DECL_MSG(WM_RBUTTONDBLCLK      , "WM_RBUTTONDBLCLK"       , MSG_TYPE_INPUT | MSG_TYPE_MOUSE)
DECL_MSG(WM_MBUTTONDOWN        , "WM_MBUTTONDOWN"         , MSG_TYPE_INPUT | MSG_TYPE_MOUSE)
DECL_MSG(WM_MBUTTONUP          , "WM_MBUTTONUP"           , MSG_TYPE_INPUT | MSG_TYPE_MOUSE)
DECL_MSG(WM_MBUTTONDBLCLK      , "WM_MBUTTONDBLCLK"       , MSG_TYPE_INPUT | MSG_TYPE_MOUSE)
DECL_MSG(WM_PARENTNOTIFY       , "WM_PARENTNOTIFY"        , MSG_TYPE_INPUT | MSG_TYPE_MOUSE)
//DECL_MSG(WM_ENTERMENULOOP      , "WM_ENTERMENULOOP"       , MSG_TYPE_SYSTEM)
//DECL_MSG(WM_EXITMENULOOP       , "WM_EXITMENULOOP"        , MSG_TYPE_SYSTEM)
DECL_MSG(WM_MDICREATE          , "WM_MDICREATE"           , MSG_TYPE_WINDOW)
DECL_MSG(WM_MDIDESTROY         , "WM_MDIDESTROY"          , MSG_TYPE_WINDOW)
DECL_MSG(WM_MDIACTIVATE        , "WM_MDIACTIVATE"         , MSG_TYPE_WINDOW)
DECL_MSG(WM_MDIRESTORE         , "WM_MDIRESTORE"          , MSG_TYPE_WINDOW)
DECL_MSG(WM_MDINEXT            , "WM_MDINEXT"             , MSG_TYPE_WINDOW)
DECL_MSG(WM_MDIMAXIMIZE        , "WM_MDIMAXIMIZE"         , MSG_TYPE_WINDOW)
DECL_MSG(WM_MDITILE            , "WM_MDITILE"             , MSG_TYPE_WINDOW)
DECL_MSG(WM_MDICASCADE         , "WM_MDICASCADE"          , MSG_TYPE_WINDOW)
DECL_MSG(WM_MDIICONARRANGE     , "WM_MDIICONARRANGE"      , MSG_TYPE_WINDOW)
DECL_MSG(WM_MDIGETACTIVE       , "WM_MDIGETACTIVE"        , MSG_TYPE_WINDOW)
DECL_MSG(WM_MDISETMENU         , "WM_MDISETMENU"          , MSG_TYPE_WINDOW)
DECL_MSG(WM_DROPFILES          , "WM_DROPFILES"           , MSG_TYPE_WINDOW)
DECL_MSG(WM_MDIREFRESHMENU     , "WM_MDIREFRESHMENU"      , MSG_TYPE_WINDOW)
DECL_MSG(0x280                 , "WM_IME_REPORT"           , MSG_TYPE_INPUT)
DECL_MSG(0x290                 , "WM_IMEKEYDOWN"          , MSG_TYPE_INPUT)
DECL_MSG(0x291                 , "WM_IMEKEYUP"            , MSG_TYPE_INPUT)
DECL_MSG(WM_CUT                , "WM_CUT"                 , MSG_TYPE_CLIPBOARD)
DECL_MSG(WM_COPY               , "WM_COPY"                , MSG_TYPE_CLIPBOARD)
DECL_MSG(WM_PASTE              , "WM_PASTE"               , MSG_TYPE_CLIPBOARD)
DECL_MSG(WM_CLEAR              , "WM_CLEAR"               , MSG_TYPE_CLIPBOARD)
DECL_MSG(WM_UNDO               , "WM_UNDO"                , MSG_TYPE_CLIPBOARD)
DECL_MSG(WM_RENDERFORMAT       , "WM_RENDERFORMAT"        , MSG_TYPE_CLIPBOARD)
DECL_MSG(WM_RENDERALLFORMATS   , "WM_RENDERALLFORMATS"    , MSG_TYPE_CLIPBOARD)
DECL_MSG(WM_DESTROYCLIPBOARD   , "WM_DESTROYCLIPBOARD"    , MSG_TYPE_CLIPBOARD)
DECL_MSG(WM_DRAWCLIPBOARD      , "WM_DRAWCLIPBOARD"       , MSG_TYPE_CLIPBOARD)
DECL_MSG(WM_PAINTCLIPBOARD     , "WM_PAINTCLIPBOARD"      , MSG_TYPE_CLIPBOARD)
DECL_MSG(WM_VSCROLLCLIPBOARD   , "WM_VSCROLLCLIPBOARD"    , MSG_TYPE_CLIPBOARD)
DECL_MSG(WM_SIZECLIPBOARD      , "WM_SIZECLIPBOARD"       , MSG_TYPE_CLIPBOARD)
DECL_MSG(WM_ASKCBFORMATNAME    , "WM_ASKCBFORMATNAME"     , MSG_TYPE_CLIPBOARD)
DECL_MSG(WM_CHANGECBCHAIN      , "WM_CHANGECBCHAIN"       , MSG_TYPE_CLIPBOARD)
DECL_MSG(WM_HSCROLLCLIPBOARD   , "WM_HSCROLLCLIPBOARD"    , MSG_TYPE_CLIPBOARD)
DECL_MSG(WM_QUERYNEWPALETTE    , "WM_QUERYNEWPALETTE"     , MSG_TYPE_WINDOW)
DECL_MSG(WM_PALETTEISCHANGING  , "WM_PALETTEISCHANGING"   , MSG_TYPE_WINDOW)
DECL_MSG(WM_PALETTECHANGED     , "WM_PALETTECHANGED"      , MSG_TYPE_WINDOW)
DECL_MSG(WM_HOTKEY             , "WM_HOTKEY"              , MSG_TYPE_WINDOW)
DECL_MSG(WM_DDE_INITIATE       , "WM_DDE_INITIATE"        , MSG_TYPE_DDE)
DECL_MSG(WM_DDE_TERMINATE      , "WM_DDE_TERMINATE"       , MSG_TYPE_DDE)
DECL_MSG(WM_DDE_ADVISE         , "WM_DDE_ADVISE"          , MSG_TYPE_DDE)
DECL_MSG(WM_DDE_UNADVISE       , "WM_DDE_UNADVISE"        , MSG_TYPE_DDE)
DECL_MSG(WM_DDE_ACK            , "WM_DDE_ACK"             , MSG_TYPE_DDE)
DECL_MSG(WM_DDE_DATA           , "WM_DDE_DATA"            , MSG_TYPE_DDE)
DECL_MSG(WM_DDE_REQUEST        , "WM_DDE_REQUEST"         , MSG_TYPE_DDE)
DECL_MSG(WM_DDE_POKE           , "WM_DDE_POKE"            , MSG_TYPE_DDE)
DECL_MSG(WM_DDE_EXECUTE        , "WM_DDE_EXECUTE"         , MSG_TYPE_DDE)


// more messages added


DECL_MSG(WM_CAPTURECHANGED      , "WM_CAPTURECHANGED"      , MSG_TYPE_MOUSE )
DECL_MSG(WM_CONTEXTMENU         , "WM_CONTEXTMENU"         , MSG_TYPE_MOUSE )
DECL_MSG(WM_CONVERTREQUEST      , "WM_CONVERTREQUEST"      , MSG_TYPE_INPUT )   // IME thing
DECL_MSG(WM_CONVERTRESULT       , "WM_CONVERTRESULT"       , MSG_TYPE_INPUT )   // IME thing
DECL_MSG(WM_DEVICECHANGE        , "WM_DEVICECHANGE"        , MSG_TYPE_SYSTEM )
DECL_MSG(WM_DISPLAYCHANGE       , "WM_DISPLAYCHANGE"       , MSG_TYPE_SYSTEM )
DECL_MSG(WM_ENTERSIZEMOVE       , "WM_ENTERSIZEMOVE"       , MSG_TYPE_WINDOW )
DECL_MSG(WM_EXITSIZEMOVE        , "WM_EXITSIZEMOVE"        , MSG_TYPE_WINDOW )
DECL_MSG(WM_GETICON             , "WM_GETICON"             , MSG_TYPE_WINDOW )
//DECL_MSG(WM_GETOBJECT           , "WM_GETOBJECT"           , MSG_TYPE_OTHER )   // OLE thing
DECL_MSG(WM_HELP                , "WM_HELP"                , MSG_TYPE_WINDOW )
DECL_MSG(WM_IMEKEYDOWN          , "WM_IMEKEYDOWN"          , MSG_TYPE_INPUT )
DECL_MSG(WM_IMEKEYUP            , "WM_IMEKEYUP"            , MSG_TYPE_INPUT )
DECL_MSG(WM_IME_CHAR            , "WM_IME_CHAR"            , MSG_TYPE_INPUT )
DECL_MSG(WM_IME_COMPOSITION     , "WM_IME_COMPOSITION"     , MSG_TYPE_INPUT )
DECL_MSG(WM_IME_COMPOSITIONFULL , "WM_IME_COMPOSITIONFULL" , MSG_TYPE_INPUT )
DECL_MSG(WM_IME_CONTROL         , "WM_IME_CONTROL"         , MSG_TYPE_INPUT )
DECL_MSG(WM_IME_ENDCOMPOSITION  , "WM_IME_ENDCOMPOSITION"  , MSG_TYPE_INPUT )
DECL_MSG(WM_IME_KEYDOWN         , "WM_IME_KEYDOWN"         , MSG_TYPE_INPUT )
DECL_MSG(WM_IME_KEYLAST         , "WM_IME_KEYLAST"         , MSG_TYPE_INPUT )
DECL_MSG(WM_IME_KEYUP           , "WM_IME_KEYUP"           , MSG_TYPE_INPUT )
DECL_MSG(WM_IME_NOTIFY          , "WM_IME_NOTIFY"          , MSG_TYPE_INPUT )
DECL_MSG(WM_IME_REPORT          , "WM_IME_REPORT"          , MSG_TYPE_INPUT )
//DECL_MSG(WM_IME_REQUEST         , "WM_IME_REQUEST"         , MSG_TYPE_INPUT )
DECL_MSG(WM_IME_SELECT          , "WM_IME_SELECT"          , MSG_TYPE_INPUT )
DECL_MSG(WM_IME_SETCONTEXT      , "WM_IME_SETCONTEXT"      , MSG_TYPE_INPUT )
DECL_MSG(WM_IME_STARTCOMPOSITION, "WM_IME_STARTCOMPOSITION", MSG_TYPE_INPUT )
DECL_MSG(WM_INPUTLANGCHANGE     , "WM_INPUTLANGCHANGE"     , MSG_TYPE_INPUT )
DECL_MSG(WM_INPUTLANGCHANGEREQUEST      , "WM_INPUTLANGCHANGEREQUEST"   , MSG_TYPE_INPUT )
//DECL_MSG(WM_MENUCOMMAND         , "WM_MENUCOMMAND"         , MSG_TYPE_INPUT ) // not documented
//DECL_MSG(WM_MENUDRAG            , "WM_MENUDRAG"            , MSG_TYPE_INPUT ) // not documented
//DECL_MSG(WM_MENUGETOBJECT       , "WM_MENUGETOBJECT"       , MSG_TYPE_INPUT ) // not documented
//DECL_MSG(WM_MENURBUTTONUP       , "WM_MENURBUTTONUP"       , MSG_TYPE_INPUT ) // not documented
DECL_MSG(WM_MOUSEHOVER          , "WM_MOUSEHOVER"          , MSG_TYPE_INPUT | MSG_TYPE_MOUSE )
DECL_MSG(WM_MOUSELEAVE          , "WM_MOUSELEAVE"          , MSG_TYPE_INPUT | MSG_TYPE_MOUSE )
DECL_MSG(WM_MOUSEWHEEL          , "WM_MOUSEWHEEL"          , MSG_TYPE_INPUT | MSG_TYPE_MOUSE )
DECL_MSG(WM_MOVING              , "WM_MOVING"              , MSG_TYPE_WINDOW )
//DECL_MSG(WM_NCMOUSEHOVER        , "WM_NCMOUSEHOVER"        , MSG_TYPE_INPUT | MSG_TYPE_MOUSE )// not documented
//DECL_MSG(WM_NCMOUSELEAVE        , "WM_NCMOUSELEAVE"        , MSG_TYPE_INPUT | MSG_TYPE_MOUSE )// not documented
DECL_MSG(WM_NEXTMENU            , "WM_NEXTMENU"            , MSG_TYPE_INPUT )
DECL_MSG(WM_NOTIFY              , "WM_NOTIFY"              , MSG_TYPE_WINDOW )
DECL_MSG(WM_NOTIFYFORMAT        , "WM_NOTIFYFORMAT"        , MSG_TYPE_WINDOW )
DECL_MSG(WM_POWERBROADCAST      , "WM_POWERBROADCAST"      , MSG_TYPE_SYSTEM )
DECL_MSG(WM_PRINT               , "WM_PRINT"               , MSG_TYPE_WINDOW )
DECL_MSG(WM_PRINTCLIENT         , "WM_PRINTCLIENT"         , MSG_TYPE_WINDOW )
DECL_MSG(WM_SETICON             , "WM_SETICON"             , MSG_TYPE_WINDOW )
DECL_MSG(WM_SETTINGCHANGE       , "WM_SETTINGCHANGE"       , MSG_TYPE_SYSTEM )
DECL_MSG(WM_SIZING              , "WM_SIZING"              , MSG_TYPE_WINDOW )
DECL_MSG(WM_STYLECHANGED        , "WM_STYLECHANGED"        , MSG_TYPE_WINDOW )
DECL_MSG(WM_STYLECHANGING       , "WM_STYLECHANGING"       , MSG_TYPE_WINDOW )
//DECL_MSG(WM_SYNCPAINT           , "WM_SYNCPAINT"           , MSG_TYPE_WINDOW ) // not documented
DECL_MSG(WM_TCARD               , "WM_TCARD"               , MSG_TYPE_WINDOW )
//DECL_MSG(WM_UNINITMENUPOPUP     , "WM_UNINITMENUPOPUP"     , MSG_TYPE_INIT )
DECL_MSG(WM_USERCHANGED         , "WM_USERCHANGED"         , MSG_TYPE_SYSTEM )
DECL_MSG(WM_WNT_CONVERTREQUESTEX, "WM_WNT_CONVERTREQUESTEX", MSG_TYPE_INPUT )   // IME thing
