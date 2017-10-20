#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");

static char *name = "User-name";
module_param(name, charp, 0);

static int cnt = 3;
module_param(cnt, int, 0);

static int __init hello_init(void)
{
	int i;
	
	for (i = 0; i < cnt; i++)
		pr_alert("(%d) Greetings, %s\n", i, name);
	return 0;
}

static void __exit hello_exit(void)
{
	pr_alert("See ya, %s\n", name);
}

module_init(hello_init);
module_exit(hello_exit);
