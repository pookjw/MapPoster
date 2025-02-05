#import <Foundation/Foundation.h>>
#include <objc/objc.h>

// NS_HEADER_AUDIT_BEGIN(nullability, sendability)

API_AVAILABLE(ios(16.0))
@protocol PRUpdatingDelegate <NSObject>
- (oneway void)updateConfiguration:(id)arg1 sessionInfo:(id)arg2 completion:(id)arg3;
@optional
- (BOOL)shouldAcceptConnection:(id)arg1;
- (oneway void)updateDescriptors:(id)arg1 sessionInfo:(id)arg2 completion:(id)arg3; 
@optional

@end

// NS_HEADER_AUDIT_END(nullability, sendability)
