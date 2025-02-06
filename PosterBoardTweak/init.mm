//
//  init.mm
//  MapPoster
//
//  Created by Jinwoo Kim on 2/6/25.
//

/*
 -[PBFPosterGalleryDataProvider buildSnapshot]:
 */

#import <UIKit/UIKit.h>
#import <objc/message.h>
#import <objc/runtime.h>
#include <signal.h>
__attribute__((constructor)) static void init() {
#if DEBUG
    if (static_cast<NSNumber *>(NSProcessInfo.processInfo.environment[@"PBT_WAIT_FOR_DEBUGGER"]).boolValue) {
        kill(getpid(), SIGSTOP);
    }
#endif
}
