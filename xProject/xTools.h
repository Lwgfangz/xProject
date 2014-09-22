#ifndef _X_TOOLS_H_
#define _X_TOOLS_H_
#import "Underscore.h"


#define SINGLETON_SYNTHE \
+ (id)sharedInstance\
{\
static id shared = nil;\
static dispatch_once_t onceToken;\
dispatch_once(&onceToken,\
^{\
shared = [[self alloc]init];\
});\
return shared;\
}



#define SINGLETON + (id)sharedInstance;

#define __dict(obj) (Underscore.dict(obj))
#define __array(obj)  (Underscore.array(obj))
#endif
