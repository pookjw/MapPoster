#import <Foundation/Foundation.h>

// NS_HEADER_AUDIT_BEGIN(nullability, sendability)

API_AVAILABLE(ios(16.0))
@protocol PRRenderingDelegate <NSObject>
- (void)renderer:(id)arg1 didInitializeWithEnvironment:(id)arg2;
- (void)renderer:(id)arg1 didUpdateEnvironment:(id)arg2 withTransition:(id)arg3;
- (void)rendererDidInvalidate:(id)arg1;
// TODO: Optional Methods
@optional

@end

// NS_HEADER_AUDIT_END(nullability, sendability)
