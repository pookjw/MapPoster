#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class PREditor;
@protocol PREditingDelegate <NSObject>
- (id) looksForEditor:(PREditor *)arg1;
- (void) editor:(PREditor *)arg1 didInitializeWithEnvironment:(id)arg2;
- (void) editor:(PREditor *)arg1 didUpdateEnvironment:(id)arg2 withTransition:(id)arg3;
- (void) editor:(PREditor *)arg1 finalizeWithCompletion:(id)arg2;
- (void) editor:(PREditor *)arg1 populateViews:(id)arg2 forLook:(id)arg3;
- (void) editorDidInvalidate:(PREditor *)arg1;
@optional
- (double) editor:(PREditor *)arg1 luminanceForLook:(id)arg2 inRect:(CGRect)arg3;
- (id) initialLookIdentifierForEditor:(PREditor *)arg1;
- (void) editor:(PREditor *)arg1 depthEffectDisallowedDidChange:(BOOL)arg2;
- (void) editor:(PREditor *)arg1 didTransitionToLook:(id)arg2 progress:(CGFloat)arg3;
- (void) editorDidDelayFinalizationForBackgroundTask:(PREditor *)arg1;
- (BOOL) editorShouldBeginFinalization:(PREditor *)arg1;
- (id) gradientHomeScreenColorPickerConfigurationForEditor:(PREditor *)arg1;
- (id) leadingMenuElementsForEditor:(PREditor *)arg1;
- (id) solidColorHomeScreenColorPickerConfigurationForEditor:(PREditor *)arg1;
- (id) trailingMenuElementsForEditor:(PREditor *)arg1;
- (long) activeAppearanceMenuSelectionForEditor:(PREditor *)arg1;
- (id) additionalTimeFontConfigurationsForEditor:(PREditor *)arg1;
- (id) coordinatorForContentStyle:(PREditor *)arg1 forEditor:(id)arg2;
- (void) editor:(PREditor *)arg1 appearanceMenuDidChangeSelectedStyle:(NSInteger)arg2;
- (void) editor:(PREditor *)arg1 didFinishTransitionToLook:(id)arg2;
- (void) editor:(PREditor *)arg1 didUpdateSelectedTimeFontConfiguration:(id)arg2;
- (BOOL) editor:(PREditor *)arg1 shouldAllowUserToSelectTimeFontConfiguration:(id)arg2;
- (void) editorDidFinishInitialLayout:(PREditor *)arg1;
- (BOOL) editorShouldAllowUserToAdjustTimeColor:(PREditor *)arg1;
- (BOOL) editorShouldAllowUserToAdjustTitleContentStyle:(PREditor *)arg1;
- (BOOL) looksShareBaseAppearanceForEditor:(PREditor *)arg1;
- (BOOL) prefersSimpleButtonAppearanceForEditor:(PREditor *)arg1;
- (id) timeColorPickerConfigurationForEditor:(PREditor *)arg1;
- (id) titleContentStylePickerConfigurationForEditor:(PREditor *)arg1;
@end

@interface PREditor : NSObject <UISceneDelegate/*, _UISceneComponentProviding, _UISceneSettingsDiffAction, PREditingFontAndColorPickerViewControllerDelegate, PREditingFontAndContentStylePickerViewControllerDelegate, PREditingAmbientContentStylePickerViewControllerDelegate, UIAdaptivePresentationControllerDelegate, UIViewControllerTransitioningDelegate, PRAmbientEditingTitledViewControllerDelegate*/>
@property (readonly, nonatomic) UIWindowScene *scene;
@property (nonatomic, getter=areViewsSharedBetweenLooks) BOOL viewsSharedBetweenLooks;
@property (retain, nonatomic) __kindof UIViewController */*PREditorRootViewController **/ rootViewController;
@property (readonly, nonatomic) id /*FBSceneWorkspace **/ sceneWorkspace;
@property (retain, nonatomic) NSString *posterRole;
@property (nonatomic) NSInteger status;
@property (copy, nonatomic) id /*PREditingLook **/ currentLook;
@property (copy, nonatomic) id /*PREditingLook **/ initialLook;
@property (readonly, nonatomic) id<PREditingDelegate> delegate;
@property (readonly, nonatomic) id /*PROverridableDateProvider **/ dateProvider;
@property (nonatomic) NSInteger variant;
@property (nonatomic) NSInteger editingContext;
@property (nonatomic) NSInteger acceptButtonType;
@property (nonatomic) struct CGRect leadingTopButtonFrame;
@property (nonatomic) struct CGRect trailingTopButtonFrame;
@property (nonatomic) struct CGRect horizontalTitleBoundingRect;
@property (nonatomic) struct CGRect verticalTitleBoundingRect;
@property (copy, nonatomic) NSString *titleString;
@property (nonatomic, getter=isDepthEffectDisallowed) BOOL depthEffectDisallowed;
@property (nonatomic, getter=isPerspectiveZoomDisallowed) BOOL perspectiveZoomDisallowed;
@property (retain, nonatomic) id /*PRPosterMutableConfiguredProperties **/ configuredProperties;
@property (nonatomic, getter=isInlineComplicationConfigured) BOOL inlineComplicationConfigured;
@property (nonatomic, getter=isAlternateDateEnabled) BOOL alternateDateEnabled;
@property (nonatomic, getter=isCoveredByHostModalPresentation) BOOL coveredByHostModalPresentation;
@property (retain, nonatomic) id/*<PRInvalidatable>*/ coveredByHostModalPresentationDisableLookSwitchingAssertion;
@property (nonatomic, getter=isPresentingModalViewController) BOOL presentingModalViewController;
@property (retain, nonatomic) id /*<PRInvalidatable>*/ presentingModalViewControllerDisableLookSwitchingAssertion;
@property (nonatomic) BOOL usesEditingLayout;
@property (nonatomic, getter=areControlsHidden) BOOL controlsHidden;
@property (nonatomic, getter=isComplicationsRowConfigured) BOOL complicationsRowConfigured;
@property (nonatomic, getter=isComplicationSidebarConfigured) BOOL complicationSidebarConfigured;
@property (nonatomic) NSInteger focusedComplicationElement;
@property (nonatomic) NSInteger focusedQuickActionPosition;
@property (nonatomic, getter=areComplicationsDisallowed) BOOL complicationsDisallowed;
@property (nonatomic) BOOL hasUpdatedLooks;
@property (nonatomic) BOOL hasUpdatedLookProperties;
@property (retain, nonatomic) UIWindow *remoteViewControllerPresentationWindow;
@property (nonatomic, getter=isDismissingPresentedViewControllerFromTitledViewController) BOOL dismissingPresentedViewControllerFromTitledViewController;
@property (retain, nonatomic) UIPopoverPresentationController *popoverPresentationController;
@property (retain, nonatomic) __kindof UIViewController * /*PREditingFontAndContentStylePickerViewController **/ fontAndContentStylePickerViewController;
@property (retain, nonatomic) __kindof UIViewController * /*PREditingFontAndColorPickerViewController **/fontAndColorPickerViewController;
@property (retain, nonatomic) NSHashTable *modalPresentationAssertions;
@property (retain, nonatomic) NSMapTable *modalPresentationAssertionsByViewController;
@property (readonly, nonatomic) id/*<PRPosterEditingEnvironment>*/environment;
@property (readonly, nonatomic) id/*<PRPosterEditingPreferences>*/preferences;
@property (readonly, nonatomic) UIView *contentOverlayView;
@property (nonatomic) CGFloat looksScrollingDecelerationRate;
@property (nonatomic, getter=isDepthEffectEnabled) BOOL depthEffectEnabled;
@property (readonly, nonatomic) UIMenu *depthEffectMenu;
@property (nonatomic, getter=isPerspectiveZoomEnabled) BOOL perspectiveZoomEnabled;
@property (readonly, nonatomic) UIAction *togglingPerspectiveZoomAction;
@property (readonly, nonatomic) UIMenu *appearanceMenu;
@property (readonly, nonatomic) UIAction *placeholderAction;
@property (readonly, nonatomic) struct CGRect safeAreaBounds;
@property (readonly, nonatomic) struct UIEdgeInsets editingChromeDodgingInsets;
@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
- (instancetype)initWithDelegate:(id<PREditingDelegate>)arg1;
- (void)appendDescriptionToFormatter:(id)arg1;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(void(^)(BOOL))arg2;
- (instancetype)initWithScene:(UIScene *)arg1;
- (UIPresentationController *)popoverPresentationController;
// - (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(^block)arg3; (0x233590330)
// - (id) presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3; (0x2335999a4)
// - (id) rootViewController; (0x233599b8c)
// - (id) scene; (0x233599b74)
// - (void) scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3; (0x233597c20)
// - (void) sceneDidDisconnect:(id)arg1; (0x233597e88)
// - (id) sceneWorkspace; (0x233599b94)
// - (void) setPopoverPresentationController:(id)arg1; (0x233599d78)
// - (void) setRootViewController:(id)arg1; (0x233596d04)
// - (void) setTitleString:(id)arg1; (0x2335974e4)
// - (id) titleString; (0x233599c58)
// - (BOOL) isPresentingModalViewController; (0x233599ca8)
// - (id) extensionBundleURL; (0x2335979f4)
// - (id) extensionBundle; (0x2335979a8)
// - (id) contentOverlayView; (0x2335902f4)
// - (BOOL) areControlsHidden; (0x233590304)
// - (void) setControlsHidden:(BOOL)arg1; (0x233599cd4)
// - (void) _updateAppearance:(long)arg1; (0x2335952d4)
// - (id) dateProvider; (0x233599bd8)
// - (BOOL) isAlternateDateEnabled; (0x233599c84)
// - (void) setAlternateDateEnabled:(BOOL)arg1; (0x233596db4)
// - (void) setOverrideDate:(id)arg1; (0x233597550)
// - (long) editingContext; (0x233599bf0)
// - (void) updateActions; (0x2335919dc)
// - (void) setEditingContext:(long)arg1; (0x233599bf8)
// - (BOOL) isPerspectiveZoomEnabled; (0x233594be8)
// - (void) _closeButtonTapped:(id)arg1; (0x233590ae4)
// - (BOOL) isDepthEffectEnabled; (0x233594584)
// - (struct CGRect) leadingTopButtonFrame; (0x233599c10)
// - (struct CGRect) trailingTopButtonFrame; (0x233599c28)
// - (id) depthEffectMenu; (0x2335947e4)
// - (id) appearanceMenu; (0x233594e78)
// - (void) updateLooks; (0x233590f74)
// - (void) setUsesEditingLayout:(BOOL)arg1; (0x233599ccc)
// - (BOOL) usesEditingLayout; (0x233599cc4)
// - (BOOL) isDepthEffectDisabled; (0x233594794)
// - (void) _togglePerspectiveZoom; (0x233594de0)
// - (void) presentColorPickerWithConfiguration:(id)arg1 changeHandler:(^block)arg2; (0x233591ef4)
// - (void) setPerspectiveZoomEnabled:(BOOL)arg1; (0x233594c38)
// - (id) viewForMenuElementIdentifier:(id)arg1; (0x2335902fc)
// - (id) additionalFontConfigurationsForFontAndColorPickerViewController:(id)arg1; (0x233599694)
// - (id) configuredProperties; (0x233599c68)
// - (void) fontAndColorPickerViewController:(id)arg1 didUpdateDesiredDetent:(double)arg2; (0x23359976c)
// - (BOOL) fontAndColorPickerViewController:(id)arg1 shouldShowFontConfiguration:(id)arg2; (0x2335996f4)
// - (void) fontAndColorPickerViewControllerDidFinish:(id)arg1; (0x233599858)
// - (void) setAcceptButtonType:(long)arg1; (0x233599c08)
// - (void) setHorizontalTitleBoundingRect:(struct CGRect)arg1; (0x2335975e0)
// - (long) acceptButtonType; (0x233599c00)
// - (struct CGRect) horizontalTitleBoundingRect; (0x233599c40)
// - (void) setVerticalTitleBoundingRect:(struct CGRect)arg1; (0x233597738)
// - (struct CGRect) verticalTitleBoundingRect; (0x233599c4c)
// - (id) disableSwitchingLooksForReason:(id)arg1; (0x233590afc)
// - (void) fontAndContentStylePickerViewController:(id)arg1 didUpdateDesiredDetent:(double)arg2; (0x23359953c)
// - (BOOL) hasUpdatedLooks; (0x233599d2c)
// - (void) setCoveredByHostModalPresentationDisableLookSwitchingAssertion:(id)arg1; (0x233599c9c)
// - (void) setInitialLook:(id)arg1; (0x233599bc8)
// - (void) setModalPresentationAssertions:(id)arg1; (0x233599db4)
// - (BOOL) isComplicationSidebarConfigured; (0x233599cec)
// - (BOOL) presentsViewControllersRemotely; (0x233593da0)
// - (void) setCurrentLook:(id)arg1; (0x233590f0c)
// - (id) _acquireModalPresentationAssertionForReason:(id)arg1; (0x233597010)
// - (void) _acquireModalPresentationAssertionForViewController:(id)arg1; (0x233596f5c)
// - (void) _applyStylePropertiesFromConfiguredProperties:(id)arg1 toConfiguredProperties:(id)arg2 forLook:(id)arg3; (0x233596b58)
// - (id) _contentLuminanceValuesForCurrentLooks; (0x2335915b8)
// - (id) _defaultLuminanceValuesForLooks:(id)arg1 initialLook:(id)arg2 initialLookLuminanceValue:(double)arg3; (0x233591264)
// - (void) _discardRootViewController; (0x233595430)
// - (void) _handleTitleStyleEditorChange:(id)arg1; (0x2335936a4)
// - (void) _presentFontAndColorPickerWithPrompt:(id)arg1 titleStyleConfiguration:(id)arg2 colorPickerConfiguration:(id)arg3 usingPopoverPresentation:(BOOL)arg4 popoverSourceItem:(id)arg5 popoverDirection:(unsigned long)arg6 changeHandler:(^block)arg7; (0x233592920)
// - (void) _presentFontAndContentStylePickerWithPrompt:(id)arg1 titleStyleConfiguration:(id)arg2 contentStylePickerConfiguration:(id)arg3 usingPopoverPresentation:(BOOL)arg4 popoverSourceItem:(id)arg5 popoverDirection:(unsigned long)arg6 changeHandler:(^block)arg7; (0x2335922a0)
// - (void) _rebuildRootViewController; (0x233595438)
// - (id) _refetchLooks; (0x23359566c)
// - (void) _refetchLooksAndBuildUI; (0x2335964b4)
// - (id) _refetchLooksForProperties; (0x233595848)
// - (void) _refreshDefaultTitleStyleConfigurationsForLooks:(id)arg1 luminanceForLooks:(id)arg2 initialLook:(id)arg3 configuredTitleStyleConfiguration:(id)arg4; (0x233595b54)
// - (id) _refreshLuminanceValuesForCurrentPerLookLuminanceValues:(id)arg1; (0x2335916bc)
// - (id) _selectableTimeFontConfigurationForProposedTimeFontConfiguration:(id)arg1; (0x233595fa4)
// - (void) _updatePresentingModalViewController; (0x233597320)
// - (id) actionsMenuWithChildren:(id)arg1; (0x233591ab8)
// - (id) additionalFontConfigurationsForFontAndContentStylePickerViewController:(id)arg1; (0x233599464)
// - (BOOL) allowsHitTestingInRootViewController; (0x233593d68)
// - (void) ambientEditingTitledViewControllerWantsToClose:(id)arg1; (0x233599a04)
// - (BOOL) areComplicationsAllowed; (0x2335978ec)
// - (BOOL) areComplicationsDisallowed; (0x233599d1c)
// - (BOOL) areViewsSharedBetweenLooks; (0x233599b7c)
// - (unsigned long) backgroundTypeForLuminance:(double)arg1; (0x2335919b8)
// - (id) coordinatorForContentStyle:(id)arg1 forAmbientStylePicker:(id)arg2; (0x233599920)
// - (id) coveredByHostModalPresentationDisableLookSwitchingAssertion; (0x233599c94)
// - (void) createColorVariationStoreIfNeeded; (0x233591d94)
// - (id) currentLook; (0x233599b5c)
// - (id) defaultTitleStyleConfigurationForLook:(id)arg1; (0x233591b3c)
// - (id) delegateSafeForCallbackType:(long)arg1; (0x233597a2c)
// - (void) didFinishTransitionToLook:(id)arg1; (0x233594424)
// - (void) didPresentViewController:(id)arg1; (0x233593f68)
// - (BOOL) displaysHeaderElements; (0x233597890)
// - (BOOL) displaysRootViewController; (0x233597968)
// - (BOOL) displaysSubtitleElement; (0x2335978ac)
// - (struct UIEdgeInsets) editingChromeDodgingInsets; (0x2335944f4)
// - (id) effectiveTitleStyleConfigurationForLook:(id)arg1; (0x233591c14)
// - (long) focusedComplicationElement; (0x233599cfc)
// - (long) focusedQuickActionPosition; (0x233599d0c)
// - (id) fontAndColorPickerViewController; (0x233599d98)
// - (id) fontAndContentStylePickerViewController; (0x233599d84)
// - (BOOL) fontAndContentStylePickerViewController:(id)arg1 shouldShowFontConfiguration:(id)arg2; (0x2335994c4)
// - (void) fontAndContentStylePickerViewControllerDidFinish:(id)arg1; (0x233599628)
// - (void) handleNotificationForwardAction:(id)arg1; (0x233597aac)
// - (BOOL) hasUpdatedLookProperties; (0x233599d3c)
// - (id) homeScreenConfigurationWithPosterProvidedColorConfigurations; (0x2335992c4)
// - (id) initialLook; (0x233599bc0)
// - (void) invalidateAllLookSwitchingAssertions; (0x233590bb0)
// - (void) invalidateAllPresentationAssertionsByViewController; (0x233590c98)
// - (BOOL) isComplicationsRowConfigured; (0x233599cdc)
// - (BOOL) isCoveredByHostModalPresentation; (0x233599c8c)
// - (BOOL) isDepthEffectDisallowed; (0x233599b6c)
// - (BOOL) isDepthEffectEffectivelyDisabled; (0x2335946bc)
// - (BOOL) isDismissingPresentedViewControllerFromTitledViewController; (0x233599d60)
// - (BOOL) isInlineComplicationConfigured; (0x233599c7c)
// - (BOOL) isLifecycleTiedToInitiallyPresentedViewController; (0x233593d84)
// - (BOOL) isPerspectiveZoomDisallowed; (0x233594c74)
// - (BOOL) isViewControllerPresentationAnimationAllowed; (0x233593dbc)
// - (double) looksScrollingDecelerationRate; (0x233599b64)
// - (void) makeViewControllerForRemoteViewControllerPresentations; (0x233593ecc)
// - (id) modalPresentationAssertions; (0x233599dac)
// - (id) modalPresentationAssertionsByViewController; (0x233599dc0)
// - (BOOL) needsCustomViewControllerPresentationManager; (0x233593dd4)
// - (id) placeholderAction; (0x233595330)
// - (id) posterRole; (0x233599b9c)
// - (void) presentAmbientColorPickerWithConfiguration:(id)arg1 changeHandler:(^block)arg2; (0x233592e04)
// - (void) presentAmbientContentStylePickerWithConfiguration:(id)arg1 changeHandler:(^block)arg2; (0x233592ed4)
// - (void) presentColorPickerWithPrompt:(id)arg1 suggestedColors:(id)arg2 selectedColor:(id)arg3 changeHandler:(^block)arg4; (0x233591e3c)
// - (void) presentContentStylePickerWithConfiguration:(id)arg1 changeHandler:(^block)arg2; (0x2335920b0)
// - (void) presentTimeStyleEditor; (0x233592fa4)
// - (void) presentTitledViewController:(id)arg1 animated:(BOOL)arg2 completion:(^block)arg3; (0x233590994)
// - (void) presentedViewControllerDismissalDidEnd:(id)arg1; (0x2335907fc)
// - (void) presentedViewControllerDismissalWillBegin:(id)arg1; (0x233590694)
// - (id) presentingModalViewControllerDisableLookSwitchingAssertion; (0x233599cb0)
// - (id) remoteViewControllerPresentationWindow; (0x233599d4c)
// - (void) removeLookSwitchingAssertion:(id)arg1; (0x233590da0)
// - (void) requestDismissalWithAction:(long)arg1; (0x233593af0)
// - (void) requireGestureRecognizerToFailForLooksScroll:(id)arg1; (0x233590af4)
// - (struct CGRect) safeAreaBounds; (0x233594468)
// - (void) setComplicationSidebarConfigured:(BOOL)arg1; (0x233599cf4)
// - (void) setComplicationsDisallowed:(BOOL)arg1; (0x233599d24)
// - (void) setComplicationsRowConfigured:(BOOL)arg1; (0x233599ce4)
// - (void) setComplicationsVibrancyConfiguration:(id)arg1; (0x23359535c)
// - (void) setConfiguredProperties:(id)arg1; (0x233599c70)
// - (void) setCoveredByHostModalPresentation:(BOOL)arg1; (0x233596ebc)
// - (void) setDepthEffectDisallowed:(BOOL)arg1; (0x2335944fc)
// - (void) setDepthEffectEnabled:(BOOL)arg1; (0x2335945d8)
// - (void) setDismissingPresentedViewControllerFromTitledViewController:(BOOL)arg1; (0x233599d68)
// - (void) setEditingFocusActive:(BOOL)arg1; (0x23359423c)
// - (void) setFocusedComplicationElement:(long)arg1; (0x233599d04)
// - (void) setFocusedQuickActionPosition:(long)arg1; (0x233599d14)
// - (void) setFontAndColorPickerViewController:(id)arg1; (0x233599da0)
// - (void) setFontAndContentStylePickerViewController:(id)arg1; (0x233599d8c)
// - (void) setHasUpdatedLookProperties:(BOOL)arg1; (0x233599d44)
// - (void) setHasUpdatedLooks:(BOOL)arg1; (0x233599d34)
// - (void) setInlineComplicationConfigured:(BOOL)arg1; (0x233596d58)
// - (void) setLeadingTopButtonFrame:(struct CGRect)arg1; (0x233599c1c)
// - (void) setLooksScrollingDecelerationRate:(double)arg1; (0x233590e18)
// - (void) setModalPresentationAssertionsByViewController:(id)arg1; (0x233599dc8)
// - (void) setPerspectiveZoomDisallowed:(BOOL)arg1; (0x233599c60)
// - (void) setPosterRole:(id)arg1; (0x233599ba4)
// - (void) setPresentingModalViewController:(BOOL)arg1; (0x233597368)
// - (void) setPresentingModalViewControllerDisableLookSwitchingAssertion:(id)arg1; (0x233599cb8)
// - (void) setRemoteViewControllerPresentationWindow:(id)arg1; (0x233599d54)
// - (void) setTrailingTopButtonFrame:(struct CGRect)arg1; (0x233599c34)
// - (void) setViewsSharedBetweenLooks:(BOOL)arg1; (0x233599b84)
// - (BOOL) shouldApplyTitleStyleAcrossAllLooksFromConfiguredTitleStyleConfiguration:(id)arg1; (0x233596c44)
// - (BOOL) shouldIgnorePreviouslyConfiguredTitleStyleConfiguration; (0x233596c90)
// - (unsigned long) timeViewControllerDisplayedElements; (0x233597924)
// - (void) toggleDepthEffect; (0x233594bc0)
// - (id) togglingPerspectiveZoomAction; (0x233594cc4)
// - (void) updateLookProperties; (0x233590fbc)
// - (void) updateLuminanceValuesForLooks; (0x2335913e4)
// - (void) updatePreferences:(^block)arg1; (0x233590af0)
// - (void) updateRootViewControllerMenus; (0x233596cd8)
// - (void) updateScrollViewDecelerationRate:(id)arg1; (0x233590e88)
// - (id) viewControllerForPresentingViewControllersCreatingIfNecessary:(BOOL)arg1; (0x233593df0)
@end

NS_ASSUME_NONNULL_END