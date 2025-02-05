//
//  MapPosterExtension.swift
//  MapPosterExtension
//
//  Created by Jinwoo Kim on 2/5/25.
//

import Foundation
import ExtensionFoundation
import PosterKit

/// The AppExtensionConfiguration that will be provided by this extension.
/// This is typically defined by the extension host in a framework.
struct ExampleConfiguration<E:ExampleExtension>: AppExtensionConfiguration {
    
    let appExtension: E
    
    init(_ appExtension: E) {
        self.appExtension = appExtension
    }
    
    /// Determine whether to accept the XPC connection from the host.
    func accept(connection: NSXPCConnection) -> Bool {
//        PosterKit.PRRenderingDelegate
        print(PRRenderingConfiguration.self)
        PRRenderingConfiguration {
//            Foo()
            fatalError()
        }
//        print(PRRenderingDelegate.self)
        // TODO: Configure the XPC connection and return true
        return false
    }
}

/// The AppExtension protocol to which this extension will conform.
/// This is typically defined by the extension host in a framework.
protocol ExampleExtension : AppExtension { }

extension ExampleExtension {
    @MainActor
    var configuration: ExampleConfiguration<some ExampleExtension> {
        // Return your extension's configuration upon request.
        return ExampleConfiguration(self)
    }
}

@main
class MapPosterExtension: ExampleExtension {
    required init() {
        // Initialize your extension here.
    }
}
