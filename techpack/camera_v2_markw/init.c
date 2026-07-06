#include <linux/module.h>
#include <linux/printk.h>
#if IS_ENABLED(CONFIG_MACH_XIAOMI_MSM8953)
#include <xiaomi-msm8953/mach.h>
#endif

bool camera_markw_enable = false;

static int __init camera_markw_init(void)
{
#if IS_ENABLED(CONFIG_MACH_XIAOMI_MSM8953)
	if (xiaomi_msm8953_mach_get() == XIAOMI_MSM8953_MACH_MARKW)
		camera_markw_enable = true;
#endif

	if (camera_markw_enable)
		pr_info("Enable Markw Camera Stack.\n");

	return 0;
}

module_init(camera_markw_init);
