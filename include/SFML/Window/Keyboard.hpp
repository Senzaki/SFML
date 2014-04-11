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

#ifndef SFML_KEYBOARD_HPP
#define SFML_KEYBOARD_HPP

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <SFML/Window/Export.hpp>


namespace sf
{
////////////////////////////////////////////////////////////
/// \brief Give access to the real-time state of the keyboard
///
////////////////////////////////////////////////////////////
class SFML_WINDOW_API Keyboard
{
public :
    ////////////////////////////////////////////////////////////
    /// \brief Key codes
    ///
    ////////////////////////////////////////////////////////////
    enum Key
    {
        Unknown = -1, ///< Unhandled key
        A = 0,        ///< The A key
        B,            ///< The B key
        C,            ///< The C key
        D,            ///< The D key
        E,            ///< The E key
        F,            ///< The F key
        G,            ///< The G key
        H,            ///< The H key
        I,            ///< The I key
        J,            ///< The J key
        K,            ///< The K key
        L,            ///< The L key
        M,            ///< The M key
        N,            ///< The N key
        O,            ///< The O key
        P,            ///< The P key
        Q,            ///< The Q key
        R,            ///< The R key
        S,            ///< The S key
        T,            ///< The T key
        U,            ///< The U key
        V,            ///< The V key
        W,            ///< The W key
        X,            ///< The X key
        Y,            ///< The Y key
        Z,            ///< The Z key
        Num0,         ///< The 0 key
        Num1,         ///< The 1 key
        Num2,         ///< The 2 key
        Num3,         ///< The 3 key
        Num4,         ///< The 4 key
        Num5,         ///< The 5 key
        Num6,         ///< The 6 key
        Num7,         ///< The 7 key
        Num8,         ///< The 8 key
        Num9,         ///< The 9 key
        Escape,       ///< The Escape key
        LControl,     ///< The left Control key
        LShift,       ///< The left Shift key
        LAlt,         ///< The left Alt key
        LSystem,      ///< The left OS specific key: window (Windows and Linux), apple (MacOS X), ...
        RControl,     ///< The right Control key
        RShift,       ///< The right Shift key
        RAlt,         ///< The right Alt key
        RSystem,      ///< The right OS specific key: window (Windows and Linux), apple (MacOS X), ...
        Menu,         ///< The Menu key
        LBracket,     ///< The [ key
        RBracket,     ///< The ] key
        SemiColon,    ///< The ; key
        Comma,        ///< The , key
        Period,       ///< The . key
        Quote,        ///< The ' key
        Slash,        ///< The / key
        BackSlash,    ///< The \ key
        Tilde,        ///< The ~ key
        Equal,        ///< The = key
        Dash,         ///< The - key
        Space,        ///< The Space key
        Return,       ///< The Return key
        BackSpace,    ///< The Backspace key
        Tab,          ///< The Tabulation key
        PageUp,       ///< The Page up key
        PageDown,     ///< The Page down key
        End,          ///< The End key
        Home,         ///< The Home key
        Insert,       ///< The Insert key
        Delete,       ///< The Delete key
        Add,          ///< The + key
        Subtract,     ///< The - key
        Multiply,     ///< The * key
        Divide,       ///< The / key
        Left,         ///< Left arrow
        Right,        ///< Right arrow
        Up,           ///< Up arrow
        Down,         ///< Down arrow
        Numpad0,      ///< The numpad 0 key
        Numpad1,      ///< The numpad 1 key
        Numpad2,      ///< The numpad 2 key
        Numpad3,      ///< The numpad 3 key
        Numpad4,      ///< The numpad 4 key
        Numpad5,      ///< The numpad 5 key
        Numpad6,      ///< The numpad 6 key
        Numpad7,      ///< The numpad 7 key
        Numpad8,      ///< The numpad 8 key
        Numpad9,      ///< The numpad 9 key
        F1,           ///< The F1 key
        F2,           ///< The F2 key
        F3,           ///< The F3 key
        F4,           ///< The F4 key
        F5,           ///< The F5 key
        F6,           ///< The F6 key
        F7,           ///< The F7 key
        F8,           ///< The F8 key
        F9,           ///< The F9 key
        F10,          ///< The F10 key
        F11,          ///< The F11 key
        F12,          ///< The F12 key
        F13,          ///< The F13 key
        F14,          ///< The F14 key
        F15,          ///< The F15 key
        Pause,        ///< The Pause key

        KeyCount      ///< Keep last -- the total number of keyboard keys
    };

    ////////////////////////////////////////////////////////////
    /// \brief Scan codes
    ///
    ////////////////////////////////////////////////////////////
    // Source : SDL
    enum ScanCode
    {
        ScanUnknown = -1,
        ScanA = 0,
        ScanB,
        ScanC,
        ScanD,
        ScanE,
        ScanF,
        ScanG,
        ScanH,
        ScanI,
        ScanJ,
        ScanK,
        ScanL,
        ScanM,
        ScanN,
        ScanO,
        ScanP,
        ScanQ,
        ScanR,
        ScanS,
        ScanT,
        ScanU,
        ScanV,
        ScanW,
        ScanX,
        ScanY,
        ScanZ,
        Scan1,
        Scan2,
        Scan3,
        Scan4,
        Scan5,
        Scan6,
        Scan7,
        Scan8,
        Scan9,
        Scan0,
        ScanReturn,
        ScanEscape,
        ScanBackspace,
        ScanTab,
        ScanSpace,
        ScanMinus,
        ScanEquals,
        ScanLeftBracket,
        ScanRightBracket,
        ScanBackSlash,
        ScanNonUSHash,
        ScanSemicolon,
        ScanApostrophe,
        ScanGrave,
        ScanComma,
        ScanPeriod,
        ScanSlash,
        ScanCapsLock,
        ScanF1,
        ScanF2,
        ScanF3,
        ScanF4,
        ScanF5,
        ScanF6,
        ScanF7,
        ScanF8,
        ScanF9,
        ScanF10,
        ScanF11,
        ScanF12,
        ScanPrintScreen,
        ScanScrollLock,
        ScanPause,
        ScanInsert,
        ScanHome,
        ScanPageUp,
        ScanDelete,
        ScanEnd,
        ScanPageDown,
        ScanRight,
        ScanLeft,
        ScanDown,
        ScanUp,
        ScanNumLockClear,
        ScanNumpadDivide,
        ScanNumpadMultiply,
        ScanNumpadMinus,
        ScanNumpadPlus,
        ScanNumpadEnter,
        ScanNumpad1,
        ScanNumpad2,
        ScanNumpad3,
        ScanNumpad4,
        ScanNumpad5,
        ScanNumpad6,
        ScanNumpad7,
        ScanNumpad8,
        ScanNumpad9,
        ScanNumpad0,
        ScanNumpadPeriod,
        ScanNonUSBackSlash,
        ScanApplication,
        ScanPower,
        ScanNumpadEquals,
        ScanF13,
        ScanF14,
        ScanF15,
        ScanF16,
        ScanF17,
        ScanF18,
        ScanF19,
        ScanF20,
        ScanF21,
        ScanF22,
        ScanF23,
        ScanF24,
        ScanExecute,
        ScanHelp,
        ScanMenu,
        ScanSelect,
        ScanStop,
        ScanAgain,
        ScanUndo,
        ScanCut,
        ScanCopy,
        ScanPaste,
        ScanFind,
        ScanMute,
        ScanVolumeUp,
        ScanVolumeDown,
        ScanNumpadComma,
        ScanNumpadEqualsAS400,
        ScanInternational1,
        ScanInternational2,
        ScanInternational3,
        ScanInternational4,
        ScanInternational5,
        ScanInternational6,
        ScanInternational7,
        ScanInternational8,
        ScanInternational9,
        ScanLang1,
        ScanLang2,
        ScanLang3,
        ScanLang4,
        ScanLang5,
        ScanLang6,
        ScanLang7,
        ScanLang8,
        ScanLang9,
        ScanAltErase,
        ScanSysreq,
        ScanCancel,
        ScanClear,
        ScanPrior,
        ScanReturn2,
        ScanSeparator,
        ScanOut,
        ScanOper,
        ScanClearAgain,
        ScanCrSel,
        ScanExSel,
        ScanNumpad00,
        ScanNumpad000,
        ScanThousandsSeparator,
        ScanDecimalSeparator,
        ScanCurrencyUnit,
        ScanCurrencySubunit,
        ScanNumpadLeftParenthesis,
        ScanNumpadRightParenthesis,
        ScanNumpadLeftBrace,
        ScanNumpadRightBrace,
        ScanNumpadTab,
        ScanNumpadBackspace,
        ScanNumpadA,
        ScanNumpadB,
        ScanNumpadC,
        ScanNumpadD,
        ScanNumpadE,
        ScanNumpadF,
        ScanNumpadXor,
        ScanNumpadPower,
        ScanNumpadPercent,
        ScanNumpadLess,
        ScanNumpadGreater,
        ScanNumpadAmpersand,
        ScanNumpadDoubleAmpersand,
        ScanNumpadVerticalBar,
        ScanNumpadDoubleVerticalBar,
        ScanNumpadColon,
        ScanNumpadHash,
        ScanNumpadSpace,
        ScanNumpadAt,
        ScanNumpadExclam,
        ScanNumpadMemStore,
        ScanNumpadMemRecall,
        ScanNumpadMemClear,
        ScanNumpadMemAdd,
        ScanNumpadMemSubtract,
        ScanNumpadMemMultiply,
        ScanNumpadMemDivide,
        ScanNumpadPlusMinus,
        ScanNumpadClear,
        ScanNumpadClearEntry,
        ScanNumpadBinary,
        ScanNumpadOctal,
        ScanNumpadDecimal,
        ScanNumpadHexadecimal,
        ScanLCtrl,
        ScanLShift,
        ScanLAlt,
        ScanLGui,
        ScanRCtrl,
        ScanRShift,
        ScanRAlt,
        ScanRGui,
        ScanMode,
        ScanAudioNext,
        ScanAudioPrev,
        ScanAudioStop,
        ScanAudioPlay,
        ScanAudioMute,
        ScanMediaSelect,
        ScanWww,
        ScanMail,
        ScanCalculator,
        ScanComputer,
        ScanAcSearch,
        ScanAcHome,
        ScanAcBack,
        ScanAcForward,
        ScanAcStop,
        ScanAcRefresh,
        ScanAcBookmarks,
        ScanBrightnessDown,
        ScanBrightnessUp,
        ScanDisplaySwitch,
        ScanIllumToggle,
        ScanIllumDown,
        ScanIllumUp,
        ScanEject,
        ScanSleep,
        ScanApp1,
        ScanApp2,
        ScanCount
    };

    ////////////////////////////////////////////////////////////
    /// \brief Check if a key is pressed
    ///
    /// \param key Key to check
    ///
    /// \return True if the key is pressed, false otherwise
    ///
    ////////////////////////////////////////////////////////////
    static bool isKeyPressed(Key key);
};

} // namespace sf


#endif // SFML_KEYBOARD_HPP


////////////////////////////////////////////////////////////
/// \class sf::Keyboard
/// \ingroup window
///
/// sf::Keyboard provides an interface to the state of the
/// keyboard. It only contains static functions (a single
/// keyboard is assumed), so it's not meant to be instantiated.
///
/// This class allows users to query the keyboard state at any
/// time and directly, without having to deal with a window and
/// its events. Compared to the KeyPressed and KeyReleased events,
/// sf::Keyboard can retrieve the state of a key at any time
/// (you don't need to store and update a boolean on your side
/// in order to know if a key is pressed or released), and you
/// always get the real state of the keyboard, even if keys are
/// pressed or released when your window is out of focus and no
/// event is triggered.
///
/// Usage example:
/// \code
/// if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
/// {
///     // move left...
/// }
/// else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
/// {
///     // move right...
/// }
/// else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
/// {
///     // quit...
/// }
/// \endcode
///
/// \see sf::Joystick, sf::Mouse
///
////////////////////////////////////////////////////////////
