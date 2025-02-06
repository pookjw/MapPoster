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

/*
 PREditingConfiguration
 PRRenderingConfiguration
 PRProviderConfiguration
 _AppExtension
 _SceneBuilder
 _AnySceneConfiguration
 */

@main
@MainActor
final class MapPosterExtension: _AppExtension {
    private let providerConfiguration: PRProviderConfiguration<[PRRenderingConfiguration]>
    private let renderingConfiguration: PRRenderingConfiguration
    private let editingConfiguration: PREditingConfiguration
    
    var body: some _Scene {
        providerConfiguration
    }
    
    init() {
        let renderingConfiguration: PRRenderingConfiguration = .init {
            DrawingController.shared
        }
        
        let editingConfiguration: PREditingConfiguration = .init {
            EditingController.shared
        }
        
        providerConfiguration = .init(updatingDelegate: UpdateController.shared, content: {
            [renderingConfiguration]
        })
        self.renderingConfiguration = renderingConfiguration
        self.editingConfiguration = editingConfiguration
        
        // PRRenderer이 나옴. 여기서 View 접근해서 addSubview:
        // /System/Library/PrivateFrameworks/PosterBoard.framework/PosterBoard에 Extension 하드코딩 되어 있음
        // 아닌듯
        let sceneDelegate = renderingConfiguration.sceneDelegate
        print(sceneDelegate)
    }
}

/*
 PridePosterExtension.DrawingController
 PridePosterExtension.EditingController
 PridePosterExtension.UpdateController
 */
