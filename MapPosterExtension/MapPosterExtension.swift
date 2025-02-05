//
//  MapPosterExtension.swift
//  MapPosterExtension
//
//  Created by Jinwoo Kim on 2/5/25.
//

import Foundation
import ExtensionFoundation
import ExtensionKit
import PosterKitHelper
import SwiftUI

fileprivate final class UpdatingController: NSObject, PRUpdatingDelegate, PRRenderingDelegate {
    func updateConfiguration(_ arg1: Any!, sessionInfo arg2: Any!, completion arg3: Any!) {
        
    }
    
    func renderer(_ arg1: Any!, didInitializeWithEnvironment arg2: Any!) {
        
    }
    
    func renderer(_ arg1: Any!, didUpdateEnvironment arg2: Any!, withTransition arg3: Any!) {
        
    }
    
    func rendererDidInvalidate(_ arg1: Any!) {
        
    }
}

@main
@MainActor
final class MapPosterExtension: _AppExtension {
    private let updatingController: UpdatingController
    private let providerConfiguration: PRProviderConfiguration<[PRRenderingConfiguration]>
    private let renderingConfiguration: PRRenderingConfiguration
    
    var body: some _Scene { providerConfiguration }
    
    init() {
        let updatingController = UpdatingController()
        
        let renderingConfiguration: PRRenderingConfiguration = .init {
            updatingController
        }
        
        self.updatingController = updatingController
        providerConfiguration = .init(updatingDelegate: PRUpdater(delegate: updatingController), content: {
            [renderingConfiguration]
        })
        self.renderingConfiguration = renderingConfiguration
        
        // PRRenderer이 나올 것 같음. 여기서 View 접근해서 addSubview:
        _ = renderingConfiguration.sceneDelegate
    }
}
