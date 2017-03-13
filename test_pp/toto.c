








































































































	#define __deprecated_msg(_msg) __attribute__((deprecated(_msg)))





	#define __deprecated_enum_msg(_msg) __deprecated_msg(_msg)






























































































































































































































































































































































































































































































































































































































































































































































typedef __signed char		__int8_t;



typedef unsigned char		__uint8_t;
typedef	short			__int16_t;
typedef	unsigned short		__uint16_t;
typedef int			__int32_t;
typedef unsigned int		__uint32_t;
typedef long long		__int64_t;
typedef unsigned long long	__uint64_t;

typedef long			__darwin_intptr_t;
typedef unsigned int		__darwin_natural_t;




typedef int			__darwin_ct_rune_t;	





typedef union {
	char		__mbstate8[128];
	long long	_mbstateL;			
} __mbstate_t;

typedef __mbstate_t		__darwin_mbstate_t;	


typedef long int	__darwin_ptrdiff_t;	







typedef long unsigned int		__darwin_size_t;	





typedef __builtin_va_list	__darwin_va_list;	





typedef int		__darwin_wchar_t;	




typedef __darwin_wchar_t	__darwin_rune_t;	


typedef int		__darwin_wint_t;	




typedef unsigned long		__darwin_clock_t;	
typedef __uint32_t		__darwin_socklen_t;	
typedef long			__darwin_ssize_t;	
typedef long			__darwin_time_t;	
















typedef	__int64_t	__darwin_blkcnt_t;	
typedef	__int32_t	__darwin_blksize_t;	
typedef __int32_t	__darwin_dev_t;		
typedef unsigned int	__darwin_fsblkcnt_t;	
typedef unsigned int	__darwin_fsfilcnt_t;	
typedef __uint32_t	__darwin_gid_t;		
typedef __uint32_t	__darwin_id_t;		
typedef __uint64_t	__darwin_ino64_t;	

typedef __darwin_ino64_t __darwin_ino_t;	



typedef __darwin_natural_t __darwin_mach_port_name_t; 
typedef __darwin_mach_port_name_t __darwin_mach_port_t; 
typedef __uint16_t	__darwin_mode_t;	
typedef __int64_t	__darwin_off_t;		
typedef __int32_t	__darwin_pid_t;		
typedef __uint32_t	__darwin_sigset_t;	
typedef __int32_t	__darwin_suseconds_t;	
typedef __uint32_t	__darwin_uid_t;		
typedef __uint32_t	__darwin_useconds_t;	
typedef	unsigned char	__darwin_uuid_t[16];
typedef	char	__darwin_uuid_string_t[37];









// pthread opaque structures


struct __darwin_pthread_handler_rec {
	void (*__routine)(void *);	// Routine to call
	void *__arg;			// Argument to pass
	struct __darwin_pthread_handler_rec *__next;
};

struct _opaque_pthread_attr_t {
	long __sig;
	char __opaque[56];
};

struct _opaque_pthread_cond_t {
	long __sig;
	char __opaque[40];
};

struct _opaque_pthread_condattr_t {
	long __sig;
	char __opaque[8];
};

struct _opaque_pthread_mutex_t {
	long __sig;
	char __opaque[56];
};

struct _opaque_pthread_mutexattr_t {
	long __sig;
	char __opaque[8];
};

struct _opaque_pthread_once_t {
	long __sig;
	char __opaque[8];
};

struct _opaque_pthread_rwlock_t {
	long __sig;
	char __opaque[192];
};

struct _opaque_pthread_rwlockattr_t {
	long __sig;
	char __opaque[16];
};

struct _opaque_pthread_t {
	long __sig;
	struct __darwin_pthread_handler_rec  *__cleanup_stack;
	char __opaque[8176];
};

typedef struct _opaque_pthread_attr_t __darwin_pthread_attr_t;
typedef struct _opaque_pthread_cond_t __darwin_pthread_cond_t;
typedef struct _opaque_pthread_condattr_t __darwin_pthread_condattr_t;
typedef unsigned long __darwin_pthread_key_t;
typedef struct _opaque_pthread_mutex_t __darwin_pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t __darwin_pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t __darwin_pthread_once_t;
typedef struct _opaque_pthread_rwlock_t __darwin_pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t __darwin_pthread_rwlockattr_t;
typedef struct _opaque_pthread_t *__darwin_pthread_t;














typedef	int		__darwin_nl_item;
typedef	int		__darwin_wctrans_t;

typedef	__uint32_t	__darwin_wctype_t;




























 


 




































    #ifdef __ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__
        
        
    #endif



    #ifdef __ENVIRONMENT_TV_OS_VERSION_MIN_REQUIRED__
        
        
        #define __TV_OS_VERSION_MAX_ALLOWED 100000 
        
        
    #endif



    #ifdef __ENVIRONMENT_WATCH_OS_VERSION_MIN_REQUIRED__
        
        
        #define __WATCH_OS_VERSION_MAX_ALLOWED 30000
        
        
    #endif






    #if 1
        
    #else
        
    #endif










    
    
        #define __IPHONE_OS_VERSION_MAX_ALLOWED     100200
    
    
    




    
        #if 1
            
            
            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_2_0    __attribute__((availability(ios,introduced=2.0,deprecated=2.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_2_0_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=2.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_2_1    __attribute__((availability(ios,introduced=2.0,deprecated=2.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_2_1_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=2.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_2_2    __attribute__((availability(ios,introduced=2.0,deprecated=2.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_2_2_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=2.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_3_0    __attribute__((availability(ios,introduced=2.0,deprecated=3.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_3_0_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=3.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_3_1    __attribute__((availability(ios,introduced=2.0,deprecated=3.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_3_1_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=3.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_3_2    __attribute__((availability(ios,introduced=2.0,deprecated=3.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_3_2_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=3.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_4_0    __attribute__((availability(ios,introduced=2.0,deprecated=4.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_4_0_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=4.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_4_1    __attribute__((availability(ios,introduced=2.0,deprecated=4.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_4_1_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=4.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_4_2    __attribute__((availability(ios,introduced=2.0,deprecated=4.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_4_2_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=4.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_4_3    __attribute__((availability(ios,introduced=2.0,deprecated=4.3)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_4_3_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=4.3,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_5_0    __attribute__((availability(ios,introduced=2.0,deprecated=5.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_5_0_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=5.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_5_1    __attribute__((availability(ios,introduced=2.0,deprecated=5.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_5_1_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=5.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_6_0    __attribute__((availability(ios,introduced=2.0,deprecated=6.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_6_0_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=6.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_6_1    __attribute__((availability(ios,introduced=2.0,deprecated=6.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_6_1_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=6.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_7_0    __attribute__((availability(ios,introduced=2.0,deprecated=7.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_7_0_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=7.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_7_1    __attribute__((availability(ios,introduced=2.0,deprecated=7.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_7_1_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=7.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_8_0    __attribute__((availability(ios,introduced=2.0,deprecated=8.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_8_0_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=8.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_8_1    __attribute__((availability(ios,introduced=2.0,deprecated=8.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_8_1_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=8.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_8_2    __attribute__((availability(ios,introduced=2.0,deprecated=8.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_8_2_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=8.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_8_3    __attribute__((availability(ios,introduced=2.0,deprecated=8.3)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_8_3_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=8.3,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_8_4    __attribute__((availability(ios,introduced=2.0,deprecated=8.4)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_8_4_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=8.4,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_9_0    __attribute__((availability(ios,introduced=2.0,deprecated=9.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_9_0_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=9.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_9_1    __attribute__((availability(ios,introduced=2.0,deprecated=9.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_9_1_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=9.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_9_2    __attribute__((availability(ios,introduced=2.0,deprecated=9.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_9_2_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=9.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_9_3    __attribute__((availability(ios,introduced=2.0,deprecated=9.3)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_9_3_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=9.3,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_10_0    __attribute__((availability(ios,introduced=2.0,deprecated=10.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_10_0_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=10.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_10_1    __attribute__((availability(ios,introduced=2.0,deprecated=10.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_10_1_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=10.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_10_2    __attribute__((availability(ios,introduced=2.0,deprecated=10.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_10_2_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=10.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_NA               __attribute__((availability(ios,introduced=2.0)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_2_1                    __attribute__((availability(ios,introduced=2.1)))
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_NA_MSG(_msg)     __attribute__((availability(ios,introduced=2.1)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_2_2    __attribute__((availability(ios,introduced=2.2,deprecated=2.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_2_2_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=2.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_3_0    __attribute__((availability(ios,introduced=2.2,deprecated=3.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_3_0_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=3.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_3_1    __attribute__((availability(ios,introduced=2.2,deprecated=3.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_3_1_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=3.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_3_2    __attribute__((availability(ios,introduced=2.2,deprecated=3.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_3_2_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=3.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_4_0    __attribute__((availability(ios,introduced=2.2,deprecated=4.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_4_0_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=4.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_4_1    __attribute__((availability(ios,introduced=2.2,deprecated=4.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_4_1_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=4.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_4_2    __attribute__((availability(ios,introduced=2.2,deprecated=4.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_4_2_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=4.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_4_3    __attribute__((availability(ios,introduced=2.2,deprecated=4.3)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_4_3_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=4.3,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_5_0    __attribute__((availability(ios,introduced=2.2,deprecated=5.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_5_0_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=5.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_5_1    __attribute__((availability(ios,introduced=2.2,deprecated=5.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_5_1_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=5.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_6_0    __attribute__((availability(ios,introduced=2.2,deprecated=6.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_6_0_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=6.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_6_1    __attribute__((availability(ios,introduced=2.2,deprecated=6.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_6_1_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=6.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_7_0    __attribute__((availability(ios,introduced=2.2,deprecated=7.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_7_0_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=7.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_7_1    __attribute__((availability(ios,introduced=2.2,deprecated=7.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_7_1_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=7.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_8_0    __attribute__((availability(ios,introduced=2.2,deprecated=8.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_8_0_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=8.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_8_1    __attribute__((availability(ios,introduced=2.2,deprecated=8.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_8_1_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=8.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_8_2    __attribute__((availability(ios,introduced=2.2,deprecated=8.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_8_2_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=8.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_8_3    __attribute__((availability(ios,introduced=2.2,deprecated=8.3)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_8_3_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=8.3,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_8_4    __attribute__((availability(ios,introduced=2.2,deprecated=8.4)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_8_4_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=8.4,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_9_0    __attribute__((availability(ios,introduced=2.2,deprecated=9.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_9_0_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=9.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_9_1    __attribute__((availability(ios,introduced=2.2,deprecated=9.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_9_1_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=9.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_9_2    __attribute__((availability(ios,introduced=2.2,deprecated=9.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_9_2_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=9.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_9_3    __attribute__((availability(ios,introduced=2.2,deprecated=9.3)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_9_3_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=9.3,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_10_0    __attribute__((availability(ios,introduced=2.2,deprecated=10.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_10_0_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=10.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_10_1    __attribute__((availability(ios,introduced=2.2,deprecated=10.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_10_1_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=10.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_10_2    __attribute__((availability(ios,introduced=2.2,deprecated=10.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_10_2_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=10.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_NA               __attribute__((availability(ios,introduced=2.2)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_0                    __attribute__((availability(ios,introduced=3.0)))
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_NA_MSG(_msg)     __attribute__((availability(ios,introduced=3.0)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_3_1    __attribute__((availability(ios,introduced=3.1,deprecated=3.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_3_1_MSG(_msg)    __attribute__((availability(ios,introduced=3.1,deprecated=3.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_3_2    __attribute__((availability(ios,introduced=3.1,deprecated=3.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_3_2_MSG(_msg)    __attribute__((availability(ios,introduced=3.1,deprecated=3.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_4_0    __attribute__((availability(ios,introduced=3.1,deprecated=4.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_4_0_MSG(_msg)    __attribute__((availability(ios,introduced=3.1,deprecated=4.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_4_1    __attribute__((availability(ios,introduced=3.1,deprecated=4.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_4_1_MSG(_msg)    __attribute__((availability(ios,introduced=3.1,deprecated=4.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_4_2    __attribute__((availability(ios,introduced=3.1,deprecated=4.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_4_2_MSG(_msg)    __attribute__((availability(ios,introduced=3.1,deprecated=4.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_4_3    __attribute__((availability(ios,introduced=3.1,deprecated=4.3)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_4_3_MSG(_msg)    __attribute__((availability(ios,introduced=3.1,deprecated=4.3,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_5_0    __attribute__((availability(ios,introduced=3.1,deprecated=5.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_5_0_MSG(_msg)    __attribute__((availability(ios,introduced=3.1,deprecated=5.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_5_1    __attribute__((availability(ios,introduced=3.1,deprecated=5.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_5_1_MSG(_msg)    __attribute__((availability(ios,introduced=3.1,deprecated=5.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_6_0    __attribute__((availability(ios,introduced=3.1,deprecated=6.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_6_0_MSG(_msg)    __attribute__((availability(ios,introduced=3.1,deprecated=6.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_6_1    __attribute__((availability(ios,introduced=3.1,deprecated=6.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_6_1_MSG(_msg)    __attribute__((availability(ios,introduced=3.1,deprecated=6.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_7_0    __attribute__((availability(ios,introduced=3.1,deprecated=7.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_7_0_MSG(_msg)    __attribute__((availability(ios,introduced=3.1,deprecated=7.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_7_1    __attribute__((availability(ios,introduced=3.1,deprecated=7.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_7_1_MSG(_msg)    __attribute__((availability(ios,introduced=3.1,deprecated=7.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_8_0    __attribute__((availability(ios,introduced=3.1,deprecated=8.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_8_0_MSG(_msg)    __attribute__((availability(ios,introduced=3.1,deprecated=8.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_8_1    __attribute__((availability(ios,introduced=3.1,deprecated=8.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_8_1_MSG(_msg)    __attribute__((availability(ios,introduced=3.1,deprecated=8.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_8_2    __attribute__((availability(ios,introduced=3.1,deprecated=8.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_8_2_MSG(_msg)    __attribute__((availability(ios,introduced=3.1,deprecated=8.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_8_3    __attribute__((availability(ios,introduced=3.1,deprecated=8.3)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_8_3_MSG(_msg)    __attribute__((availability(ios,introduced=3.1,deprecated=8.3,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_8_4    __attribute__((availability(ios,introduced=3.1,deprecated=8.4)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_8_4_MSG(_msg)    __attribute__((availability(ios,introduced=3.1,deprecated=8.4,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_9_0    __attribute__((availability(ios,introduced=3.1,deprecated=9.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_9_0_MSG(_msg)    __attribute__((availability(ios,introduced=3.1,deprecated=9.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_9_1    __attribute__((availability(ios,introduced=3.1,deprecated=9.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_9_1_MSG(_msg)    __attribute__((availability(ios,introduced=3.1,deprecated=9.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_9_2    __attribute__((availability(ios,introduced=3.1,deprecated=9.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_9_2_MSG(_msg)    __attribute__((availability(ios,introduced=3.1,deprecated=9.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_9_3    __attribute__((availability(ios,introduced=3.1,deprecated=9.3)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_9_3_MSG(_msg)    __attribute__((availability(ios,introduced=3.1,deprecated=9.3,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_10_0    __attribute__((availability(ios,introduced=3.1,deprecated=10.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_10_0_MSG(_msg)    __attribute__((availability(ios,introduced=3.1,deprecated=10.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_10_1    __attribute__((availability(ios,introduced=3.1,deprecated=10.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_10_1_MSG(_msg)    __attribute__((availability(ios,introduced=3.1,deprecated=10.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_10_2    __attribute__((availability(ios,introduced=3.1,deprecated=10.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_10_2_MSG(_msg)    __attribute__((availability(ios,introduced=3.1,deprecated=10.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_NA               __attribute__((availability(ios,introduced=3.1)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_2                    __attribute__((availability(ios,introduced=3.2)))
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_NA_MSG(_msg)     __attribute__((availability(ios,introduced=3.2)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_4_0    __attribute__((availability(ios,introduced=4.0,deprecated=4.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_4_0_MSG(_msg)    __attribute__((availability(ios,introduced=4.0,deprecated=4.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_4_1    __attribute__((availability(ios,introduced=4.0,deprecated=4.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_4_1_MSG(_msg)    __attribute__((availability(ios,introduced=4.0,deprecated=4.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_4_2    __attribute__((availability(ios,introduced=4.0,deprecated=4.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_4_2_MSG(_msg)    __attribute__((availability(ios,introduced=4.0,deprecated=4.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_4_3    __attribute__((availability(ios,introduced=4.0,deprecated=4.3)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_4_3_MSG(_msg)    __attribute__((availability(ios,introduced=4.0,deprecated=4.3,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_5_0    __attribute__((availability(ios,introduced=4.0,deprecated=5.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_5_0_MSG(_msg)    __attribute__((availability(ios,introduced=4.0,deprecated=5.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_5_1    __attribute__((availability(ios,introduced=4.0,deprecated=5.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_5_1_MSG(_msg)    __attribute__((availability(ios,introduced=4.0,deprecated=5.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_6_0    __attribute__((availability(ios,introduced=4.0,deprecated=6.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_6_0_MSG(_msg)    __attribute__((availability(ios,introduced=4.0,deprecated=6.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_6_1    __attribute__((availability(ios,introduced=4.0,deprecated=6.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_6_1_MSG(_msg)    __attribute__((availability(ios,introduced=4.0,deprecated=6.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_7_0    __attribute__((availability(ios,introduced=4.0,deprecated=7.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_7_0_MSG(_msg)    __attribute__((availability(ios,introduced=4.0,deprecated=7.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_7_1    __attribute__((availability(ios,introduced=4.0,deprecated=7.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_7_1_MSG(_msg)    __attribute__((availability(ios,introduced=4.0,deprecated=7.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_8_0    __attribute__((availability(ios,introduced=4.0,deprecated=8.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_8_0_MSG(_msg)    __attribute__((availability(ios,introduced=4.0,deprecated=8.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_8_1    __attribute__((availability(ios,introduced=4.0,deprecated=8.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_8_1_MSG(_msg)    __attribute__((availability(ios,introduced=4.0,deprecated=8.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_8_2    __attribute__((availability(ios,introduced=4.0,deprecated=8.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_8_2_MSG(_msg)    __attribute__((availability(ios,introduced=4.0,deprecated=8.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_8_3    __attribute__((availability(ios,introduced=4.0,deprecated=8.3)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_8_3_MSG(_msg)    __attribute__((availability(ios,introduced=4.0,deprecated=8.3,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_8_4    __attribute__((availability(ios,introduced=4.0,deprecated=8.4)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_8_4_MSG(_msg)    __attribute__((availability(ios,introduced=4.0,deprecated=8.4,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_9_0    __attribute__((availability(ios,introduced=4.0,deprecated=9.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_9_0_MSG(_msg)    __attribute__((availability(ios,introduced=4.0,deprecated=9.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_9_1    __attribute__((availability(ios,introduced=4.0,deprecated=9.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_9_1_MSG(_msg)    __attribute__((availability(ios,introduced=4.0,deprecated=9.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_9_2    __attribute__((availability(ios,introduced=4.0,deprecated=9.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_9_2_MSG(_msg)    __attribute__((availability(ios,introduced=4.0,deprecated=9.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_9_3    __attribute__((availability(ios,introduced=4.0,deprecated=9.3)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_9_3_MSG(_msg)    __attribute__((availability(ios,introduced=4.0,deprecated=9.3,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_10_0    __attribute__((availability(ios,introduced=4.0,deprecated=10.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_10_0_MSG(_msg)    __attribute__((availability(ios,introduced=4.0,deprecated=10.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_10_1    __attribute__((availability(ios,introduced=4.0,deprecated=10.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_10_1_MSG(_msg)    __attribute__((availability(ios,introduced=4.0,deprecated=10.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_10_2    __attribute__((availability(ios,introduced=4.0,deprecated=10.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_10_2_MSG(_msg)    __attribute__((availability(ios,introduced=4.0,deprecated=10.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_NA               __attribute__((availability(ios,introduced=4.0)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_1                    __attribute__((availability(ios,introduced=4.1)))
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_1_DEP__IPHONE_NA_MSG(_msg)     __attribute__((availability(ios,introduced=4.1)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_4_2    __attribute__((availability(ios,introduced=4.2,deprecated=4.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_4_2_MSG(_msg)    __attribute__((availability(ios,introduced=4.2,deprecated=4.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_4_3    __attribute__((availability(ios,introduced=4.2,deprecated=4.3)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_4_3_MSG(_msg)    __attribute__((availability(ios,introduced=4.2,deprecated=4.3,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_5_0    __attribute__((availability(ios,introduced=4.2,deprecated=5.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_5_0_MSG(_msg)    __attribute__((availability(ios,introduced=4.2,deprecated=5.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_5_1    __attribute__((availability(ios,introduced=4.2,deprecated=5.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_5_1_MSG(_msg)    __attribute__((availability(ios,introduced=4.2,deprecated=5.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_6_0    __attribute__((availability(ios,introduced=4.2,deprecated=6.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_6_0_MSG(_msg)    __attribute__((availability(ios,introduced=4.2,deprecated=6.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_6_1    __attribute__((availability(ios,introduced=4.2,deprecated=6.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_6_1_MSG(_msg)    __attribute__((availability(ios,introduced=4.2,deprecated=6.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_7_0    __attribute__((availability(ios,introduced=4.2,deprecated=7.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_7_0_MSG(_msg)    __attribute__((availability(ios,introduced=4.2,deprecated=7.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_7_1    __attribute__((availability(ios,introduced=4.2,deprecated=7.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_7_1_MSG(_msg)    __attribute__((availability(ios,introduced=4.2,deprecated=7.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_8_0    __attribute__((availability(ios,introduced=4.2,deprecated=8.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_8_0_MSG(_msg)    __attribute__((availability(ios,introduced=4.2,deprecated=8.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_8_1    __attribute__((availability(ios,introduced=4.2,deprecated=8.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_8_1_MSG(_msg)    __attribute__((availability(ios,introduced=4.2,deprecated=8.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_8_2    __attribute__((availability(ios,introduced=4.2,deprecated=8.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_8_2_MSG(_msg)    __attribute__((availability(ios,introduced=4.2,deprecated=8.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_8_3    __attribute__((availability(ios,introduced=4.2,deprecated=8.3)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_8_3_MSG(_msg)    __attribute__((availability(ios,introduced=4.2,deprecated=8.3,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_8_4    __attribute__((availability(ios,introduced=4.2,deprecated=8.4)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_8_4_MSG(_msg)    __attribute__((availability(ios,introduced=4.2,deprecated=8.4,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_9_0    __attribute__((availability(ios,introduced=4.2,deprecated=9.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_9_0_MSG(_msg)    __attribute__((availability(ios,introduced=4.2,deprecated=9.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_9_1    __attribute__((availability(ios,introduced=4.2,deprecated=9.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_9_1_MSG(_msg)    __attribute__((availability(ios,introduced=4.2,deprecated=9.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_9_2    __attribute__((availability(ios,introduced=4.2,deprecated=9.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_9_2_MSG(_msg)    __attribute__((availability(ios,introduced=4.2,deprecated=9.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_9_3    __attribute__((availability(ios,introduced=4.2,deprecated=9.3)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_9_3_MSG(_msg)    __attribute__((availability(ios,introduced=4.2,deprecated=9.3,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_10_0    __attribute__((availability(ios,introduced=4.2,deprecated=10.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_10_0_MSG(_msg)    __attribute__((availability(ios,introduced=4.2,deprecated=10.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_10_1    __attribute__((availability(ios,introduced=4.2,deprecated=10.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_10_1_MSG(_msg)    __attribute__((availability(ios,introduced=4.2,deprecated=10.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_10_2    __attribute__((availability(ios,introduced=4.2,deprecated=10.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_10_2_MSG(_msg)    __attribute__((availability(ios,introduced=4.2,deprecated=10.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_NA               __attribute__((availability(ios,introduced=4.2)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_3                    __attribute__((availability(ios,introduced=4.3)))
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_3_DEP__IPHONE_NA_MSG(_msg)     __attribute__((availability(ios,introduced=4.3)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_5_0    __attribute__((availability(ios,introduced=5.0,deprecated=5.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_5_0_MSG(_msg)    __attribute__((availability(ios,introduced=5.0,deprecated=5.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_5_1    __attribute__((availability(ios,introduced=5.0,deprecated=5.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_5_1_MSG(_msg)    __attribute__((availability(ios,introduced=5.0,deprecated=5.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_6_0    __attribute__((availability(ios,introduced=5.0,deprecated=6.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_6_0_MSG(_msg)    __attribute__((availability(ios,introduced=5.0,deprecated=6.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_6_1    __attribute__((availability(ios,introduced=5.0,deprecated=6.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_6_1_MSG(_msg)    __attribute__((availability(ios,introduced=5.0,deprecated=6.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_7_0    __attribute__((availability(ios,introduced=5.0,deprecated=7.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_7_0_MSG(_msg)    __attribute__((availability(ios,introduced=5.0,deprecated=7.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_7_1    __attribute__((availability(ios,introduced=5.0,deprecated=7.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_7_1_MSG(_msg)    __attribute__((availability(ios,introduced=5.0,deprecated=7.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_8_0    __attribute__((availability(ios,introduced=5.0,deprecated=8.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_8_0_MSG(_msg)    __attribute__((availability(ios,introduced=5.0,deprecated=8.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_8_1    __attribute__((availability(ios,introduced=5.0,deprecated=8.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_8_1_MSG(_msg)    __attribute__((availability(ios,introduced=5.0,deprecated=8.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_8_2    __attribute__((availability(ios,introduced=5.0,deprecated=8.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_8_2_MSG(_msg)    __attribute__((availability(ios,introduced=5.0,deprecated=8.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_8_3    __attribute__((availability(ios,introduced=5.0,deprecated=8.3)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_8_3_MSG(_msg)    __attribute__((availability(ios,introduced=5.0,deprecated=8.3,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_8_4    __attribute__((availability(ios,introduced=5.0,deprecated=8.4)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_8_4_MSG(_msg)    __attribute__((availability(ios,introduced=5.0,deprecated=8.4,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_9_0    __attribute__((availability(ios,introduced=5.0,deprecated=9.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_9_0_MSG(_msg)    __attribute__((availability(ios,introduced=5.0,deprecated=9.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_9_1    __attribute__((availability(ios,introduced=5.0,deprecated=9.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_9_1_MSG(_msg)    __attribute__((availability(ios,introduced=5.0,deprecated=9.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_9_2    __attribute__((availability(ios,introduced=5.0,deprecated=9.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_9_2_MSG(_msg)    __attribute__((availability(ios,introduced=5.0,deprecated=9.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_9_3    __attribute__((availability(ios,introduced=5.0,deprecated=9.3)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_9_3_MSG(_msg)    __attribute__((availability(ios,introduced=5.0,deprecated=9.3,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_10_0    __attribute__((availability(ios,introduced=5.0,deprecated=10.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_10_0_MSG(_msg)    __attribute__((availability(ios,introduced=5.0,deprecated=10.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_10_1    __attribute__((availability(ios,introduced=5.0,deprecated=10.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_10_1_MSG(_msg)    __attribute__((availability(ios,introduced=5.0,deprecated=10.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_10_2    __attribute__((availability(ios,introduced=5.0,deprecated=10.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_10_2_MSG(_msg)    __attribute__((availability(ios,introduced=5.0,deprecated=10.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_NA               __attribute__((availability(ios,introduced=5.0)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_5_1                    __attribute__((availability(ios,introduced=5.1)))
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #define __AVAILABILITY_INTERNAL__IPHONE_5_1_DEP__IPHONE_NA_MSG(_msg)     __attribute__((availability(ios,introduced=5.1)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_6_0    __attribute__((availability(ios,introduced=6.0,deprecated=6.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_6_0_MSG(_msg)    __attribute__((availability(ios,introduced=6.0,deprecated=6.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_6_1    __attribute__((availability(ios,introduced=6.0,deprecated=6.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_6_1_MSG(_msg)    __attribute__((availability(ios,introduced=6.0,deprecated=6.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_7_0    __attribute__((availability(ios,introduced=6.0,deprecated=7.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_7_0_MSG(_msg)    __attribute__((availability(ios,introduced=6.0,deprecated=7.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_7_1    __attribute__((availability(ios,introduced=6.0,deprecated=7.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_7_1_MSG(_msg)    __attribute__((availability(ios,introduced=6.0,deprecated=7.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_8_0    __attribute__((availability(ios,introduced=6.0,deprecated=8.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_8_0_MSG(_msg)    __attribute__((availability(ios,introduced=6.0,deprecated=8.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_8_1    __attribute__((availability(ios,introduced=6.0,deprecated=8.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_8_1_MSG(_msg)    __attribute__((availability(ios,introduced=6.0,deprecated=8.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_8_2    __attribute__((availability(ios,introduced=6.0,deprecated=8.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_8_2_MSG(_msg)    __attribute__((availability(ios,introduced=6.0,deprecated=8.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_8_3    __attribute__((availability(ios,introduced=6.0,deprecated=8.3)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_8_3_MSG(_msg)    __attribute__((availability(ios,introduced=6.0,deprecated=8.3,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_8_4    __attribute__((availability(ios,introduced=6.0,deprecated=8.4)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_8_4_MSG(_msg)    __attribute__((availability(ios,introduced=6.0,deprecated=8.4,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_9_0    __attribute__((availability(ios,introduced=6.0,deprecated=9.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_9_0_MSG(_msg)    __attribute__((availability(ios,introduced=6.0,deprecated=9.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_9_1    __attribute__((availability(ios,introduced=6.0,deprecated=9.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_9_1_MSG(_msg)    __attribute__((availability(ios,introduced=6.0,deprecated=9.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_9_2    __attribute__((availability(ios,introduced=6.0,deprecated=9.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_9_2_MSG(_msg)    __attribute__((availability(ios,introduced=6.0,deprecated=9.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_9_3    __attribute__((availability(ios,introduced=6.0,deprecated=9.3)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_9_3_MSG(_msg)    __attribute__((availability(ios,introduced=6.0,deprecated=9.3,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_10_0    __attribute__((availability(ios,introduced=6.0,deprecated=10.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_10_0_MSG(_msg)    __attribute__((availability(ios,introduced=6.0,deprecated=10.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_10_1    __attribute__((availability(ios,introduced=6.0,deprecated=10.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_10_1_MSG(_msg)    __attribute__((availability(ios,introduced=6.0,deprecated=10.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_10_2    __attribute__((availability(ios,introduced=6.0,deprecated=10.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_10_2_MSG(_msg)    __attribute__((availability(ios,introduced=6.0,deprecated=10.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_NA               __attribute__((availability(ios,introduced=6.0)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_6_1                    __attribute__((availability(ios,introduced=6.1)))
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #define __AVAILABILITY_INTERNAL__IPHONE_6_1_DEP__IPHONE_NA_MSG(_msg)     __attribute__((availability(ios,introduced=6.1)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_7_0    __attribute__((availability(ios,introduced=7.0,deprecated=7.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_7_0_MSG(_msg)    __attribute__((availability(ios,introduced=7.0,deprecated=7.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_7_1    __attribute__((availability(ios,introduced=7.0,deprecated=7.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_7_1_MSG(_msg)    __attribute__((availability(ios,introduced=7.0,deprecated=7.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_8_0    __attribute__((availability(ios,introduced=7.0,deprecated=8.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_8_0_MSG(_msg)    __attribute__((availability(ios,introduced=7.0,deprecated=8.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_8_1    __attribute__((availability(ios,introduced=7.0,deprecated=8.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_8_1_MSG(_msg)    __attribute__((availability(ios,introduced=7.0,deprecated=8.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_8_2    __attribute__((availability(ios,introduced=7.0,deprecated=8.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_8_2_MSG(_msg)    __attribute__((availability(ios,introduced=7.0,deprecated=8.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_8_3    __attribute__((availability(ios,introduced=7.0,deprecated=8.3)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_8_3_MSG(_msg)    __attribute__((availability(ios,introduced=7.0,deprecated=8.3,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_8_4    __attribute__((availability(ios,introduced=7.0,deprecated=8.4)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_8_4_MSG(_msg)    __attribute__((availability(ios,introduced=7.0,deprecated=8.4,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_9_0    __attribute__((availability(ios,introduced=7.0,deprecated=9.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_9_0_MSG(_msg)    __attribute__((availability(ios,introduced=7.0,deprecated=9.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_9_1    __attribute__((availability(ios,introduced=7.0,deprecated=9.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_9_1_MSG(_msg)    __attribute__((availability(ios,introduced=7.0,deprecated=9.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_9_2    __attribute__((availability(ios,introduced=7.0,deprecated=9.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_9_2_MSG(_msg)    __attribute__((availability(ios,introduced=7.0,deprecated=9.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_9_3    __attribute__((availability(ios,introduced=7.0,deprecated=9.3)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_9_3_MSG(_msg)    __attribute__((availability(ios,introduced=7.0,deprecated=9.3,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_10_0    __attribute__((availability(ios,introduced=7.0,deprecated=10.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_10_0_MSG(_msg)    __attribute__((availability(ios,introduced=7.0,deprecated=10.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_10_1    __attribute__((availability(ios,introduced=7.0,deprecated=10.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_10_1_MSG(_msg)    __attribute__((availability(ios,introduced=7.0,deprecated=10.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_10_2    __attribute__((availability(ios,introduced=7.0,deprecated=10.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_10_2_MSG(_msg)    __attribute__((availability(ios,introduced=7.0,deprecated=10.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_NA               __attribute__((availability(ios,introduced=7.0)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_7_1                    __attribute__((availability(ios,introduced=7.1)))
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #define __AVAILABILITY_INTERNAL__IPHONE_7_1_DEP__IPHONE_NA_MSG(_msg)     __attribute__((availability(ios,introduced=7.1)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_8_0    __attribute__((availability(ios,introduced=8.0,deprecated=8.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_8_0_MSG(_msg)    __attribute__((availability(ios,introduced=8.0,deprecated=8.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_8_1    __attribute__((availability(ios,introduced=8.0,deprecated=8.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_8_1_MSG(_msg)    __attribute__((availability(ios,introduced=8.0,deprecated=8.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_8_2    __attribute__((availability(ios,introduced=8.0,deprecated=8.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_8_2_MSG(_msg)    __attribute__((availability(ios,introduced=8.0,deprecated=8.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_8_3    __attribute__((availability(ios,introduced=8.0,deprecated=8.3)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_8_3_MSG(_msg)    __attribute__((availability(ios,introduced=8.0,deprecated=8.3,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_8_4    __attribute__((availability(ios,introduced=8.0,deprecated=8.4)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_8_4_MSG(_msg)    __attribute__((availability(ios,introduced=8.0,deprecated=8.4,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_9_0    __attribute__((availability(ios,introduced=8.0,deprecated=9.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_9_0_MSG(_msg)    __attribute__((availability(ios,introduced=8.0,deprecated=9.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_9_1    __attribute__((availability(ios,introduced=8.0,deprecated=9.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_9_1_MSG(_msg)    __attribute__((availability(ios,introduced=8.0,deprecated=9.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_9_2    __attribute__((availability(ios,introduced=8.0,deprecated=9.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_9_2_MSG(_msg)    __attribute__((availability(ios,introduced=8.0,deprecated=9.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_9_3    __attribute__((availability(ios,introduced=8.0,deprecated=9.3)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_9_3_MSG(_msg)    __attribute__((availability(ios,introduced=8.0,deprecated=9.3,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_10_0    __attribute__((availability(ios,introduced=8.0,deprecated=10.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_10_0_MSG(_msg)    __attribute__((availability(ios,introduced=8.0,deprecated=10.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_10_1    __attribute__((availability(ios,introduced=8.0,deprecated=10.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_10_1_MSG(_msg)    __attribute__((availability(ios,introduced=8.0,deprecated=10.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_10_2    __attribute__((availability(ios,introduced=8.0,deprecated=10.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_10_2_MSG(_msg)    __attribute__((availability(ios,introduced=8.0,deprecated=10.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_NA               __attribute__((availability(ios,introduced=8.0)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_1                    __attribute__((availability(ios,introduced=8.1)))
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_1_DEP__IPHONE_NA_MSG(_msg)     __attribute__((availability(ios,introduced=8.1)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_2_DEP__IPHONE_8_2    __attribute__((availability(ios,introduced=8.2,deprecated=8.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_2_DEP__IPHONE_8_2_MSG(_msg)    __attribute__((availability(ios,introduced=8.2,deprecated=8.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_2_DEP__IPHONE_8_3    __attribute__((availability(ios,introduced=8.2,deprecated=8.3)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_2_DEP__IPHONE_8_3_MSG(_msg)    __attribute__((availability(ios,introduced=8.2,deprecated=8.3,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_2_DEP__IPHONE_8_4    __attribute__((availability(ios,introduced=8.2,deprecated=8.4)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_2_DEP__IPHONE_8_4_MSG(_msg)    __attribute__((availability(ios,introduced=8.2,deprecated=8.4,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_2_DEP__IPHONE_9_0    __attribute__((availability(ios,introduced=8.2,deprecated=9.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_2_DEP__IPHONE_9_0_MSG(_msg)    __attribute__((availability(ios,introduced=8.2,deprecated=9.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_2_DEP__IPHONE_9_1    __attribute__((availability(ios,introduced=8.2,deprecated=9.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_2_DEP__IPHONE_9_1_MSG(_msg)    __attribute__((availability(ios,introduced=8.2,deprecated=9.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_2_DEP__IPHONE_9_2    __attribute__((availability(ios,introduced=8.2,deprecated=9.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_2_DEP__IPHONE_9_2_MSG(_msg)    __attribute__((availability(ios,introduced=8.2,deprecated=9.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_2_DEP__IPHONE_9_3    __attribute__((availability(ios,introduced=8.2,deprecated=9.3)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_2_DEP__IPHONE_9_3_MSG(_msg)    __attribute__((availability(ios,introduced=8.2,deprecated=9.3,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_2_DEP__IPHONE_10_0    __attribute__((availability(ios,introduced=8.2,deprecated=10.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_2_DEP__IPHONE_10_0_MSG(_msg)    __attribute__((availability(ios,introduced=8.2,deprecated=10.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_2_DEP__IPHONE_10_1    __attribute__((availability(ios,introduced=8.2,deprecated=10.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_2_DEP__IPHONE_10_1_MSG(_msg)    __attribute__((availability(ios,introduced=8.2,deprecated=10.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_2_DEP__IPHONE_10_2    __attribute__((availability(ios,introduced=8.2,deprecated=10.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_2_DEP__IPHONE_10_2_MSG(_msg)    __attribute__((availability(ios,introduced=8.2,deprecated=10.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_2_DEP__IPHONE_NA               __attribute__((availability(ios,introduced=8.2)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_3                    __attribute__((availability(ios,introduced=8.3)))
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_3_DEP__IPHONE_NA_MSG(_msg)     __attribute__((availability(ios,introduced=8.3)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_4_DEP__IPHONE_8_4    __attribute__((availability(ios,introduced=8.4,deprecated=8.4)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_4_DEP__IPHONE_8_4_MSG(_msg)    __attribute__((availability(ios,introduced=8.4,deprecated=8.4,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_4_DEP__IPHONE_9_0    __attribute__((availability(ios,introduced=8.4,deprecated=9.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_4_DEP__IPHONE_9_0_MSG(_msg)    __attribute__((availability(ios,introduced=8.4,deprecated=9.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_4_DEP__IPHONE_9_1    __attribute__((availability(ios,introduced=8.4,deprecated=9.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_4_DEP__IPHONE_9_1_MSG(_msg)    __attribute__((availability(ios,introduced=8.4,deprecated=9.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_4_DEP__IPHONE_9_2    __attribute__((availability(ios,introduced=8.4,deprecated=9.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_4_DEP__IPHONE_9_2_MSG(_msg)    __attribute__((availability(ios,introduced=8.4,deprecated=9.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_4_DEP__IPHONE_9_3    __attribute__((availability(ios,introduced=8.4,deprecated=9.3)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_4_DEP__IPHONE_9_3_MSG(_msg)    __attribute__((availability(ios,introduced=8.4,deprecated=9.3,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_4_DEP__IPHONE_10_0    __attribute__((availability(ios,introduced=8.4,deprecated=10.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_4_DEP__IPHONE_10_0_MSG(_msg)    __attribute__((availability(ios,introduced=8.4,deprecated=10.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_4_DEP__IPHONE_10_1    __attribute__((availability(ios,introduced=8.4,deprecated=10.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_4_DEP__IPHONE_10_1_MSG(_msg)    __attribute__((availability(ios,introduced=8.4,deprecated=10.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_4_DEP__IPHONE_10_2    __attribute__((availability(ios,introduced=8.4,deprecated=10.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_4_DEP__IPHONE_10_2_MSG(_msg)    __attribute__((availability(ios,introduced=8.4,deprecated=10.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_4_DEP__IPHONE_NA               __attribute__((availability(ios,introduced=8.4)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_9_0                    __attribute__((availability(ios,introduced=9.0)))
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #define __AVAILABILITY_INTERNAL__IPHONE_9_0_DEP__IPHONE_NA_MSG(_msg)     __attribute__((availability(ios,introduced=9.0)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_9_1_DEP__IPHONE_9_1    __attribute__((availability(ios,introduced=9.1,deprecated=9.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_9_1_DEP__IPHONE_9_1_MSG(_msg)    __attribute__((availability(ios,introduced=9.1,deprecated=9.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_9_1_DEP__IPHONE_9_2    __attribute__((availability(ios,introduced=9.1,deprecated=9.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_9_1_DEP__IPHONE_9_2_MSG(_msg)    __attribute__((availability(ios,introduced=9.1,deprecated=9.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_9_1_DEP__IPHONE_9_3    __attribute__((availability(ios,introduced=9.1,deprecated=9.3)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_9_1_DEP__IPHONE_9_3_MSG(_msg)    __attribute__((availability(ios,introduced=9.1,deprecated=9.3,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_9_1_DEP__IPHONE_10_0    __attribute__((availability(ios,introduced=9.1,deprecated=10.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_9_1_DEP__IPHONE_10_0_MSG(_msg)    __attribute__((availability(ios,introduced=9.1,deprecated=10.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_9_1_DEP__IPHONE_10_1    __attribute__((availability(ios,introduced=9.1,deprecated=10.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_9_1_DEP__IPHONE_10_1_MSG(_msg)    __attribute__((availability(ios,introduced=9.1,deprecated=10.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_9_1_DEP__IPHONE_10_2    __attribute__((availability(ios,introduced=9.1,deprecated=10.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_9_1_DEP__IPHONE_10_2_MSG(_msg)    __attribute__((availability(ios,introduced=9.1,deprecated=10.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_9_1_DEP__IPHONE_NA               __attribute__((availability(ios,introduced=9.1)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_9_2                    __attribute__((availability(ios,introduced=9.2)))
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #define __AVAILABILITY_INTERNAL__IPHONE_9_2_DEP__IPHONE_NA_MSG(_msg)     __attribute__((availability(ios,introduced=9.2)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_9_3_DEP__IPHONE_9_3    __attribute__((availability(ios,introduced=9.3,deprecated=9.3)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_9_3_DEP__IPHONE_9_3_MSG(_msg)    __attribute__((availability(ios,introduced=9.3,deprecated=9.3,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_9_3_DEP__IPHONE_10_0    __attribute__((availability(ios,introduced=9.3,deprecated=10.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_9_3_DEP__IPHONE_10_0_MSG(_msg)    __attribute__((availability(ios,introduced=9.3,deprecated=10.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_9_3_DEP__IPHONE_10_1    __attribute__((availability(ios,introduced=9.3,deprecated=10.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_9_3_DEP__IPHONE_10_1_MSG(_msg)    __attribute__((availability(ios,introduced=9.3,deprecated=10.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_9_3_DEP__IPHONE_10_2    __attribute__((availability(ios,introduced=9.3,deprecated=10.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_9_3_DEP__IPHONE_10_2_MSG(_msg)    __attribute__((availability(ios,introduced=9.3,deprecated=10.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_9_3_DEP__IPHONE_NA               __attribute__((availability(ios,introduced=9.3)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_10_0                    __attribute__((availability(ios,introduced=10.0)))
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #define __AVAILABILITY_INTERNAL__IPHONE_10_0_DEP__IPHONE_NA_MSG(_msg)     __attribute__((availability(ios,introduced=10.0)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_10_1_DEP__IPHONE_10_1    __attribute__((availability(ios,introduced=10.1,deprecated=10.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_10_1_DEP__IPHONE_10_1_MSG(_msg)    __attribute__((availability(ios,introduced=10.1,deprecated=10.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_10_1_DEP__IPHONE_10_2    __attribute__((availability(ios,introduced=10.1,deprecated=10.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_10_1_DEP__IPHONE_10_2_MSG(_msg)    __attribute__((availability(ios,introduced=10.1,deprecated=10.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_10_1_DEP__IPHONE_NA               __attribute__((availability(ios,introduced=10.1)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_10_2                    __attribute__((availability(ios,introduced=10.2)))
            
            #if 1
                    
            #else
                    
            #endif
            
            #define __AVAILABILITY_INTERNAL__IPHONE_10_2_DEP__IPHONE_NA_MSG(_msg)     __attribute__((availability(ios,introduced=10.2)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_NA_DEP__IPHONE_NA                __attribute__((availability(ios,unavailable)))
            
        #endif
    

    


        #if __MAC_OS_X_VERSION_MAX_ALLOWED < 101104
            
        #elif __MAC_OS_X_VERSION_MIN_REQUIRED < 101104
            
        #else
            
        #endif
        
            #define __AVAILABILITY_INTERNAL__MAC_10_11_3        __attribute__((unavailable))
        




        #if __MAC_OS_X_VERSION_MAX_ALLOWED < 101102
            
        #elif __MAC_OS_X_VERSION_MIN_REQUIRED < 101102
            
        #else
            
        #endif
        
            #define __AVAILABILITY_INTERNAL__MAC_10_11        __attribute__((unavailable))
        




        #if __MAC_OS_X_VERSION_MAX_ALLOWED < 101003
            
        #elif __MAC_OS_X_VERSION_MIN_REQUIRED < 101003
            
        #else
            
        #endif
        
            #define __AVAILABILITY_INTERNAL__MAC_10_10_2        __attribute__((unavailable))
        




        #if __MAC_OS_X_VERSION_MAX_ALLOWED < 101000
            
        #elif __MAC_OS_X_VERSION_MIN_REQUIRED < 101000
            
        #else
            
        #endif
        
            #define __AVAILABILITY_INTERNAL__MAC_10_9        __attribute__((unavailable))
        




        #if __MAC_OS_X_VERSION_MAX_ALLOWED < 1080
            
        #elif __MAC_OS_X_VERSION_MIN_REQUIRED < 1080
            
        #else
            
        #endif
        
            #define __AVAILABILITY_INTERNAL__MAC_10_7        __attribute__((unavailable))
        




        #if __MAC_OS_X_VERSION_MAX_ALLOWED < 1060
            
        #elif __MAC_OS_X_VERSION_MIN_REQUIRED < 1060
            
        #else
            
        #endif
        
            #define __AVAILABILITY_INTERNAL__MAC_10_5        __attribute__((unavailable))
        




        #if __MAC_OS_X_VERSION_MAX_ALLOWED < 1040
            
        #elif __MAC_OS_X_VERSION_MIN_REQUIRED < 1040
            
        #else
            
        #endif
        
            #define __AVAILABILITY_INTERNAL__MAC_10_3        __attribute__((unavailable))
        




        #if __MAC_OS_X_VERSION_MAX_ALLOWED < 1020
            
        #elif __MAC_OS_X_VERSION_MIN_REQUIRED < 1020
            
        #else
            
        #endif
        
            #define __AVAILABILITY_INTERNAL__MAC_10_1        __attribute__((unavailable))
        




        #if __MAC_OS_X_VERSION_MAX_ALLOWED < 1000
            
        #elif __MAC_OS_X_VERSION_MIN_REQUIRED < 1000
            
        #else
            
        #endif
        
        #if __MAC_OS_X_VERSION_MIN_REQUIRED >= 1010
            
            #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_1_MSG(_msg)    __attribute__((deprecated))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_1_MSG(_msg)    __attribute__((deprecated))
        





        #if __MAC_OS_X_VERSION_MIN_REQUIRED >= 1020
            
            #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_2_MSG(_msg)    __attribute__((deprecated))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_2_MSG(_msg)    __attribute__((deprecated))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_2_MSG(_msg)    __attribute__((deprecated))
        
            #define __attribute__((deprecated))              
            
            #define __attribute__((deprecated))              __AVAILABILITY_INTERNAL__MAC_10_1
            
            #define __attribute__((deprecated))              
            
        #endif
        
            #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_3              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_3              __AVAILABILITY_INTERNAL__MAC_10_1
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_3              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_3              __AVAILABILITY_INTERNAL__MAC_10_3
            
        #endif
        
            #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_4              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_4              __AVAILABILITY_INTERNAL__MAC_10_1
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_4              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_4              __AVAILABILITY_INTERNAL__MAC_10_3
            
            #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_4              
            
        #endif
        
            #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_5              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_5              __AVAILABILITY_INTERNAL__MAC_10_1
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_5              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_5              __AVAILABILITY_INTERNAL__MAC_10_3
            
            #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_5              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_5              __AVAILABILITY_INTERNAL__MAC_10_5
            
        #endif
        
            #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_6              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_6              __AVAILABILITY_INTERNAL__MAC_10_1
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_6              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_6              __AVAILABILITY_INTERNAL__MAC_10_3
            
            #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_6              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_6              __AVAILABILITY_INTERNAL__MAC_10_5
            
            #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_6              
            
        #endif
        
            #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_7              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_7              __AVAILABILITY_INTERNAL__MAC_10_1
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_7              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_7              __AVAILABILITY_INTERNAL__MAC_10_3
            
            #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_7              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_7              __AVAILABILITY_INTERNAL__MAC_10_5
            
            #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_7              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_7              __AVAILABILITY_INTERNAL__MAC_10_7
            
        #endif
        
            #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_8              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_8              __AVAILABILITY_INTERNAL__MAC_10_1
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_8              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_8              __AVAILABILITY_INTERNAL__MAC_10_3
            
            #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_8              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_8              __AVAILABILITY_INTERNAL__MAC_10_5
            
            #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_8              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_8              __AVAILABILITY_INTERNAL__MAC_10_7
            
            #define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_8              
            
        #endif
        
            #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_9              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_9              __AVAILABILITY_INTERNAL__MAC_10_1
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_9              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_9              __AVAILABILITY_INTERNAL__MAC_10_3
            
            #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_9              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_9              __AVAILABILITY_INTERNAL__MAC_10_5
            
            #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_9              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_9              __AVAILABILITY_INTERNAL__MAC_10_7
            
            #define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_9              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_9              __AVAILABILITY_INTERNAL__MAC_10_9
            
        #endif
        
            #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_10              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_10              __AVAILABILITY_INTERNAL__MAC_10_1
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_10              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_10              __AVAILABILITY_INTERNAL__MAC_10_3
            
            #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_10              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_10              __AVAILABILITY_INTERNAL__MAC_10_5
            
            #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_10              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_10              __AVAILABILITY_INTERNAL__MAC_10_7
            
            #define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_10              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_10              __AVAILABILITY_INTERNAL__MAC_10_9
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_10              
            
        #endif
        
            #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_10_2              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_10_2              __AVAILABILITY_INTERNAL__MAC_10_1
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_10_2              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_10_2              __AVAILABILITY_INTERNAL__MAC_10_3
            
            #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_10_2              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_10_2              __AVAILABILITY_INTERNAL__MAC_10_5
            
            #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_10_2              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_10_2              __AVAILABILITY_INTERNAL__MAC_10_7
            
            #define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_10_2              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_10_2              __AVAILABILITY_INTERNAL__MAC_10_9
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_10_2              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_2_DEP__MAC_10_10_2              __AVAILABILITY_INTERNAL__MAC_10_10_2
            
        #endif
        
            #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_10_3              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_10_3              __AVAILABILITY_INTERNAL__MAC_10_1
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_10_3              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_10_3              __AVAILABILITY_INTERNAL__MAC_10_3
            
            #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_10_3              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_10_3              __AVAILABILITY_INTERNAL__MAC_10_5
            
            #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_10_3              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_10_3              __AVAILABILITY_INTERNAL__MAC_10_7
            
            #define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_10_3              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_10_3              __AVAILABILITY_INTERNAL__MAC_10_9
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_10_3              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_2_DEP__MAC_10_10_3              __AVAILABILITY_INTERNAL__MAC_10_10_2
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_3_DEP__MAC_10_10_3              
            
        #endif
        
            #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_11              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_11              __AVAILABILITY_INTERNAL__MAC_10_1
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_11              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_11              __AVAILABILITY_INTERNAL__MAC_10_3
            
            #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_11              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_11              __AVAILABILITY_INTERNAL__MAC_10_5
            
            #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_11              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_11              __AVAILABILITY_INTERNAL__MAC_10_7
            
            #define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_11              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_11              __AVAILABILITY_INTERNAL__MAC_10_9
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_11              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_2_DEP__MAC_10_11              __AVAILABILITY_INTERNAL__MAC_10_10_2
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_3_DEP__MAC_10_11              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_11_DEP__MAC_10_11              __AVAILABILITY_INTERNAL__MAC_10_11
            
        #endif
        
            #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_11_2              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_11_2              __AVAILABILITY_INTERNAL__MAC_10_1
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_11_2              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_11_2              __AVAILABILITY_INTERNAL__MAC_10_3
            
            #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_11_2              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_11_2              __AVAILABILITY_INTERNAL__MAC_10_5
            
            #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_11_2              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_11_2              __AVAILABILITY_INTERNAL__MAC_10_7
            
            #define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_11_2              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_11_2              __AVAILABILITY_INTERNAL__MAC_10_9
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_11_2              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_2_DEP__MAC_10_11_2              __AVAILABILITY_INTERNAL__MAC_10_10_2
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_3_DEP__MAC_10_11_2              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_11_DEP__MAC_10_11_2              __AVAILABILITY_INTERNAL__MAC_10_11
            
            #define __AVAILABILITY_INTERNAL__MAC_10_11_2_DEP__MAC_10_11_2              
            
        #endif
        
            #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_11_3              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_11_3              __AVAILABILITY_INTERNAL__MAC_10_1
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_11_3              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_11_3              __AVAILABILITY_INTERNAL__MAC_10_3
            
            #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_11_3              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_11_3              __AVAILABILITY_INTERNAL__MAC_10_5
            
            #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_11_3              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_11_3              __AVAILABILITY_INTERNAL__MAC_10_7
            
            #define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_11_3              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_11_3              __AVAILABILITY_INTERNAL__MAC_10_9
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_11_3              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_2_DEP__MAC_10_11_3              __AVAILABILITY_INTERNAL__MAC_10_10_2
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_3_DEP__MAC_10_11_3              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_11_DEP__MAC_10_11_3              __AVAILABILITY_INTERNAL__MAC_10_11
            
            #define __AVAILABILITY_INTERNAL__MAC_10_11_2_DEP__MAC_10_11_3              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_11_3_DEP__MAC_10_11_3              __AVAILABILITY_INTERNAL__MAC_10_11_3
            
        #endif
        
            #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_11_4              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_11_4              __AVAILABILITY_INTERNAL__MAC_10_1
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_11_4              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_11_4              __AVAILABILITY_INTERNAL__MAC_10_3
            
            #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_11_4              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_11_4              __AVAILABILITY_INTERNAL__MAC_10_5
            
            #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_11_4              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_11_4              __AVAILABILITY_INTERNAL__MAC_10_7
            
            #define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_11_4              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_11_4              __AVAILABILITY_INTERNAL__MAC_10_9
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_11_4              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_2_DEP__MAC_10_11_4              __AVAILABILITY_INTERNAL__MAC_10_10_2
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_3_DEP__MAC_10_11_4              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_11_DEP__MAC_10_11_4              __AVAILABILITY_INTERNAL__MAC_10_11
            
            #define __AVAILABILITY_INTERNAL__MAC_10_11_2_DEP__MAC_10_11_4              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_11_3_DEP__MAC_10_11_4              __AVAILABILITY_INTERNAL__MAC_10_11_3
            
            #define __AVAILABILITY_INTERNAL__MAC_10_11_4_DEP__MAC_10_11_4              
            
        #endif
        
            #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_12              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_12              __AVAILABILITY_INTERNAL__MAC_10_1
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_12              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_12              __AVAILABILITY_INTERNAL__MAC_10_3
            
            #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_12              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_12              __AVAILABILITY_INTERNAL__MAC_10_5
            
            #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_12              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_12              __AVAILABILITY_INTERNAL__MAC_10_7
            
            #define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_12              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_12              __AVAILABILITY_INTERNAL__MAC_10_9
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_12              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_2_DEP__MAC_10_12              __AVAILABILITY_INTERNAL__MAC_10_10_2
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_3_DEP__MAC_10_12              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_11_DEP__MAC_10_12              __AVAILABILITY_INTERNAL__MAC_10_11
            
            #define __AVAILABILITY_INTERNAL__MAC_10_11_2_DEP__MAC_10_12              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_11_3_DEP__MAC_10_12              __AVAILABILITY_INTERNAL__MAC_10_11_3
            
            #define __AVAILABILITY_INTERNAL__MAC_10_11_4_DEP__MAC_10_12              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_12_DEP__MAC_10_12              __AVAILABILITY_INTERNAL__MAC_10_12
            
        #endif
        
            #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_12_1              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_12_1              __AVAILABILITY_INTERNAL__MAC_10_1
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_12_1              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_12_1              __AVAILABILITY_INTERNAL__MAC_10_3
            
            #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_12_1              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_12_1              __AVAILABILITY_INTERNAL__MAC_10_5
            
            #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_12_1              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_12_1              __AVAILABILITY_INTERNAL__MAC_10_7
            
            #define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_12_1              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_12_1              __AVAILABILITY_INTERNAL__MAC_10_9
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_12_1              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_2_DEP__MAC_10_12_1              __AVAILABILITY_INTERNAL__MAC_10_10_2
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_3_DEP__MAC_10_12_1              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_11_DEP__MAC_10_12_1              __AVAILABILITY_INTERNAL__MAC_10_11
            
            #define __AVAILABILITY_INTERNAL__MAC_10_11_2_DEP__MAC_10_12_1              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_11_3_DEP__MAC_10_12_1              __AVAILABILITY_INTERNAL__MAC_10_11_3
            
            #define __AVAILABILITY_INTERNAL__MAC_10_11_4_DEP__MAC_10_12_1              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_12_DEP__MAC_10_12_1              __AVAILABILITY_INTERNAL__MAC_10_12
            
            #define __AVAILABILITY_INTERNAL__MAC_10_12_1_DEP__MAC_10_12_1              __AVAILABILITY_INTERNAL__MAC_10_12_1
            
        #endif
        
            #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_12_2              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_12_2              __AVAILABILITY_INTERNAL__MAC_10_1
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_12_2              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_12_2              __AVAILABILITY_INTERNAL__MAC_10_3
            
            #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_12_2              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_12_2              __AVAILABILITY_INTERNAL__MAC_10_5
            
            #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_12_2              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_12_2              __AVAILABILITY_INTERNAL__MAC_10_7
            
            #define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_12_2              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_12_2              __AVAILABILITY_INTERNAL__MAC_10_9
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_12_2              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_2_DEP__MAC_10_12_2              __AVAILABILITY_INTERNAL__MAC_10_10_2
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_3_DEP__MAC_10_12_2              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_11_DEP__MAC_10_12_2              __AVAILABILITY_INTERNAL__MAC_10_11
            
            #define __AVAILABILITY_INTERNAL__MAC_10_11_2_DEP__MAC_10_12_2              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_11_3_DEP__MAC_10_12_2              __AVAILABILITY_INTERNAL__MAC_10_11_3
            
            #define __AVAILABILITY_INTERNAL__MAC_10_11_4_DEP__MAC_10_12_2              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_12_DEP__MAC_10_12_2              __AVAILABILITY_INTERNAL__MAC_10_12
            
            #define __AVAILABILITY_INTERNAL__MAC_10_12_1_DEP__MAC_10_12_2              __AVAILABILITY_INTERNAL__MAC_10_12_1
            
            #define __AVAILABILITY_INTERNAL__MAC_10_12_2_DEP__MAC_10_12_2              __AVAILABILITY_INTERNAL__MAC_10_12_2
            
        #endif
        
        #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_NA_MSG(_msg)   
        
        #define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_NA_MSG(_msg)   __AVAILABILITY_INTERNAL__MAC_10_1
        
        #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_NA_MSG(_msg)   
        
        #define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_NA_MSG(_msg)   __AVAILABILITY_INTERNAL__MAC_10_3
        
        #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_NA_MSG(_msg)   
        
        #define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_NA_MSG(_msg)   __AVAILABILITY_INTERNAL__MAC_10_5
        
        #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_NA_MSG(_msg)   
        
        #define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_NA_MSG(_msg)   __AVAILABILITY_INTERNAL__MAC_10_7
        
        #define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_NA_MSG(_msg)   
        
        #define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_NA_MSG(_msg)   __AVAILABILITY_INTERNAL__MAC_10_9
        
        #define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_NA_MSG(_msg)   
        
        #define __AVAILABILITY_INTERNAL__MAC_10_10_2_DEP__MAC_NA_MSG(_msg)   __AVAILABILITY_INTERNAL__MAC_10_10_2
        
        #define __AVAILABILITY_INTERNAL__MAC_10_10_3_DEP__MAC_NA_MSG(_msg)   
        
        #define __AVAILABILITY_INTERNAL__MAC_10_11_DEP__MAC_NA_MSG(_msg)   __AVAILABILITY_INTERNAL__MAC_10_11
        
        #define __AVAILABILITY_INTERNAL__MAC_10_11_2_DEP__MAC_NA_MSG(_msg)   
        
        #define __AVAILABILITY_INTERNAL__MAC_10_11_3_DEP__MAC_NA_MSG(_msg)   __AVAILABILITY_INTERNAL__MAC_10_11_3
        
        #define __AVAILABILITY_INTERNAL__MAC_10_11_4_DEP__MAC_NA_MSG(_msg)   
        
        #define __AVAILABILITY_INTERNAL__MAC_10_12_DEP__MAC_NA_MSG(_msg)   __AVAILABILITY_INTERNAL__MAC_10_12
        
        #define __AVAILABILITY_INTERNAL__MAC_10_12_1_DEP__MAC_NA_MSG(_msg)   __AVAILABILITY_INTERNAL__MAC_10_12_1
        
        #define __AVAILABILITY_INTERNAL__MAC_10_12_2_DEP__MAC_NA_MSG(_msg)   __AVAILABILITY_INTERNAL__MAC_10_12_2
        
        #define __AVAILABILITY_INTERNAL__MAC_NA_DEP__MAC_NA_MSG(_msg)     __attribute__((unavailable))
    







































    #if 1
        
    #else
        
    #endif
































 





    #define __swift_compiler_version_at_least(...) 1





    #define __OSX_AVAILABLE_STARTING(_osx, _ios) __AVAILABILITY_INTERNAL##_ios
    

    #define __OSX_AVAILABLE_BUT_DEPRECATED_MSG(_osxIntro, _osxDep, _iosIntro, _iosDep, _msg)                                                      __AVAILABILITY_INTERNAL##_iosIntro##_DEP##_iosDep##_MSG(_msg)





  #if 1
    
    #define __OS_AVAILABILITY_MSG(_target, _availability, _msg)  __attribute__((availability(_target,_availability,message=_msg)))
  




  #if 1
    
    #define __IOS_EXTENSION_UNAVAILABLE(_msg)  __OS_AVAILABILITY_MSG(ios_app_extension,unavailable,_msg)
  




    #define __OS_AVAILABILITY_MSG(macosx_app_extension,unavailable,_msg)
    








  #if 1
    
    #define __OSX_AVAILABLE(_vers)               __attribute__((availability(macosx,introduced=_vers)))
    
  #endif







  #define __OSX_AVAILABLE(_vers)









  #if 1
    
    #define __IOS_PROHIBITED                     __attribute__((availability(ios,unavailable)))
    
    #define __IOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(ios,introduced=_start))) __OS_AVAILABILITY_MSG(ios,deprecated=_dep,_msg)
  







  #define __IOS_PROHIBITED







  #define __IOS_DEPRECATED(_start, _dep, _msg)





  #if 1
    
    #define __TVOS_PROHIBITED                     __attribute__((availability(tvos,unavailable)))
    
    #define __TVOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(tvos,introduced=_start))) __OS_AVAILABILITY_MSG(tvos,deprecated=_dep,_msg)
  







  #define __TVOS_PROHIBITED







  #define __TVOS_DEPRECATED(_start, _dep, _msg)





  #if 1
    
    #define __WATCHOS_PROHIBITED                     __attribute__((availability(watchos,unavailable)))
    
    #define __WATCHOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(watchos,introduced=_start))) __OS_AVAILABILITY_MSG(watchos,deprecated=_dep,_msg)
  







  #define __WATCHOS_PROHIBITED







  #define __WATCHOS_DEPRECATED(_start, _dep, _msg)





  #if 1
    
    #define __SWIFT_UNAVAILABLE_MSG(_msg)         __OS_AVAILABILITY_MSG(swift,unavailable,_msg)
  







  #define __SWIFT_UNAVAILABLE_MSG(_msg)

































typedef __darwin_size_t        size_t; 







void	*memchr(__const void *__s, int __c, size_t __n);
int	 memcmp(__const void *__s1, __const void *__s2, size_t __n);
void	*memcpy(void *__dst, __const void *__src, size_t __n);
void	*memmove(void *__dst, __const void *__src, size_t __len);
void	*memset(void *__b, int __c, size_t __len);
char	*strcat(char *__s1, __const char *__s2);
char	*strchr(__const char *__s, int __c);
int	 strcmp(__const char *__s1, __const char *__s2);
int	 strcoll(__const char *__s1, __const char *__s2);
char	*strcpy(char *__dst, __const char *__src);
size_t	 strcspn(__const char *__s, __const char *__charset);
char	*strerror(int __errnum) __asm("_" "x" );
size_t	 strlen(__const char *__s);
char	*strncat(char *__s1, __const char *__s2, size_t __n);
int	 strncmp(__const char *__s1, __const char *__s2, size_t __n);
char	*strncpy(char *__dst, __const char *__src, size_t __n);
char	*strpbrk(__const char *__s, __const char *__charset);
char	*strrchr(__const char *__s, int __c);
size_t	 strspn(__const char *__s, __const char *__charset);
char	*strstr(__const char *__big, __const char *__little);
char	*strtok(char *__str, __const char *__sep);
size_t	 strxfrm(char *__s1, __const char *__s2, size_t __n);











             
char	*strtok_r(char *__str, __const char *__sep, char **__lasts);










             
int	 strerror_r(int __errnum, char *__strerrbuf, size_t __buflen);
char	*strdup(__const char *__s1);
void	*memccpy(void *__dst, __const void *__src, int __c, size_t __n);










             
char	*stpcpy(char *__dst, __const char *__src);
char    *stpncpy(char *__dst, __const char *__src, size_t __n) __OSX_AVAILABLE_STARTING(1070, 40300);
char	*strndup(__const char *__s1, size_t __n) __OSX_AVAILABLE_STARTING(1070, 40300);
size_t   strnlen(__const char *__s1, size_t __n) __OSX_AVAILABLE_STARTING(1070, 40300);
char	*strsignal(int __sig);










typedef __darwin_size_t        rsize_t;




typedef int                    errno_t;



errno_t	memset_s(void *__s, rsize_t __smax, int __c, rsize_t __n) __OSX_AVAILABLE_STARTING(1090, 70000);










typedef __darwin_ssize_t        ssize_t; 



void	*memmem(__const void *__big, size_t __big_len, __const void *__little, size_t __little_len) __OSX_AVAILABLE_STARTING(1070, 40300);
void     memset_pattern4(void *__b, __const void *__pattern4, size_t __len) __OSX_AVAILABLE_STARTING(1050, 30000);
void     memset_pattern8(void *__b, __const void *__pattern8, size_t __len) __OSX_AVAILABLE_STARTING(1050, 30000);
void     memset_pattern16(void *__b, __const void *__pattern16, size_t __len) __OSX_AVAILABLE_STARTING(1050, 30000);

char	*strcasestr(__const char *__big, __const char *__little);
char	*strnstr(__const char *__big, __const char *__little, size_t __len);
size_t	 strlcat(char *__dst, __const char *__source, size_t __size);
size_t	 strlcpy(char *__dst, __const char *__source, size_t __size);
void	 strmode(int __mode, char *__bp);
char	*strsep(char **__stringp, __const char *__delim);


void	 swab(__const void * restrict, void * restrict, ssize_t);


__OSX_AVAILABLE(10.12.1) __attribute__((availability(ios,introduced=10.1)))
__attribute__((availability(tvos,introduced=10.0.1))) __attribute__((availability(watchos,introduced=3.1)))

int	timingsafe_bcmp(__const void *__b1, __const void *__b2, size_t __len);




















 

    #define __attribute__((availability(_target, _availability)))
    





  #if 1
    
    #define   
  




    #define 
    








  #if 1
    
    #define __OSX_AVAILABLE(_vers)               __attribute__((availability(macosx,introduced=_vers)))
    
  #endif







  #define __OSX_AVAILABLE(_vers)









  #if 1
    
    #define __IOS_PROHIBITED                     __attribute__((availability(ios,unavailable)))
    
    #define __IOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(ios,introduced=_start))) 
  







  #define __IOS_PROHIBITED







  #define __IOS_DEPRECATED(_start, _dep, _msg)





  #if 1
    
    #define __TVOS_PROHIBITED                     __attribute__((availability(tvos,unavailable)))
    
    #define __TVOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(tvos,introduced=_start))) 
  







  #define __TVOS_PROHIBITED







  #define __TVOS_DEPRECATED(_start, _dep, _msg)





  #if 1
    
    #define __WATCHOS_PROHIBITED                     __attribute__((availability(watchos,unavailable)))
    
    #define __WATCHOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(watchos,introduced=_start))) 
  







  #define __WATCHOS_PROHIBITED







  #define __WATCHOS_DEPRECATED(_start, _dep, _msg)





  #if 1
    
    #define __SWIFT_UNAVAILABLE_MSG(_msg)         
  







  #define __SWIFT_UNAVAILABLE_MSG(_msg)



































int	 bcmp(__const void *, __const void *, size_t) ___POSIX_C_DEPRECATED_STARTING_##200112L;
void	 bcopy(__const void *, void *, size_t) ___POSIX_C_DEPRECATED_STARTING_##200112L;
void	 bzero(void *, size_t) ___POSIX_C_DEPRECATED_STARTING_##200112L;
char	*index(__const char *, int) ___POSIX_C_DEPRECATED_STARTING_##200112L;
char	*rindex(__const char *, int) ___POSIX_C_DEPRECATED_STARTING_##200112L;


int	 ffs(int);
int	 strcasecmp(__const char *, __const char *);
int	 strncasecmp(__const char *, __const char *, size_t);




             
int	 ffsl(long) __OSX_AVAILABLE_STARTING(1050, 20000);
int	 ffsll(long long) __OSX_AVAILABLE_STARTING(1090, 70000);
int	 fls(int) __OSX_AVAILABLE_STARTING(1050, 20000);
int	 flsl(long) __OSX_AVAILABLE_STARTING(1050, 20000);
int	 flsll(long long) __OSX_AVAILABLE_STARTING(1090, 70000);


































 

    #define __attribute__((availability(_target, _availability)))
    





  #if 1
    
    #define   
  




    #define 
    








  #if 1
    
    #define __OSX_AVAILABLE(_vers)               __attribute__((availability(macosx,introduced=_vers)))
    
  #endif







  #define __OSX_AVAILABLE(_vers)









  #if 1
    
    #define __IOS_PROHIBITED                     __attribute__((availability(ios,unavailable)))
    
    #define __IOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(ios,introduced=_start))) 
  







  #define __IOS_PROHIBITED







  #define __IOS_DEPRECATED(_start, _dep, _msg)





  #if 1
    
    #define __TVOS_PROHIBITED                     __attribute__((availability(tvos,unavailable)))
    
    #define __TVOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(tvos,introduced=_start))) 
  







  #define __TVOS_PROHIBITED







  #define __TVOS_DEPRECATED(_start, _dep, _msg)





  #if 1
    
    #define __WATCHOS_PROHIBITED                     __attribute__((availability(watchos,unavailable)))
    
    #define __WATCHOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(watchos,introduced=_start))) 
  







  #define __WATCHOS_PROHIBITED







  #define __WATCHOS_DEPRECATED(_start, _dep, _msg)





  #if 1
    
    #define __SWIFT_UNAVAILABLE_MSG(_msg)         
  







  #define __SWIFT_UNAVAILABLE_MSG(_msg)
































































































































































extern int printf( string s );


extern int printd( int a );


extern int get_char_at( string s, int i );


extern int put_char_at( string s, int i, int c );


extern int strlen( string s );



int sleep( int t );

int main() {
  int i;
  for ( i = 0; i < 1000; i = i+1 ) {
    printd(i);
    printf("\n");
    sleep(1);
    printf( 27+"M" );
  }
  return 0;
}


