#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class PRRenderer;
@protocol PRRenderingDelegate <NSObject>
- (void)renderer:(PRRenderer *)arg1 didInitializeWithEnvironment:(id)arg2;
- (void)renderer:(PRRenderer *)arg1 didUpdateEnvironment:(id)arg2 withTransition:(id)arg3;
- (void)rendererDidInvalidate:(PRRenderer *)arg1;
@optional;
- (void)renderer:(PRRenderer *)arg1 didReceiveEvent:(id)arg2;
- (void)renderer:(PRRenderer *)arg1 didReceiveTapAtPoint:(struct CGPoint)arg2;
- (void)renderer:(PRRenderer *)arg1 shouldDropExcessResourcesWithCompletionHandler:(id)arg2;
- (void)rendererDidInvalidate:(PRRenderer *)arg1 completion:(id)arg2;
@end

@interface PRRenderer : NSObject <UISceneDelegate/*, FBSceneDelegate, _UISceneComponentProviding, _UISceneSettingsDiffAction, _UISceneBSActionResponding, PRRenderingBackdropViewOwner*/>
@property (retain, nonatomic) __kindof UIViewController /* CSProminentDisplayViewController */ *timePreviewProminentDisplayViewController;
@property (retain, nonatomic) __kindof UIViewController /* CSProminentDisplayViewController */ *complicationsPreviewProminentDisplayViewController;
@property (readonly, nonatomic) UIWindowScene *scene;
@property (copy, nonatomic) NSArray *attachments;
@property (readonly, nonatomic) id/*<PRPosterRenderingEnvironment>*/ environment;
@property (readonly, nonatomic) id/*<PRPosterRenderingPreferences>*/ preferences;
@property (readonly, nonatomic) UIView *backgroundView;
@property (readonly, nonatomic) UIView *foregroundView;
@property (readonly, nonatomic) UIView *floatingView;
- (instancetype)initWithDelegate:(id<PRRenderingDelegate>)delegate;
- (void)invalidateView:(id)arg1;
- (void)noteContentSignificantlyChanged;
- (id)extendRenderSessionForReason:(id)arg1;
- (id)extendRenderingSessionForReason:(id)arg1;
- (void)updatePreferences:(id)arg1;
- (void)updatedValuesForView:(id)arg1;
@end

NS_ASSUME_NONNULL_END