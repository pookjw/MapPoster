//
//  DrawingController.swift
//  MapPoster
//
//  Created by Jinwoo Kim on 2/6/25.
//

import Foundation
import PosterKitHelper

final class DrawingController: NSObject, PRRenderingDelegate {
    static nonisolated(unsafe) let shared = DrawingController()
    
//    private override init() {
//        super.init()
//    }
    
    func renderer(_ arg1: PRRenderer, didInitializeWithEnvironment arg2: Any) {
        fatalError()
    }
    
    func renderer(_ arg1: PRRenderer, didUpdateEnvironment arg2: Any, withTransition arg3: Any) {
        fatalError()
    }
    
    func rendererDidInvalidate(_ arg1: PRRenderer) {
        fatalError()
    }
}
