#ifndef LIBRETRO_CORE_OPTIONS_INTL_H__
#define LIBRETRO_CORE_OPTIONS_INTL_H__

#if defined(_MSC_VER) && (_MSC_VER >= 1500 && _MSC_VER < 1900)
/* https://support.microsoft.com/en-us/kb/980263 */
#pragma execution_character_set("utf-8")
#pragma warning(disable:4566)
#endif

#include <libretro.h>

/*
 ********************************
 * VERSION: 1.3
 ********************************
 *
 * - 1.3: Move translations to libretro_core_options_intl.h
 *        - libretro_core_options_intl.h includes BOM and utf-8
 *          fix for MSVC 2010-2013
 *        - Added HAVE_NO_LANGEXTRA flag to disable translations
 *          on platforms/compilers without BOM support
 * - 1.2: Use core options v1 interface when
 *        RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION is >= 1
 *        (previously required RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION == 1)
 * - 1.1: Support generation of core options v0 retro_core_option_value
 *        arrays containing options with a single value
 * - 1.0: First commit
*/

#ifdef __cplusplus
extern "C" {
#endif

/*
 ********************************
 * Core Option Definitions
 ********************************
*/

/* RETRO_LANGUAGE_JAPANESE */

/* RETRO_LANGUAGE_FRENCH */

/* RETRO_LANGUAGE_SPANISH */

/* RETRO_LANGUAGE_GERMAN */

/* RETRO_LANGUAGE_ITALIAN */

/* RETRO_LANGUAGE_DUTCH */

/* RETRO_LANGUAGE_PORTUGUESE_BRAZIL */

/* RETRO_LANGUAGE_PORTUGUESE_PORTUGAL */

/* RETRO_LANGUAGE_RUSSIAN */

/* RETRO_LANGUAGE_KOREAN */

/* RETRO_LANGUAGE_CHINESE_TRADITIONAL */

/* RETRO_LANGUAGE_CHINESE_SIMPLIFIED */
struct retro_core_option_v2_category option_cats_chs[] = {
   {
      "system",
      "系统",
      "配置系统选项。"
   },
   {
      "video",
      "视频",
      "配置视频选项。"
   },
   {
      "audio",
      "音频",
      "配置音频选项。"
   },
   {
      "input",
      "输入",
      "配置输入选项。"
   },
   {
      "advanced",
      "高级选项",
      "配置高级选项，例如启用或者禁用声音通道或者图像层。"
   },
   { NULL, NULL, NULL },
};

struct retro_core_option_v2_definition option_defs_chs[] = {
    {
        "vbam_usebios",
        "使用官方BIOS（如果可用）",
        NULL,
        "如果可用的话使用官方BIOS。需要重启核心以应用改变。",
        NULL,
        "system",
        {
            { "disabled",  NULL },
            { "enabled",   NULL },
            { NULL, NULL },
        },
        "disabled"
    },
    {
        "vbam_forceRTCenable",
        "强制启用实时时钟",
        NULL,
        "对任何ROM强制启用内部实时时钟，此项对于需要时钟的修改版ROM比较有用（例如宝可梦）。",
        NULL,
        "system",
        {
            { "disabled",  NULL },
            { "enabled",   NULL },
            { NULL, NULL },
        },
        "disabled"
    },
    {
        "vbam_gbHardware",
        "(GB)模拟硬件（需要重启）",
        NULL,
        "设置模拟硬件类型。重启核心以应用改变。",
        NULL,
        "system",
        {
            { "gbc",  "Game Boy Color" },
            { "auto", "自动" },
            { "sgb",  "Super Game Boy" },
            { "gb",   "Game Boy" },
            { "gba",  "Game Boy Advance" },
            { "sgb2", "Super Game Boy 2" },
            { NULL, NULL },
        },
        "gbc"
    },
    {
        "vbam_allowcolorizerhack",
        "(GB)启用彩色化修改（需要重启）",
        NULL,
        "允许彩色化修改的GB游戏（例如DX修改游戏）能正常的在GBC/GBA硬件类型上运行。此选项会禁用BIOS文件。不建议对非彩色化游戏启用此项。",
        NULL,
        "system",
        {
            { "disabled",  NULL },
            { "enabled",   NULL },
            { NULL, NULL },
        },
        "disabled"
    },
    {
        "vbam_palettes",
        "(GB)调色板",
        NULL,
        "设置Game Boy调色板。",
        NULL,
        "video",
        {
            { "black and white", "黑白" },
            { "blue sea",     "海蓝" },
            { "dark knight",  "骑士黑" },
            { "green forest", "森林绿" },
            { "hot desert",   "沙漠黄" },
            { "pink dreams",  "粉红梦" },
            { "wierd colors", "古怪色" },
            { "original gameboy", "原始Game Boy" },
            { "gba sp",       "GBA SP" },
            { NULL, NULL },
        },
        "standard"
    },
    {
        "vbam_showborders",
        "(GB)显示边框",
        NULL,
        "如果加载的游戏是SGB兼容的，显示游戏内可用的边框。",
        NULL,
        "video",
        {
            { "disabled",  NULL },
            { "enabled",   NULL },
            { "auto",      "自动" },
            { NULL, NULL },
        },
        "disabled"
    },
    {
        "vbam_gbcoloroption",
        "(GB)色彩校正",
        NULL,
        "应用色彩校正以修复部分游戏的色彩。",
        NULL,
        "video",
        {
            { "disabled",  NULL },
            { "enabled",   NULL },
            { NULL, NULL },
        },
        "disabled"
    },
    {
        "vbam_lcdfilter",
        "LCD色彩滤镜",
        NULL,
        "通过应用屏幕滤镜加深屏幕显示颜色。",
        NULL,
        "video",
        {
            { "disabled",  NULL },
            { "enabled",   NULL },
            { NULL, NULL },
        },
        "disabled"
    },
    {
        "vbam_interframeblending",
        "帧间混合",
        NULL,
        "模拟LCD鬼影效果。‘智能’模式尝试检测屏幕闪烁，只在受影响的像素上执行50:50的混合；‘运动模糊’模式通过混合多个缓冲帧来模拟自然LCD的响应时间。对于主动利用LCD鬼影来实现透明效果的游戏，必须使用‘智能’模式（例如：《水上摩托》、《地球解放军》、《零式赛车》、《我们的太阳》系列）。",
        NULL,
        "video",
        {
            { "disabled",  NULL },
            { "smart",   "智能" },
            { "motion blur",   "运动模糊" },
            { NULL, NULL },
        },
        "disabled"
    },
    {
        "vbam_soundinterpolation",
        "音频滤镜",
        NULL,
        "启用或禁用音频滤镜。",
        NULL,
        "audio",
        {
            { "disabled",  NULL },
            { "enabled",   NULL },
            { NULL, NULL },
        },
        "enabled"
    },
    {
        "vbam_soundfiltering",
        "音频过滤等级",
        NULL,
        "设置过滤等级，更高的值代表减少更高的频率。",
        NULL,
        "audio",
        {
            { "0",  NULL },
            { "1",  NULL },
            { "2",  NULL },
            { "3",  NULL },
            { "4",  NULL },
            { "5",  NULL },
            { "6",  NULL },
            { "7",  NULL },
            { "8",  NULL },
            { "9",  NULL },
            { "10", NULL },
            { NULL, NULL },
        },
        "5"
    },
    {
        "vbam_turboenable",
        "启用连发键",
        NULL,
        "启用或者禁用手柄连发键。",
        NULL,
        "input",
        {
            { "disabled", NULL },
            { "enabled",  NULL },
            { NULL, NULL },
        },
        "enabled"
    },
    {
        "vbam_turbodelay",
        "连发键延迟（帧数）",
        NULL,
        "以帧数计的连发频率，值越高连发越快。",
        NULL,
        "input",
        {
            { "1",  NULL },
            { "2",  NULL },
            { "3",  NULL },
            { "4",  NULL },
            { "5",  NULL },
            { "6",  NULL },
            { "7",  NULL },
            { "8",  NULL },
            { "9",  NULL },
            { "10", NULL },
            { "11", NULL },
            { "12", NULL },
            { "13", NULL },
            { "14", NULL },
            { "15", NULL },
            { NULL, NULL },
        },
        "3"
    },
    {
        "vbam_solarsensor",
        "光线传感器",
        NULL,
        "调整《我们的太阳》系列游戏中的模拟光线传感器的强度等级。也可以用L2/R2键快速调整。",
        NULL,
        "input",
        {
            { "0",  NULL },
            { "1",  NULL },
            { "2",  NULL },
            { "3",  NULL },
            { "4",  NULL },
            { "5",  NULL },
            { "6",  NULL },
            { "7",  NULL },
            { "8",  NULL },
            { "9",  NULL },
            { "10", NULL },
            { NULL, NULL },
        },
        "0"
    },
    {
        "vbam_astick_deadzone",
        "摇杆死区（%）",
        NULL,
        "设置模拟摇杆的死区（以百分比计）",
        NULL,
        "input",
        {
            { "0",  NULL },
            { "5",  NULL },
            { "10", NULL },
            { "15", NULL },
            { "20", NULL },
            { "25", NULL },
            { "30", NULL },
            { NULL, NULL },
        },
        "15"
    },
    {
        "vbam_gyro_sensitivity",
        "传感器灵敏度 (旋转)(%)",
        NULL,
        "缺省绑定左摇杆。调整在支持陀螺仪的游戏中的灵敏度。",
        NULL,
        "input",
        {
            { "10",  NULL },
            { "15",  NULL },
            { "20",  NULL },
            { "25",  NULL },
            { "30",  NULL },
            { "35",  NULL },
            { "40",  NULL },
            { "45",  NULL },
            { "50",  NULL },
            { "55",  NULL },
            { "60",  NULL },
            { "65",  NULL },
            { "70",  NULL },
            { "75",  NULL },
            { "80",  NULL },
            { "85",  NULL },
            { "90",  NULL },
            { "95",  NULL },
            { "100", NULL },
            { "105", NULL },
            { "110", NULL },
            { "115", NULL },
            { "120", NULL },
            { NULL, NULL },
        },
        "100"
    },
    {
        "vbam_tilt_sensitivity",
        "传感器灵敏度 (倾斜)(%)",
        NULL,
        "缺省绑定右摇杆。调整在支持陀螺仪的游戏中的灵敏度。",
        NULL,
        "input",
        {
            { "10",  NULL },
            { "15",  NULL },
            { "20",  NULL },
            { "25",  NULL },
            { "30",  NULL },
            { "35",  NULL },
            { "40",  NULL },
            { "45",  NULL },
            { "50",  NULL },
            { "55",  NULL },
            { "60",  NULL },
            { "65",  NULL },
            { "70",  NULL },
            { "75",  NULL },
            { "80",  NULL },
            { "85",  NULL },
            { "90",  NULL },
            { "95",  NULL },
            { "100", NULL },
            { "105", NULL },
            { "110", NULL },
            { "115", NULL },
            { "120", NULL },
            { NULL, NULL },
        },
        "100"
    },
    {
        "vbam_swap_astick",
        "交换左右模拟摇杆",
        NULL,
        "交换左右摇杆的旋转和倾斜功能。",
        NULL,
        "input",
        {
            { "disabled", NULL },
            { "enabled",  NULL },
            { NULL, NULL },
        },
        "disabled"
    },
    {
        "vbam_sound_1",
        "声道1",
        NULL,
        "开启或者关闭音调和扫频声道。",
        NULL,
        "advanced",
        {
            { "disabled", NULL },
            { "enabled",  NULL },
            { NULL, NULL },
        },
        "enabled"
    },
    {
        "vbam_sound_2",
        "声道2",
        NULL,
        "开启或者关闭音调声道。",
        NULL,
        "advanced",
        {
            { "disabled", NULL },
            { "enabled",  NULL },
            { NULL, NULL },
        },
        "enabled"
    },
    {
        "vbam_sound_3",
        "声道3",
        NULL,
        "开启或者关闭波形输出声道。",
        NULL,
        "advanced",
        {
            { "disabled", NULL },
            { "enabled",  NULL },
            { NULL, NULL },
        },
        "enabled"
    },
    {
        "vbam_sound_4",
        "声道4",
        NULL,
        "开启或者关闭噪音声道。",
        NULL,
        "advanced",
        {
            { "disabled", NULL },
            { "enabled",  NULL },
            { NULL, NULL },
        },
        "enabled"
    },
    {
        "vbam_sound_5",
        "DMA声道A",
        NULL,
        "开启或者关闭DMA声道A。",
        NULL,
        "advanced",
        {
            { "disabled", NULL },
            { "enabled",  NULL },
            { NULL, NULL },
        },
        "enabled"
    },
    {
        "vbam_sound_6",
        "DMA声道B",
        NULL,
        "开启或者关闭DMA声道B。",
        NULL,
        "advanced",
        {
            { "disabled", NULL },
            { "enabled",  NULL },
            { NULL, NULL },
        },
        "enabled"
    },
    {
        "vbam_layer_1",
        "显示背景层1",
        NULL,
        "显示或者隐藏背景层1。",
        NULL,
        "advanced",
        {
            { "disabled", NULL },
            { "enabled",  NULL },
            { NULL, NULL },
        },
        "enabled"
    },
    {
        "vbam_layer_2",
        "显示背景层2",
        NULL,
        "显示或者隐藏背景层2。",
        NULL,
        "advanced",
        {
            { "disabled", NULL },
            { "enabled",  NULL },
            { NULL, NULL },
        },
        "enabled"
    },
    {
        "vbam_layer_3",
        "显示背景层3",
        NULL,
        "显示或者隐藏背景层3。",
        NULL,
        "advanced",
        {
            { "disabled", NULL },
            { "enabled",  NULL },
            { NULL, NULL },
        },
        "enabled"
    },
    {
        "vbam_layer_4",
        "显示背景层4",
        NULL,
        "显示或者隐藏背景层4。",
        NULL,
        "advanced",
        {
            { "disabled", NULL },
            { "enabled",  NULL },
            { NULL, NULL },
        },
        "enabled"
    },
    {
        "vbam_layer_5",
        "显示角色层",
        NULL,
        "显示或者隐藏角色层。",
        NULL,
        "advanced",
        {
            { "disabled", NULL },
            { "enabled",  NULL },
            { NULL, NULL },
        },
        "enabled"
    },
    {
        "vbam_layer_6",
        "显示窗口层1",
        NULL,
        "显示或者隐藏窗口层1。",
        NULL,
        "advanced",
        {
            { "disabled", NULL },
            { "enabled",  NULL },
            { NULL, NULL },
        },
        "enabled"
    },
    {
        "vbam_layer_7",
        "显示窗口层2",
        NULL,
        "显示或者隐藏窗口层2。",
        NULL,
        "advanced",
        {
            { "disabled", NULL },
            { "enabled",  NULL },
            { NULL, NULL },
        },
        "enabled"
    },
    {
        "vbam_layer_8",
        "显示角色窗口层",
        NULL,
        "显示或者隐藏角色窗口层。",
        NULL,
        "advanced",
        {
            { "disabled", NULL },
            { "enabled",  NULL },
            { NULL, NULL },
        },
        "enabled"
    },
    { NULL, NULL, NULL, NULL, NULL, NULL, { { NULL, NULL } }, NULL },
};

struct retro_core_options_v2 options_chs = {
   option_cats_chs,
   option_defs_chs
};

/* RETRO_LANGUAGE_ESPERANTO */

/* RETRO_LANGUAGE_POLISH */

/* RETRO_LANGUAGE_VIETNAMESE */

/* RETRO_LANGUAGE_ARABIC */

/* RETRO_LANGUAGE_GREEK */

/* RETRO_LANGUAGE_TURKISH */

struct retro_core_option_v2_category option_cats_tr[] = {
   {
      "system",
      NULL,
      NULL,
   },
   {
      "video",
      NULL,
      NULL,
   },
   {
      "audio",
      NULL,
      NULL,
   },
   {
      "input",
      NULL,
      NULL,
   },
   {
      "advanced",
      NULL,
      NULL,
   },
   { NULL, NULL, NULL },
};

struct retro_core_option_v2_definition option_defs_tr[] = {
    {
        "vbam_usebios",
        "Resmi BIOS'u kullanın (Varsa)",
        NULL,
        "Mümkün olduğunda resmi BIOS kullanın. Değişikliklerin uygulanabilmesi için çekirdeğin yeniden başlatılması gerekiyor.",
        NULL,
        "system",
        {
            { "disabled",  NULL },
            { "enabled",   NULL },
            { NULL, NULL },
        },
        "disabled"
    },
    {
        "vbam_forceRTCenable",
        "RTC'yi Etkinleştir",
        NULL,
        "RAM'den bağımsız olarak dahili gerçek zamanlı saati etkinleştirmeye zorlar. Saatin etkinleştirilmesini gerektiren rom yamalar için kullanılabilir (Pokemon gibi).",
        NULL,
        "system",
        {
            { "disabled",  NULL },
            { "enabled",   NULL },
            { NULL, NULL },
        },
        "disabled"
    },
    {
        "vbam_gbHardware",
        "(GB) Öykünülmüş Donanım (Yeniden Başlatılması Gerekiyor)",
        NULL,
        "Game Boy donanım tipini taklit edecek şekilde ayarlar. Uygulamak için çekirdeği yeniden başlatın.",
        NULL,
        "system",
        {
            { "gbc",  "Game Boy Color" },
            { "auto", "Automatic" },
            { "sgb",  "Super Game Boy" },
            { "gb",   "Game Boy" },
            { "gba",  "Game Boy Advance" },
            { "sgb2", "Super Game Boy 2" },
            { NULL, NULL },
        },
        "gbc"
    },
    {
        "vbam_allowcolorizerhack",
        "(GB) Colorizer Hack'i Etkinleştir (Yeniden Başlatılması Gerekiyor)",
        NULL,
        "Colorizer'ın saldırıya uğramış GB oyunlarının (örn. DX yamalı oyunlar) normalde GBC / GBA donanım türünde çalışmasına izin verir. Bu ayrıca bios dosyasının kullanımını da devre dışı bırakır. Renklendirilmemiş oyunlarda kullanılması tavsiye edilmez.",
        NULL,
        "system",
        {
            { "disabled",  NULL },
            { "enabled",   NULL },
            { NULL, NULL },
        },
        "disabled"
    },
    {
        "vbam_palettes",
        "(GB) Renk Paleti",
        NULL,
        "Game Boy paletlerini kullanmak için ayarlayın.",
        NULL,
        "video",
        {
            { "black and white", NULL },
            { "blue sea",     NULL },
            { "dark knight",  NULL },
            { "green forest", NULL },
            { "hot desert",   NULL },
            { "pink dreams",  NULL },
            { "wierd colors", NULL },
            { "original gameboy", NULL },
            { "gba sp",       NULL },
            { NULL, NULL },
        },
        "standard"
    },
    {
        "vbam_showborders",
        "(GB) Sınırları Göster",
        NULL,
        "Etkinleştirildiğinde, yüklü içerik SGB uyumluysa, bu durum oyundaki sınırı gösterir.",
        NULL,
        "video",
        {
            { "disabled",  NULL },
            { "enabled",   NULL },
            { "auto",      NULL },
            { NULL, NULL },
        },
        "disabled"
    },
    {
        "vbam_gbcoloroption",
        "(GB) Renk Düzeltme",
        NULL,
        "Bazı oyunlarda renkleri düzelten renk düzeltmesini uygular.",
        NULL,
        "video",
        {
            { "disabled",  NULL },
            { "enabled",   NULL },
            { NULL, NULL },
        },
        "disabled"
    },
    {
        "vbam_soundinterpolation",
        "Ses Enterpolasyonu",
        NULL,
        "Ses filtresini etkinleştirin veya devre dışı bırakın.",
        NULL,
        "audio",
        {
            { "disabled",  NULL },
            { "enabled",   NULL },
            { NULL, NULL },
        },
        "enabled"
    },
    {
        "vbam_soundfiltering",
        "Ses Filtreleme",
        NULL,
        "Kullanılacak filtreleme miktarını ayarlar. Yüksek değer, yüksek frekansları azaltır.",
        NULL,
        "audio",
        {
            { "0",  NULL },
            { "1",  NULL },
            { "2",  NULL },
            { "3",  NULL },
            { "4",  NULL },
            { "5",  NULL },
            { "6",  NULL },
            { "7",  NULL },
            { "8",  NULL },
            { "9",  NULL },
            { "10", NULL },
            { NULL, NULL },
        },
        "5"
    },
    {
        "vbam_turboenable",
        "Turbo Düğmelerini Etkinleştir",
        NULL,
        "Gamepad turbo düğmelerini etkinleştirin veya devre dışı bırakın.",
        NULL,
        "input",
        {
            { "disabled", NULL },
            { "enabled",  NULL },
            { NULL, NULL },
        },
        "enabled"
    },
    {
        "vbam_turbodelay",
        "Turbo Gecikme (kare cinsinden)",
        NULL,
        "Karelerde turbo tetikleyicilerin oranını tekrarlayın. Daha yüksek değer daha fazla tetikler.",
        NULL,
        "input",
        {
            { "1",  NULL },
            { "2",  NULL },
            { "3",  NULL },
            { "4",  NULL },
            { "5",  NULL },
            { "6",  NULL },
            { "7",  NULL },
            { "8",  NULL },
            { "9",  NULL },
            { "10", NULL },
            { "11", NULL },
            { "12", NULL },
            { "13", NULL },
            { "14", NULL },
            { "15", NULL },
            { NULL, NULL },
        },
        "3"
    },
    {
        "vbam_solarsensor",
        "Solar Sensör Seviyesi",
        NULL,
        "Boktai oyunlarında simüle güneş seviyesini ayarlar. L2 / R2 düğmeleri ayrıca seviyeleri hızlıca değiştirmek için de kullanılabilir.",
        NULL,
        "input",
        {
            { "0",  NULL },
            { "1",  NULL },
            { "2",  NULL },
            { "3",  NULL },
            { "4",  NULL },
            { "5",  NULL },
            { "6",  NULL },
            { "7",  NULL },
            { "8",  NULL },
            { "9",  NULL },
            { "10", NULL },
            { NULL, NULL },
        },
        "0"
    },
    {
        "vbam_astick_deadzone",
        "Sensörlerin Ölü Bölgesi (%)",
        NULL,
        "Analog çubukların ölü bölgesini (yüzde olarak) ayarlayın.",
        NULL,
        "input",
        {
            { "0",  NULL },
            { "5",  NULL },
            { "10", NULL },
            { "15", NULL },
            { "20", NULL },
            { "25", NULL },
            { "30", NULL },
            { NULL, NULL },
        },
        "15"
    },
    {
        "vbam_gyro_sensitivity",
        "Sensör Hassasiyeti (Jiroskop) (%)",
        NULL,
        "Varsayılan konumlandırma, sol analogdur. Gyro özellikli oyunlar için hassasiyet seviyesini ayarlamak için kullanılır.",
        NULL,
        "input",
        {
            { "10",  NULL },
            { "15",  NULL },
            { "20",  NULL },
            { "25",  NULL },
            { "30",  NULL },
            { "35",  NULL },
            { "40",  NULL },
            { "45",  NULL },
            { "50",  NULL },
            { "55",  NULL },
            { "60",  NULL },
            { "65",  NULL },
            { "70",  NULL },
            { "75",  NULL },
            { "80",  NULL },
            { "85",  NULL },
            { "90",  NULL },
            { "95",  NULL },
            { "100", NULL },
            { "105", NULL },
            { "110", NULL },
            { "115", NULL },
            { "120", NULL },
            { NULL, NULL },
        },
        "100"
    },
    {
        "vbam_tilt_sensitivity",
        "Sensör Hassasiyeti (Eğim) (%)",
        NULL,
        "Varsayılan konumlandırma sağ analogdur. Gyro özellikli oyunlar için hassasiyet seviyesini ayarlamak için kullanılır.",
        NULL,
        "input",
        {
            { "10",  NULL },
            { "15",  NULL },
            { "20",  NULL },
            { "25",  NULL },
            { "30",  NULL },
            { "35",  NULL },
            { "40",  NULL },
            { "45",  NULL },
            { "50",  NULL },
            { "55",  NULL },
            { "60",  NULL },
            { "65",  NULL },
            { "70",  NULL },
            { "75",  NULL },
            { "80",  NULL },
            { "85",  NULL },
            { "90",  NULL },
            { "95",  NULL },
            { "100", NULL },
            { "105", NULL },
            { "110", NULL },
            { "115", NULL },
            { "120", NULL },
            { NULL, NULL },
        },
        "100"
    },
    {
        "vbam_swap_astick",
        "Sol / Sağ Analog Değiştirme",
        NULL,
        "Döndürme ve eğme için sola ve sağa analog çubuk işlevini değiştirir.",
        NULL,
        "input",
        {
            { "disabled", NULL },
            { "enabled",  NULL },
            { NULL, NULL },
        },
        "disabled"
    },
    {
        "vbam_sound_1",
        "Ses Kanalı 1",
        NULL,
        "Tonlu ve tarama ses kanalını etkinleştirir veya devre dışı bırakır.",
        NULL,
        "advanced",
        {
            { "disabled", NULL },
            { "enabled",  NULL },
            { NULL, NULL },
        },
        "enabled"
    },
    {
        "vbam_sound_2",
        "Ses Kanalı 2",
        NULL,
        "Tonlu ses kanalını etkinleştirir veya devre dışı bırakır.",
        NULL,
        "advanced",
        {
            { "disabled", NULL },
            { "enabled",  NULL },
            { NULL, NULL },
        },
        "enabled"
    },
    {
        "vbam_sound_3",
        "Ses Kanalı 3",
        NULL,
        "Dalga çıkışı ses kanalını etkinleştirir veya devre dışı bırakır.",
        NULL,
        "advanced",
        {
            { "disabled", NULL },
            { "enabled",  NULL },
            { NULL, NULL },
        },
        "enabled"
    },
    {
        "vbam_sound_4",
        "Ses Kanalı 4",
        NULL,
        "Gürültü ses kanalını etkinleştirir veya devre dışı bırakır.",
        NULL,
        "advanced",
        {
            { "disabled", NULL },
            { "enabled",  NULL },
            { NULL, NULL },
        },
        "enabled"
    },
    {
        "vbam_sound_5",
        "DMA Ses Kanalı A",
        NULL,
        "DMA ses kanalı A'yı etkinleştirir veya devre dışı bırakır.",
        NULL,
        "advanced",
        {
            { "disabled", NULL },
            { "enabled",  NULL },
            { NULL, NULL },
        },
        "enabled"
    },
    {
        "vbam_sound_6",
        "DMA Ses Kanalı B",
        NULL,
        "DMA ses kanalı B'yi etkinleştirir veya devre dışı bırakır.",
        NULL,
        "advanced",
        {
            { "disabled", NULL },
            { "enabled",  NULL },
            { NULL, NULL },
        },
        "enabled"
    },
    {
        "vbam_layer_1",
        "Arka Plan Katmanını Göster 1",
        NULL,
        "1. arka plan katmanını gösterir veya gizler.",
        NULL,
        "advanced",
        {
            { "disabled", NULL },
            { "enabled",  NULL },
            { NULL, NULL },
        },
        "enabled"
    },
    {
        "vbam_layer_2",
        "Arka Plan Katmanını Göster 2",
        NULL,
        "2. arka plan katmanını gösterir veya gizler.",
        NULL,
        "advanced",
        {
            { "disabled", NULL },
            { "enabled",  NULL },
            { NULL, NULL },
        },
        "enabled"
    },
    {
        "vbam_layer_3",
        "Arka Plan Katmanını Göster 3",
        NULL,
        "3. arka plan katmanını gösterir veya gizler.",
        NULL,
        "advanced",
        {
            { "disabled", NULL },
            { "enabled",  NULL },
            { NULL, NULL },
        },
        "enabled"
    },
    {
        "vbam_layer_4",
        "Arka Plan Katmanını Göster 4",
        NULL,
        "4. arka plan katmanını gösterir veya gizler.",
        NULL,
        "advanced",
        {
            { "disabled", NULL },
            { "enabled",  NULL },
            { NULL, NULL },
        },
        "enabled"
    },
    {
        "vbam_layer_5",
        "Sprite Katmanını Göster",
        NULL,
        "Sprite katmanını gösterir veya gizler.",
        NULL,
        "advanced",
        {
            { "disabled", NULL },
            { "enabled",  NULL },
            { NULL, NULL },
        },
        "enabled"
    },
    {
        "vbam_layer_6",
        "Pencere Katmanını Göster 1",
        NULL,
        "Pencere katmanı 1'i gösterir veya gizler.",
        NULL,
        "advanced",
        {
            { "disabled", NULL },
            { "enabled",  NULL },
            { NULL, NULL },
        },
        "enabled"
    },
    {
        "vbam_layer_7",
        "Pencere Katmanını Göster 2",
        NULL,
        "Pencere katmanı 2'yi gösterir veya gizler.",
        NULL,
        "advanced",
        {
            { "disabled", NULL },
            { "enabled",  NULL },
            { NULL, NULL },
        },
        "enabled"
    },
    {
        "vbam_layer_8",
        "Sprite Pencere Katmanını Göster",
        NULL,
        "Sprite pencere katmanını gösterir veya gizler.",
        NULL,
        "advanced",
        {
            { "disabled", NULL },
            { "enabled",  NULL },
            { NULL, NULL },
        },
        "enabled"
    },

    { NULL, NULL, NULL, NULL, NULL, NULL, { { NULL, NULL } }, NULL },
};

struct retro_core_options_v2 options_tr = {
   option_cats_tr,
   option_defs_tr
};

#ifdef __cplusplus
}
#endif

#endif