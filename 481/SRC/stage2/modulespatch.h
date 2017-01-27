#ifndef __MODULESPATCH_H__
#define __MODULESPATCH_H__

#include <lv2/process.h>
#include <lv2/thread.h>

// STATIC HASH - COBRA 7.5 CEX 481 FERROX

#if defined(FIRMWARE_4_81)  // Ported by Habib and Update by Alexander's 10/01/2017

#define VSH_CEX_HASH					0xb6b6d000002e0000 // STATIC HASH COBRA 7.5 vsh
#define BDP_DISC_CHECK_PLUGIN_HASH		0x9940000000003000 // STATIC HASH COBRA 7.5
#define BASIC_PLUGINS_HASH				0x55f470000001f000 // STATIC HASH COBRA 7.5
#define EXPLORE_PLUGIN_HASH				0xc50d0000000e0000 // STATIC HASH COBRA 7.5
#define EXPLORE_CATEGORY_GAME_HASH		0xde52d00000050000 // STATIC HASH COBRA 7.5
#define PS1_EMU_HASH					0xcc28500000090000 // STATIC HASH COBRA 7.5
#define PS1_NETEMU_HASH 				0xcc28b000000b0000 // STATIC HASH COBRA 7.5
#define GAME_EXT_PLUGIN_HASH			0xcc26800000010000 // STATIC HASH COBRA 7.5
#define PSP_EMULATOR_HASH				0xcc29b00000020000 // STATIC HASH COBRA 7.5
#define PEMUCORELIB_HASH				0x40425000000c0000 // STATIC HASH COBRA 7.5
#define EMULATOR_API_HASH				0x8409f00000010000 // STATIC HASH COBRA 7.5
#define EMULATOR_DRM_HASH				0xbbb8800000005000 // STATIC HASH COBRA 7.5
#define EMULATOR_DRM_DATA_HASH			0x2f3ab00000010000 // STATIC HASH COBRA 7.5
#define LIBSYSUTIL_SAVEDATA_PSP_HASH	0x0dfdc00000003000 // STATIC HASH COBRA 7.5
#define LIBFS_EXTERNAL_HASH				0x05fd000000006000 // STATIC HASH COBRA 7.5


//#define dex_game_update_offset		0x2790E0 // 0x278BE8  *4.76) // 

/* vsh */ // COBRA CEX 481

// 4.81 CEX's Offsets
#define cex_vsh_text_size		0x6B0000 // /* memsz of first program header aligned to 0x10000 */
#define cex_ps2tonet_patch		0xC4E34 // 4.66CEX =0xC4C24 // "60638202 480000444BFF"
#define cex_ps2tonet_size_patch 	0xC4E28 // 4.66CEX = 0xC4C18 // "38A004F0786400203860000060638202"
#define cex_psp_drm_patch1		0x242FC0 // 
#define cex_psp_drm_patch2		0x243A60 //
#define cex_psp_drm_patch3		0x24369C //
#define cex_psp_drm_patch4		0x243EA8 //
#define cex_psp_drm_patchA		0x2430DC //
#define cex_psp_drm_patchB		0x24397C //
#define cex_psp_drm_patchC		0x242B14 //
#define cex_psp_drm_patchD		0x2430C4 //
#define cex_psp_drm_patchE		0x2430C8 //
#define cex_psp_drm_patchF		0x243A94 //
#define cex_vmode_patch_offset		0x4431D8 // 

/* Spoof is not needed due to REX's static spoof */
//#define revision_offset          	0x65CE70 // 
//#define revision_offset2          	0x6FEE98 // /* In data section */
//#define spoof_version_patch          	0xB8E28 // 
//#define psn_spoof_version_patch         0x1A39E0 //

/* basic_plugins */// 4.81 CEX - same as 4.78
#define ps1emu_type_check_offset	0x1F78C // CEX Disabled by default
#define pspemu_path_offset		0x4A9F8 // CEX "Search /dev_bdvd/PS3_GM01"
#define psptrans_path_offset		0x4B628 // CEX "Search aDev_flashPsp_1:.string "/dev_flash/pspemu/psp_translator.self"

/* explore_plugin */// 4.81 CEX
//#define app_home_offset			0x250B90 // CEX  *aApp_homePs3_ga:.string "/app_home/PS3_GAME"* // Disabled by default
#define ps2_nonbw_offset       0xDD9B4	// CEX *aStoragemedi_25@h # "StorageMedia:StorageMedia.hybrid"*

/* explore_category_game */// same as 4.76
#define ps2_nonbw_offset2		0x68324 // CEX lis	 *r4, aStoragemedia_4@ha # "StorageMedia:StorageMedia.hybrid"*

/* bdp_disccheck_plugin */ //  the same as 4.46 - 4.81
#define dvd_video_region_check_offset	0x152C // 

/* ps1_emu */ // same as 4.66
#define ps1_emu_get_region_offset	0x3E74 // 

/* ps1_netemu */ // same as 4.66same as 4.66
#define ps1_netemu_get_region_offset	0xA440C // 

/* game_ext_plugin */// 4.81 CEX
#define sfo_check_offset		0x23B90 // CEX *lis	  r3, aPage_game_ma_1@ha # "page_game_main"*
#define ps2_nonbw_offset3		0x17000 // CEX *rlwinm	  r0, r0, 0,26,26*
#define ps_region_error_offset		0x68C0 // CEX  
/* Disable the check for the current video setting */
//#define ps_video_error_offset		0x3171C // li %r3, 0  disabled due to its issue with remote play on vita


/* psp_emulator */ //  4.75 CEX 
#define psp_set_psp_mode_offset 	0x1C18 // the same as 4.70

/* emulator_api */ // same as 4.66
#define psp_read				0x102D8 //
#define psp_read_header 		0x1125C //
#define psp_drm_patch5			0x11080 //
#define psp_drm_patch6			0x110B0 //
#define psp_drm_patch7			0x110C8 //
#define psp_drm_patch8			0x110CC //
#define psp_drm_patch9			0x1120C //
#define psp_drm_patch11 		0x11210 //
#define psp_drm_patch12 		0x11220 //
#define psp_product_id_patch1		0x11320 //
#define psp_product_id_patch3		0x115F8 //
#define umd_mutex_offset		(0x64480+0x38C) //

/* pemucorelib */ // same as 4.66
#define psp_eboot_dec_patch		0x5E6BC // same
#define psp_prx_patch			0x577D8 //
#define psp_savedata_bind_patch1	0x7A4BC //
#define psp_savedata_bind_patch2	0x7A514  //
#define psp_savedata_bind_patch3	0x7A030 //
#define psp_extra_savedata_patch	0x87540 // *4.55 = 0x8753C // 
#define psp_prometheus_patch		0x12EA28 //
#define prx_patch_call_lr		0x5892C //

/* emulator_drm */ // same as 4.66 - 4.81
#define psp_drm_tag_overwrite		0x4C68 //
#define psp_drm_key_overwrite		(0x27600-0xBE80) //

/* libsysutil_savedata_psp */ //same as 4.66 - 4.81
#define psp_savedata_patch1		0x46CC
#define psp_savedata_patch2		0x46A4
#define psp_savedata_patch3		0x4504
#define psp_savedata_patch4		0x453C
#define psp_savedata_patch5		0x4550
#define psp_savedata_patch6		0x46B8

/* libfs (external */ // The same as 4.55 - 4.81
#define aio_copy_root_offset		0xD658 //

#endif /* FIRMWARE */


typedef struct
{
	uint32_t offset;
	uint32_t data;
	uint8_t *condition;
} SprxPatch;

extern uint8_t condition_ps2softemu;
extern uint8_t condition_apphome;
extern uint8_t condition_psp_iso;
extern uint8_t condition_psp_dec;
extern uint8_t condition_psp_keys;
extern uint8_t condition_psp_change_emu;
extern uint8_t condition_psp_prometheus;
extern uint64_t vsh_check;
//extern uint8_t condition_game_ext_psx;

//extern uint8_t block_peek;

extern process_t vsh_process;
extern uint8_t safe_mode;

/* Functions for kernel */
void modules_patch_init(void);
//void do_spoof_patches(void);  Spoof is not needed due to REX's static spoof 
void load_boot_plugins(void);
void update_hashes(void);
int prx_load_vsh_plugin(unsigned int slot, char *path, void *arg, uint32_t arg_size);
int prx_unload_vsh_plugin(unsigned int slot);

int bc_to_net();

/* Syscalls */
//int sys_vsh_spoof_version(char *version_str);  //Spoof is not needed due to REX's static spoof 
int sys_prx_load_vsh_plugin(unsigned int slot, char *path, void *arg, uint32_t arg_size);
int sys_prx_unload_vsh_plugin(unsigned int slot);
int sys_thread_create_ex(sys_ppu_thread_t *thread, void *entry, uint64_t arg, int prio, uint64_t stacksize, uint64_t flags, const char *threadname);

// PS3Mapi v1.2.1
int ps3mapi_unload_vsh_plugin(char* name); 
void unhook_all_modules(void);
int ps3mapi_get_vsh_plugin_info(unsigned int slot, char *name, char *filename);

#endif /* __MODULESPATCH_H__ */

