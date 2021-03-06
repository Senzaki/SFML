////////////////////////////////////////////////////////////
//
// SFML - Simple and Fast Multimedia Library
// Copyright (C) 2007-2014 Laurent Gomila (laurent.gom@gmail.com)
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it freely,
// subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such,
//    and must not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
////////////////////////////////////////////////////////////

#ifndef SFML_X11SCANCODES_HPP
#define SFML_X11SCANCODES_HPP

#include <SFML/Window/Keyboard.hpp>

namespace sf
{

namespace priv
{

// System code to SFML code table (source : SDL source code)
Keyboard::ScanCode x11scancodes0[] =
{
    Keyboard::ScanUnknown,
    Keyboard::ScanEscape,
    Keyboard::Scan1,
    Keyboard::Scan2,
    Keyboard::Scan3,
    Keyboard::Scan4,
    Keyboard::Scan5,
    Keyboard::Scan6,
    Keyboard::Scan7,
    Keyboard::Scan8,
    Keyboard::Scan9,
    Keyboard::Scan0,
    Keyboard::ScanMinus,
    Keyboard::ScanEquals,
    Keyboard::ScanBackspace,
    Keyboard::ScanTab,
    Keyboard::ScanQ,
    Keyboard::ScanW,
    Keyboard::ScanE,
    Keyboard::ScanR,
    Keyboard::ScanT,
    Keyboard::ScanY,
    Keyboard::ScanU,
    Keyboard::ScanI,
    Keyboard::ScanO,
    Keyboard::ScanP,
    Keyboard::ScanLeftBracket,
    Keyboard::ScanRightBracket,
    Keyboard::ScanReturn,
    Keyboard::ScanLCtrl,
    Keyboard::ScanA,
    Keyboard::ScanS,
    Keyboard::ScanD,
    Keyboard::ScanF,
    Keyboard::ScanG,
    Keyboard::ScanH,
    Keyboard::ScanJ,
    Keyboard::ScanK,
    Keyboard::ScanL,
    Keyboard::ScanSemicolon,
    Keyboard::ScanApostrophe,
    Keyboard::ScanGrave,
    Keyboard::ScanLShift,
    Keyboard::ScanBackSlash,
    Keyboard::ScanZ,
    Keyboard::ScanX,
    Keyboard::ScanC,
    Keyboard::ScanV,
    Keyboard::ScanB,
    Keyboard::ScanN,
    Keyboard::ScanM,
    Keyboard::ScanComma,
    Keyboard::ScanPeriod,
    Keyboard::ScanSlash,
    Keyboard::ScanRShift,
    Keyboard::ScanNumpadMultiply,
    Keyboard::ScanLAlt,
    Keyboard::ScanSpace,
    Keyboard::ScanCapsLock,
    Keyboard::ScanF1,
    Keyboard::ScanF2,
    Keyboard::ScanF3,
    Keyboard::ScanF4,
    Keyboard::ScanF5,
    Keyboard::ScanF6,
    Keyboard::ScanF7,
    Keyboard::ScanF8,
    Keyboard::ScanF9,
    Keyboard::ScanF10,
    Keyboard::ScanNumLockClear,
    Keyboard::ScanScrollLock,
    Keyboard::ScanNumpad7,
    Keyboard::ScanNumpad8,
    Keyboard::ScanNumpad9,
    Keyboard::ScanNumpadMinus,
    Keyboard::ScanNumpad4,
    Keyboard::ScanNumpad5,
    Keyboard::ScanNumpad6,
    Keyboard::ScanNumpadPlus,
    Keyboard::ScanNumpad1,
    Keyboard::ScanNumpad2,
    Keyboard::ScanNumpad3,
    Keyboard::ScanNumpad0,
    Keyboard::ScanNumpadPeriod,
    Keyboard::ScanSysreq,
    Keyboard::ScanMode,
    Keyboard::ScanNonUSBackSlash,
    Keyboard::ScanF11,
    Keyboard::ScanF12,
    Keyboard::ScanHome,
    Keyboard::ScanUp,
    Keyboard::ScanPageUp,
    Keyboard::ScanLeft,
    Keyboard::ScanBrightnessDown,
    Keyboard::ScanRight,
    Keyboard::ScanEnd,
    Keyboard::ScanDown,
    Keyboard::ScanPageDown,
    Keyboard::ScanInsert,
    Keyboard::ScanDelete,
    Keyboard::ScanNumpadEnter,
    Keyboard::ScanRCtrl,
    Keyboard::ScanPause,
    Keyboard::ScanPrintScreen,
    Keyboard::ScanNumpadDivide,
    Keyboard::ScanRAlt,
    Keyboard::ScanUnknown,
    Keyboard::ScanLGui,
    Keyboard::ScanRGui,
    Keyboard::ScanApplication,
    Keyboard::ScanF13,
    Keyboard::ScanF14,
    Keyboard::ScanF15,
    Keyboard::ScanF16,
    Keyboard::ScanF17,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanNumpadEquals,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanInternational3,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanPower,
    Keyboard::ScanMute,
    Keyboard::ScanVolumeDown,
    Keyboard::ScanVolumeUp,
    Keyboard::ScanHelp,
    Keyboard::ScanStop,
    Keyboard::ScanAgain,
    Keyboard::ScanUnknown,
    Keyboard::ScanUndo,
    Keyboard::ScanUnknown,
    Keyboard::ScanCopy,
    Keyboard::ScanUnknown,
    Keyboard::ScanPaste,
    Keyboard::ScanFind,
    Keyboard::ScanCut
};

const unsigned int x11scancodes0count = sizeof(x11scancodes0) / sizeof(x11scancodes0[0]);

// System code to SFML code alternative table (source : SDL source code)
Keyboard::ScanCode x11scancodes1[] =
{
    Keyboard::ScanUnknown,
    Keyboard::ScanEscape,
    Keyboard::Scan1,
    Keyboard::Scan2,
    Keyboard::Scan3,
    Keyboard::Scan4,
    Keyboard::Scan5,
    Keyboard::Scan6,
    Keyboard::Scan7,
    Keyboard::Scan8,
    Keyboard::Scan9,
    Keyboard::Scan0,
    Keyboard::ScanMinus,
    Keyboard::ScanEquals,
    Keyboard::ScanBackspace,
    Keyboard::ScanTab,
    Keyboard::ScanQ,
    Keyboard::ScanW,
    Keyboard::ScanE,
    Keyboard::ScanR,
    Keyboard::ScanT,
    Keyboard::ScanY,
    Keyboard::ScanU,
    Keyboard::ScanI,
    Keyboard::ScanO,
    Keyboard::ScanP,
    Keyboard::ScanLeftBracket,
    Keyboard::ScanRightBracket,
    Keyboard::ScanReturn,
    Keyboard::ScanLCtrl,
    Keyboard::ScanA,
    Keyboard::ScanS,
    Keyboard::ScanD,
    Keyboard::ScanF,
    Keyboard::ScanG,
    Keyboard::ScanH,
    Keyboard::ScanJ,
    Keyboard::ScanK,
    Keyboard::ScanL,
    Keyboard::ScanSemicolon,
    Keyboard::ScanApostrophe,
    Keyboard::ScanGrave,
    Keyboard::ScanLShift,
    Keyboard::ScanBackSlash,
    Keyboard::ScanZ,
    Keyboard::ScanX,
    Keyboard::ScanC,
    Keyboard::ScanV,
    Keyboard::ScanB,
    Keyboard::ScanN,
    Keyboard::ScanM,
    Keyboard::ScanComma,
    Keyboard::ScanPeriod,
    Keyboard::ScanSlash,
    Keyboard::ScanRShift,
    Keyboard::ScanNumpadMultiply,
    Keyboard::ScanLAlt,
    Keyboard::ScanSpace,
    Keyboard::ScanCapsLock,
    Keyboard::ScanF1,
    Keyboard::ScanF2,
    Keyboard::ScanF3,
    Keyboard::ScanF4,
    Keyboard::ScanF5,
    Keyboard::ScanF6,
    Keyboard::ScanF7,
    Keyboard::ScanF8,
    Keyboard::ScanF9,
    Keyboard::ScanF10,
    Keyboard::ScanNumLockClear,
    Keyboard::ScanScrollLock,
    Keyboard::ScanNumpad7,
    Keyboard::ScanNumpad8,
    Keyboard::ScanNumpad9,
    Keyboard::ScanNumpadMinus,
    Keyboard::ScanNumpad4,
    Keyboard::ScanNumpad5,
    Keyboard::ScanNumpad6,
    Keyboard::ScanNumpadPlus,
    Keyboard::ScanNumpad1,
    Keyboard::ScanNumpad2,
    Keyboard::ScanNumpad3,
    Keyboard::ScanNumpad0,
    Keyboard::ScanNumpadPeriod,
    Keyboard::ScanSysreq,
    Keyboard::ScanMode,
    Keyboard::ScanNonUSBackSlash,
    Keyboard::ScanF11,
    Keyboard::ScanF12,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanNumpadEnter,
    Keyboard::ScanRCtrl,
    Keyboard::ScanNumpadDivide,
    Keyboard::ScanPrintScreen,
    Keyboard::ScanRAlt,
    Keyboard::ScanUnknown,
    Keyboard::ScanHome,
    Keyboard::ScanUp,
    Keyboard::ScanPageUp,
    Keyboard::ScanLeft,
    Keyboard::ScanRight,
    Keyboard::ScanEnd,
    Keyboard::ScanDown,
    Keyboard::ScanPageDown,
    Keyboard::ScanInsert,
    Keyboard::ScanDelete,
    Keyboard::ScanUnknown,
    Keyboard::ScanMute,
    Keyboard::ScanVolumeDown,
    Keyboard::ScanVolumeUp,
    Keyboard::ScanPower,
    Keyboard::ScanNumpadEquals,
    Keyboard::ScanUnknown,
    Keyboard::ScanPause,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanLGui,
    Keyboard::ScanRGui,
    Keyboard::ScanApplication,
    Keyboard::ScanCancel,
    Keyboard::ScanAgain,
    Keyboard::ScanUnknown,
    Keyboard::ScanUndo,
    Keyboard::ScanUnknown,
    Keyboard::ScanCopy,
    Keyboard::ScanUnknown,
    Keyboard::ScanPaste,
    Keyboard::ScanFind,
    Keyboard::ScanCut,
    Keyboard::ScanHelp,
    Keyboard::ScanUnknown,
    Keyboard::ScanCalculator,
    Keyboard::ScanUnknown,
    Keyboard::ScanSleep,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanApp1,
    Keyboard::ScanApp2,
    Keyboard::ScanWww,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanMail,
    Keyboard::ScanAcBookmarks,
    Keyboard::ScanComputer,
    Keyboard::ScanAcBack,
    Keyboard::ScanAcForward,
    Keyboard::ScanUnknown,
    Keyboard::ScanEject,
    Keyboard::ScanEject,
    Keyboard::ScanAudioNext,
    Keyboard::ScanAudioPlay,
    Keyboard::ScanAudioPrev,
    Keyboard::ScanAudioStop,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanF13,
    Keyboard::ScanAcHome,
    Keyboard::ScanAcRefresh,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanAgain,
    Keyboard::ScanF13,
    Keyboard::ScanF14,
    Keyboard::ScanF15,
    Keyboard::ScanF16,
    Keyboard::ScanF17,
    Keyboard::ScanF18,
    Keyboard::ScanF19,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanMode,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanAudioPlay,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanAudioPlay,
    Keyboard::ScanAudioNext,
    Keyboard::ScanUnknown,
    Keyboard::ScanPrintScreen,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanMail,
    Keyboard::ScanUnknown,
    Keyboard::ScanAcSearch,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanStop,
    Keyboard::ScanBrightnessDown,
    Keyboard::ScanBrightnessUp,
    Keyboard::ScanMediaSelect,
    Keyboard::ScanDisplaySwitch,
    Keyboard::ScanIllumToggle,
    Keyboard::ScanIllumDown,
    Keyboard::ScanIllumUp,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown,
    Keyboard::ScanUnknown
};

const unsigned int x11scancodes1count = sizeof(x11scancodes1) / sizeof(x11scancodes1[0]);

} // namespace priv

} // namespace sf


#endif // SFML_X11SCANCODES_HPP
