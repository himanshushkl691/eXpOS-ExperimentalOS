load --os $HOME/Desktop/myexpos/spl/spl_progs/final_os_startup.xsm
load --init $HOME/Desktop/myexpos/expl/sample/odd.xsm
load --exec $HOME/Desktop/myexpos/expl/sample/even.xsm
load --idle $HOME/Desktop/myexpos/expl/sample/idle.xsm
load --exhandler $HOME/Desktop/myexpos/spl/spl_progs/haltprog.xsm
load --library $HOME/Desktop/myexpos/expl/library.lib
load --int=timer $HOME/Desktop/myexpos/spl/spl_progs/timer_handler.xsm
load --int=7 $HOME/Desktop/myexpos/spl/spl_progs/sample_int_7.xsm
load --int=10 $HOME/Desktop/myexpos/spl/spl_progs/int_10.xsm
load --module 5 $HOME/Desktop/myexpos/spl/spl_progs/module_5.xsm
load --module 7 $HOME/Desktop/myexpos/spl/spl_progs/module_7.xsm
