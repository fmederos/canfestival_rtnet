#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x1dd8427f, "module_layout" },
	{ 0x1d1eddb7, "rt_cond_create" },
	{ 0xf834e968, "rt_mutex_create" },
	{ 0x5e183ebe, "rt_sem_create" },
	{ 0x99687090, "rt_cond_delete" },
	{ 0x36a51a40, "rt_mutex_delete" },
	{ 0xa7c8e0ac, "rt_sem_delete" },
	{ 0x87dde679, "rt_cond_wait" },
	{ 0x7c7f3a5, "rt_sem_p" },
	{ 0xa0de4901, "rt_sem_v" },
	{ 0x70f907d7, "rt_task_set_periodic" },
	{ 0xce8ea9c3, "rt_task_start" },
	{ 0xa17ff19a, "rt_task_create" },
	{ 0xb81960ca, "snprintf" },
	{ 0x2885753a, "current_task" },
	{ 0x50eedeb8, "printk" },
	{ 0xe4a4bc46, "rt_task_delete" },
	{ 0xe19e1c64, "rt_task_suspend" },
	{ 0x3b6f7fa, "rt_cond_signal" },
	{ 0xd6fe3c66, "xnarch_get_cpu_time" },
	{ 0xa4217dd2, "rt_mutex_release" },
	{ 0xa458f7eb, "nktbase" },
	{ 0xa8a65f46, "__native_tbase" },
	{ 0xab319c9e, "rt_mutex_acquire" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "0224D45409567C627501733");
