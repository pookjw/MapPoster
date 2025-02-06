//
//  EditingController.swift
//  MapPoster
//
//  Created by Jinwoo Kim on 2/6/25.
//

import Foundation
import PosterKitHelper

final class EditingController: NSObject, PREditingDelegate {
    static nonisolated(unsafe) let shared = EditingController()
    
//    private override init() {
//        super.init()
//    }
    
    func looks(for arg1: PREditor) -> Any {
        fatalError()
    }
    
    func editor(_ arg1: PREditor, didInitializeWithEnvironment arg2: Any) {
        fatalError()
    }
    
    func editor(_ arg1: PREditor, didUpdateEnvironment arg2: Any, withTransition arg3: Any) {
        fatalError()
    }
    
    func editor(_ arg1: PREditor, finalizeWithCompletion arg2: Any) {
        fatalError()
    }
    
    func editor(_ arg1: PREditor, populateViews arg2: Any, forLook arg3: Any) {
        fatalError()
    }
    
    func editorDidInvalidate(_ arg1: PREditor) {
        fatalError()
    }
}
