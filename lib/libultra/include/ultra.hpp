/********************************************************************************
 * File: ultra.hpp
 * Author: ppkantorski
 * Description: 
 *   'ultra.hpp' serves as a central include header for the Ultrahand Overlay project,
 *   bringing together a comprehensive suite of utility functions essential for the
 *   development and operation of custom overlays on the Nintendo Switch. This header
 *   provides consolidated access to functions facilitating debugging, string processing,
 *   file management, JSON manipulation, and more, enhancing the modularity and 
 *   reusability of code within the project.
 *
 *   These utilities are designed to operate independently, providing robust tools to
 *   support complex overlay functionalities and interactions.
 *
 *   For the latest updates and contributions, visit the project's GitHub repository:
 *   GitHub Repository: https://github.com/ppkantorski/Ultrahand-Overlay
 *
 *   Note: This notice is integral to the project's documentation and must not be 
 *   altered or removed.
 *
 *  Licensed under both GPLv2 and CC-BY-4.0
 *  Copyright (c) 2024 ppkantorski
 ********************************************************************************/

#ifndef ULTRA_HPP
#define ULTRA_HPP
#include <string>

/* SD Card path */
const std::string ROOT_PATH = "sdmc:/";
const std::string ATMO_PATH = "sdmc:/atmosphere/";
const std::string BACKUP_PATH = "sdmc:/backup/";
const std::string HEKATE_PATH = "sdmc:/bootloader/";
const std::string CONFIG_PATH = "sdmc:/config/";
const std::string FWD_PATH = "sdmc:/nsp/";
const std::string SWITCH_PATH = "sdmc:/switch/";
const std::string WBOOT_PATH = "sdmc:/warmboot_mariko/";

/* for ASAP path */
const std::string TESTER_PATH = ROOT_PATH;
const std::string ASSIST_PATH = CONFIG_PATH + "ASAP-assist/";

/* Ultrahand default name */
const std::string BOOT_PACKAGE_FILENAME = "boot_package.ini";
const std::string PACKAGE_FILENAME = "package.ini";
const std::string CONFIG_FILENAME = "config.ini";
const std::string ULTRAHAND_PROJECT_NAME = "ultrahand";
const std::string CAPITAL_ULTRAHAND_PROJECT_NAME = "Ultrahand";

/* Ultrahand folders path */
const std::string PACKAGE_PATH = ASSIST_PATH + "Packages/";
const std::string SETTINGS_PATH = ASSIST_PATH + "ultrahand/";
const std::string DOWNLOADS_PATH = SETTINGS_PATH + "downloads/";
const std::string LANG_PATH = SETTINGS_PATH + "lang/";
const std::string THEMES_PATH = SETTINGS_PATH + "themes/";
const std::string OVERLAY_PATH = SWITCH_PATH + ".overlays/";

/* Ultrahand files path */
const std::string ULTRAHAND_CONFIG_INI_PATH = SETTINGS_PATH + CONFIG_FILENAME;
//const std::string TESLA_CONFIG_INI_PATH = CONFIG_PATH + "tesla/" + CONFIG_FILENAME;
const std::string THEME_CONFIG_INI_PATH = SETTINGS_PATH + "theme.ini";
const std::string OVERLAYS_INI_FILEPATH = SETTINGS_PATH + "overlays.ini";
const std::string PACKAGES_INI_FILEPATH = SETTINGS_PATH + "packages.ini";

/* Ultrahand repo */
const std::string ULTRAHAND_REPO_URL = "https://github.com/Yorunokyujitsu/archive_aio/";

/* Ultrahand STR */
//const std::string TESLA_COMBO_STR = "ZL+ZR+DDOWN";
const std::string ULTRAHAND_COMBO_STR = "L+DDOWN+RS";
//const std::string TESLA_STR = "tesla";
const std::string ERISTA_STR = "erista";
const std::string MARIKO_STR = "mariko";
const std::string KEY_COMBO_STR = "key_combo";
const std::string DEFAULT_LANG_STR = "default_lang";
const std::string LAUNCH_ARGS_STR = "launch_args";
const std::string USE_LAUNCH_ARGS_STR = "use_launch_args";
const std::string LIST_STR = "list";
const std::string LIST_FILE_STR = "list_file";
const std::string JSON_STR = "json";
const std::string JSON_FILE_STR = "json_file";
const std::string INI_FILE_STR = "ini_file";
const std::string HEX_FILE_STR = "hex_file";
const std::string PACKAGE_STR = "package";
const std::string PACKAGES_STR = "packages";
const std::string OVERLAY_STR = "overlay";
const std::string OVERLAYS_STR = "overlays";
const std::string IN_OVERLAY_STR = "in_overlay";
const std::string IN_HIDDEN_OVERLAY_STR = "in_hidden_overlay";
const std::string FILE_STR = "file";
const std::string SYSTEM_STR = "system";
const std::string MODE_STR = "mode";
const std::string GROUPING_STR = "grouping";
const std::string FOOTER_STR = "footer";
const std::string TOGGLE_STR = "toggle";
const std::string LEFT_STR = "left";
const std::string RIGHT_STR = "right";
const std::string CENTER_STR = "center";
const std::string HIDE_STR = "hide";
const std::string STAR_STR = "star";
const std::string PRIORITY_STR = "priority";
const std::string ON_STR = "on";
const std::string OFF_STR = "off";
const std::string CAPITAL_ON_STR = "On";
const std::string CAPITAL_OFF_STR = "Off";
const std::string TRUE_STR = "true";
const std::string FALSE_STR = "false";
const std::string GLOBAL_STR = "global";
const std::string DEFAULT_STR = "default";
const std::string SLOT_STR = "slot";
const std::string OPTION_STR = "option";
const std::string FORWARDER_STR = "forwarder";
const std::string TEXT_STR = "text";
const std::string TABLE_STR = "table";
const std::string TRACKBAR_STR = "trackbar";
const std::string STEP_TRACKBAR_STR = "step_trackbar";
const std::string NAMED_STEP_TRACKBAR_STR = "named_step_trackbar";
const std::string NULL_STR = "null";
const std::string THEME_STR = "theme";
const std::string NOT_AVAILABLE_STR = "Not available";

/* ASAP STR */
const std::string NOT_OVERRIDE_STR = "Do not override";
const std::string AUTO_STR = "Auto";
const std::string CUSTOMCOL1_STR = "custom1";
const std::string CUSTOMCOL2_STR = "custom2";
const std::string CUSTOMCOL3_STR = "custom3";
const std::string SECTITLE_STR = "sectioninfo";
const std::string WARNING_STR = "warning";
const std::string ACCENT_STR = "accent";

// Pre-defined symbols
const std::string OPTION_SYMBOL = "\u22EF";
const std::string DROPDOWN_SYMBOL = "\u25B6";
const std::string CHECKMARK_SYMBOL = "\uE14B";
const std::string CROSSMARK_SYMBOL = "\uE14C";
const std::string DOWNLOAD_SYMBOL = "\u2193";
const std::string UNZIP_SYMBOL = "\u2191"; 
const std::string COPY_SYMBOL = "\u2192";
const std::string INPROGRESS_SYMBOL = "\u25CF";
const std::string STAR_SYMBOL = "\u2605";

// Include all functional headers used in the libUltra library
#include "debug_funcs.hpp"
#include "string_funcs.hpp"
#include "get_funcs.hpp"
#include "path_funcs.hpp"
#include "list_funcs.hpp"
#include "json_funcs.hpp"
#include "ini_funcs.hpp"
#include "hex_funcs.hpp"
#include "download_funcs.hpp"
#include "mod_funcs.hpp"

#endif // ULTRA_HPP
