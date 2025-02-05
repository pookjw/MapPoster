#import <PosterKitHelper/PRUpdatingDelegate.h>
#include <objc/objc.h>

// NS_HEADER_AUDIT_BEGIN(nullability, sendability)

API_AVAILABLE(ios(16.0))
@interface PRUpdater : NSObject <PRUpdatingDelegate>
- (id)initWithDelegate:(id<PRUpdatingDelegate>)arg1;
@end

// NS_HEADER_AUDIT_END(nullability, sendability)
