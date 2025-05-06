undefined1  [16] init_module(void)
    {
      ulong uVar1;
      
      major = __register_chrdev(0,0,0x100,&DAT_00100696,fops );
      if (major < 0) {
        _printk(&DAT_001006c0);
      }
      my_class = __class_create(__this_module,&DAT_0010069b, &__key.11);
      if (0xfffffffffffff000 < my_class) {
        __unregister_chrdev(major,0,0x100,&DAT_00100696);
        _printk(&DAT_001006e8);
      }
      uVar1 = device_create(my_class,0,major << 0x14,0,&DAT_00100696);
      if (uVar1 < 0xfffffffffffff001) {
        return ZEXT816(0);
      }
      class_destroy(my_class);
      __unregister_chrdev(major,0,0x100,&DAT_00100696);
      _printk(&DAT_00100710);
      return ZEXT816(0);
    }