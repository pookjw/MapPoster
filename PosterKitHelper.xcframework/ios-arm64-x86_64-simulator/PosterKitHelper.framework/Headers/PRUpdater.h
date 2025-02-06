#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol PRUpdatingDelegate <NSObject>
- (void)updateConfiguration:(id)arg1 sessionInfo:(id)arg2 completion:(id)arg3;
- (BOOL)shouldAcceptConnection:(NSXPCConnection *)arg1;
- (void)updateDescriptors:(id)arg1 sessionInfo:(id)arg2 completion:(id)arg3;
@end

API_AVAILABLE(ios(16.0))
@interface PRUpdater : NSObject <PRUpdatingDelegate>
- (id)initWithDelegate:(id<PRUpdatingDelegate>)arg1;
@end

NS_ASSUME_NONNULL_END
