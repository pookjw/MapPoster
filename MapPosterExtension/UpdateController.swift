//
//  UpdateController.swift
//  MapPoster
//
//  Created by Jinwoo Kim on 2/6/25.
//

import Foundation
import PosterKitHelper

final class UpdateController: NSObject, PRUpdatingDelegate {
    static nonisolated(unsafe) let shared = UpdateController()
    
//    private override init() {
//        super.init()
//    }
    
    func updateConfiguration(_ arg1: Any, sessionInfo arg2: Any, completion arg3: Any) {
        fatalError()
    }
    
    func shouldAccept(_ arg1: NSXPCConnection) -> Bool {
        fatalError()
    }
    
    func updateDescriptors(_ arg1: Any, sessionInfo arg2: Any, completion arg3: Any) {
        fatalError()
    }
}
